#!/usr/bin/env python
#
# Beautiful Capi generates beautiful C API wrappers for your C++ classes
# Copyright (C) 2015 Petr Petrovich Petrov
#
# This file is part of Beautiful Capi.
#
# Beautiful Capi is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Beautiful Capi is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with Beautiful Capi.  If not, see <http://www.gnu.org/licenses/>.
#


from collections import OrderedDict
from ParamsParser import TBeautifulCapiParams
from FileGenerator import FileGenerator, WatchdogScope, Indent, IndentScope, Unindent, IfDefScope
from FileCache import FileCache
from Helpers import if_required_then_add_empty_line


class CFunction(object):
    def __init__(self, path_to_namespace: [str], return_type: str, name: str, arguments: str, body: FileGenerator):
        self.path_to_namespace = path_to_namespace
        self.return_type = return_type
        self.name = name
        self.arguments = arguments
        self.body = body


class Pointer2CFunction(object):
    def __init__(self, path_to_namespace: [str], return_type: str, name: str, arguments: str):
        self.path_to_namespace = path_to_namespace
        self.return_type = return_type
        self.name = name
        self.arguments = arguments


class NamespaceInfo(object):
    def __init__(self):
        self.c_functions = []
        self.c_pointers = []


class CapiGenerator(object):
    def __init__(self, main_exception_traits, no_handling_exception_traits, params: TBeautifulCapiParams):
        self.params = params
        self.namespace_name_2_c_functions = {}
        self.main_exception_traits = main_exception_traits
        self.no_handling_exception_traits = no_handling_exception_traits
        self.additional_includes = FileGenerator(None)
        self.additional_includes.put_include_files()
        self.additional_includes.include_system_header('stdexcept')
        self.additional_includes.include_system_header('cassert')
        self.callback_implementations = []
        self.cur_api_define = None
        self.cur_capi_prefix = None
        self.cur_api_convention = None
        self.sorted_by_ns = None

    def get_exception_traits(self, no_except: bool):
        if no_except:
            return self.no_handling_exception_traits
        return self.main_exception_traits

    def __put_define_apple_or_linux(self, out: FileGenerator):
        out.put_line('#if defined(__GNUC__) && __GNUC__ >= 4')
        with Indent(out):
            out.put_line('#define {0} {1} __attribute__ ((visibility ("default")))'.format(
                self.cur_api_define, self.cur_capi_prefix))
        out.put_line('#else')
        with Indent(out):
            out.put_line('#define {0} {1}'.format(self.cur_api_define, self.cur_capi_prefix))
        out.put_line('#endif')
        out.put_line('#if defined __i386__')
        with Indent(out):
            out.put_line('#define {0} __attribute__ ((cdecl))'.format(self.cur_api_convention))
        out.put_line('#else')
        with Indent(out):
            out.put_line('#define {0}'.format(self.cur_api_convention))
        out.put_line('#endif')

    def __put_api_define(self, out: FileGenerator, dll_import_or_export):
        out.put_line('#ifdef _WIN32')
        with Indent(out):
            out.put_line('#ifdef __GNUC__')
            with Indent(out):
                out.put_line('#define {0} {1} __attribute__ (({2}))'.format(
                    self.cur_api_define, self.cur_capi_prefix, dll_import_or_export))
                out.put_line('#define {0} __attribute__ ((cdecl))'.format(self.cur_api_convention))
            out.put_line('#else')
            with Indent(out):
                out.put_line('#define {0} {1} __declspec({2})'.format(
                    self.cur_api_define, self.cur_capi_prefix, dll_import_or_export))
                out.put_line('#define {0} __cdecl'.format(self.cur_api_convention))
            out.put_line('#endif')
        out.put_line('#elif __APPLE__')
        with Indent(out):
            self.__put_define_apple_or_linux(out)
        out.put_line('#elif __unix__ || __linux__')
        with Indent(out):
            self.__put_define_apple_or_linux(out)
        out.put_line('#else')
        with Indent(out):
            out.put_line('#error "Unknown platform"')
        out.put_line('#endif')
        out.put_line('')

    def __generate_callback_typedefs(self, namespace_info, out):
        for c_pointer in namespace_info.c_pointers:
            out.put_line('typedef {return_type} ({convention} *{name})({arguments});'.format(
                return_type=c_pointer.return_type,
                convention=self.cur_api_convention,
                name=c_pointer.name,
                arguments=c_pointer.arguments))
        if namespace_info.c_pointers:
            out.put_line('')

    def __generate_callback_implementations(self, output_capi_impl):
        if self.callback_implementations:
            self.main_exception_traits.generate_check_and_throw_exception_for_impl(output_capi_impl)
            output_capi_impl.put_line('')
        for callback_implementation in self.callback_implementations:
            output_capi_impl.put_file(callback_implementation)
            output_capi_impl.put_line('')

    def __generate_capi_defines(self, namespace_name, output_capi):
        self.cur_api_define = '{0}_API'.format(namespace_name)
        self.cur_api_convention = '{0}_API_CONVENTION'.format(namespace_name)
        self.cur_capi_prefix = '{0}_CAPI_PREFIX'.format(namespace_name)
        output_capi.put_line('#ifdef __cplusplus')
        with Indent(output_capi):
            output_capi.put_line('#define {0} extern "C"'.format(self.cur_capi_prefix))
        output_capi.put_line('#else')
        with Indent(output_capi):
            output_capi.put_line('#define {0}'.format(self.cur_capi_prefix))
        output_capi.put_line('#endif')
        output_capi.put_line('')
        self.__put_api_define(output_capi, 'dllimport')

    def __generate_capi_impl_defines(self, namespace_name, output_capi_impl):
        self.cur_api_define = '{0}_API'.format(namespace_name)
        self.cur_api_convention = '{0}_API_CONVENTION'.format(namespace_name)
        self.cur_capi_prefix = 'extern "C"'
        self.__put_api_define(output_capi_impl, 'dllexport')

    @staticmethod
    def __generate_function_pointers(namespace_info, output_capi, define: bool):
        output_capi.put_line('')
        for c_function in namespace_info.c_functions:
            output_capi.put_line('extern {name}_function_type {name}{define_to_null_str};'.format(
                name=c_function.name, define_to_null_str=' = 0' if define else ''))

    @staticmethod
    def __generate_module_init_members(output_capi):
        output_capi.put_line('#ifdef _WIN32')
        output_capi.put_line('HINSTANCE handle;')
        output_capi.put_line('#else')
        output_capi.put_line('void* handle;')
        output_capi.put_line('#endif')
        output_capi.put_line('')

    @staticmethod
    def __generate_module_init_load_function(output_capi):
        output_capi.put_line('template<class FunctionPointerType>')
        output_capi.put_line('void load_function(FunctionPointerType& to_init, const char* name)')
        with IndentScope(output_capi):
            output_capi.put_line('#ifdef _WIN32')
            output_capi.put_line(
                'to_init = reinterpret_cast<FunctionPointerType>(GetProcAddress(handle, name));')
            output_capi.put_line('#else')
            output_capi.put_line(
                'to_init = reinterpret_cast<FunctionPointerType>(dlsym(handle, name));')
            output_capi.put_line('#endif')
            output_capi.put_line('if (!to_init)')
            with IndentScope(output_capi):
                output_capi.put_line('std::stringstream error_message;')
                output_capi.put_line('error_message << "Can\'t obtain function " << name;')
                output_capi.put_line('throw std::runtime_error(error_message.str());')
        output_capi.put_line('')

    @staticmethod
    def __generate_module_init_load_module(namespace_info, output_capi):
        output_capi.put_line('void load_module(const char* shared_library_name)')
        with IndentScope(output_capi):
            output_capi.put_line('if (!shared_library_name) throw std::runtime_error("Null library name was passed");')
            output_capi.put_line('#ifdef _WIN32')
            output_capi.put_line('handle = LoadLibraryA(shared_library_name);')
            output_capi.put_line('#else')
            output_capi.put_line('handle = dlopen(shared_library_name, RTLD_NOW);')
            output_capi.put_line('#endif')
            output_capi.put_line('if (!handle)')
            with IndentScope(output_capi):
                output_capi.put_line('std::stringstream error_message;')
                output_capi.put_line('error_message << "Can\'t load shared library " << shared_library_name;')
                output_capi.put_line('throw std::runtime_error(error_message.str());')
            for c_function in namespace_info.c_functions:
                output_capi.put_line('load_function<{0}_function_type>({0}, "{0}");'.format(c_function.name))
        output_capi.put_line('')

    def __generate_module_init_constructor(self, output_capi):
        output_capi.put_line('Initialization(const char* shared_library_name)')
        with IndentScope(output_capi):
            output_capi.put_line('load_module(shared_library_name);')
        if self.params.shared_library_name:
            output_capi.put_line('Initialization()')
            with IndentScope(output_capi):
                output_capi.put_line('#ifdef _WIN32')
                output_capi.put_line('load_module("{shared_library_name}.dll");'.format(
                    shared_library_name=self.params.shared_library_name))
                output_capi.put_line('#elif __APPLE__')
                output_capi.put_line('load_module("lib{shared_library_name}.dylib");'.format(
                    shared_library_name=self.params.shared_library_name))
                output_capi.put_line('#else')
                output_capi.put_line('load_module("lib{shared_library_name}.so");'.format(
                    shared_library_name=self.params.shared_library_name))
                output_capi.put_line('#endif')

    @staticmethod
    def __generate_module_init_destructor(output_capi):
        output_capi.put_line('~Initialization()')
        with IndentScope(output_capi):
            output_capi.put_line('#ifdef _WIN32')
            output_capi.put_line('FreeLibrary(handle);')
            output_capi.put_line('#else')
            output_capi.put_line('dlclose(handle);')
            output_capi.put_line('#endif')

    def __generate_module_init_body(self, namespace_info, output_capi):
        output_capi.put_line('class Initialization')
        with IndentScope(output_capi, '};'):
            self.__generate_module_init_members(output_capi)
            self.__generate_module_init_load_function(output_capi)
            self.__generate_module_init_load_module(namespace_info, output_capi)
            if not self.params.shared_library_name:
                output_capi.put_line('Initialization();')
            output_capi.put_line('Initialization(const Initialization&);')
            with Unindent(output_capi):
                output_capi.put_line('public:')
            self.__generate_module_init_constructor(output_capi)
            self.__generate_module_init_destructor(output_capi)

    def __generate_module_init(self, namespace_info, output_capi):
        output_capi.put_line('')
        with IfDefScope(output_capi, '__cplusplus'):
            output_capi.put_include_files(False)
            output_capi.include_system_header('stdexcept')
            output_capi.include_system_header('sstream')
            output_capi.put_line('#ifdef _WIN32')
            output_capi.put_line('#include <Windows.h>')
            output_capi.put_line('#else')
            output_capi.put_line('#include <dlfcn.h>')
            output_capi.put_line('#endif')
            output_capi.put_line('')
            # We always have at least one element
            output_capi.put_line('namespace {0}'.format(namespace_info.c_functions[0].path_to_namespace[0]))
            with IndentScope(output_capi):
                self.__generate_module_init_body(namespace_info, output_capi)

    def __generate_dynamic_capi(self, namespace_info, namespace_name, output_capi):
        for c_function in namespace_info.c_functions:
            namespace_info.c_pointers.append(
                Pointer2CFunction(
                    c_function.path_to_namespace,
                    c_function.return_type,
                    c_function.name + '_function_type',
                    c_function.arguments
                )
            )
        self.__generate_callback_typedefs(namespace_info, output_capi)
        output_capi.put_line('#ifdef ' + namespace_name + '_CAPI_DEFINE_FUNCTION_POINTERS')
        self.__generate_function_pointers(namespace_info, output_capi, True)
        output_capi.put_line('')
        output_capi.put_line('#else /* ' + namespace_name + '_CAPI_DEFINE_FUNCTION_POINTERS */')
        self.__generate_function_pointers(namespace_info, output_capi, False)
        output_capi.put_line('')
        output_capi.put_line('#endif /* ' + namespace_name + '_CAPI_DEFINE_FUNCTION_POINTERS */')
        self.__generate_module_init(namespace_info, output_capi)

    def __generate_static_capi(self, namespace_info, output_capi):
        self.__generate_callback_typedefs(namespace_info, output_capi)
        for c_function in namespace_info.c_functions:
            output_capi.put_line('{api} {return_type} {convention} {name}({arguments});'.format(
                api=self.cur_api_define,
                return_type=c_function.return_type,
                convention=self.cur_api_convention,
                name=c_function.name,
                arguments=c_function.arguments))

    def __generate_capi(self, file_cache):
        for namespace_name, namespace_info in self.sorted_by_ns.items():
            # We always have at least one element
            output_capi = file_cache.get_file_for_capi(namespace_info.c_functions[0].path_to_namespace)
            output_capi.put_begin_cpp_comments(self.params)
            with WatchdogScope(output_capi, namespace_name + '_CAPI_INCLUDED'):
                self.main_exception_traits.generate_exception_info(output_capi)
                self.__generate_capi_defines(namespace_name, output_capi)

                output_capi.put_line('#ifndef ' + namespace_name + '_CAPI_USE_DYNAMIC_LOADER')
                output_capi.put_line('')
                self.__generate_static_capi(namespace_info, output_capi)
                output_capi.put_line('')
                output_capi.put_line('#else /* ' + namespace_name + '_CAPI_USE_DYNAMIC_LOADER */')
                output_capi.put_line('')
                self.__generate_dynamic_capi(namespace_info, namespace_name, output_capi)
                output_capi.put_line('')
                output_capi.put_line('#endif /* ' + namespace_name + '_CAPI_USE_DYNAMIC_LOADER */')

    def __generate_capi_impl(self, output_capi_impl):
        first_namespace = True
        for namespace_name, namespace_info in self.sorted_by_ns.items():
            first_namespace = if_required_then_add_empty_line(first_namespace, output_capi_impl)
            first_function = True
            for c_function in namespace_info.c_functions:
                first_function = if_required_then_add_empty_line(first_function, output_capi_impl)

                output_capi_impl.put_line('{api} {return_type} {convention} {name}({arguments})'.format(
                    api=self.cur_api_define,
                    return_type=c_function.return_type,
                    convention=self.cur_api_convention,
                    name=c_function.name,
                    arguments=c_function.arguments))
                output_capi_impl.put_file(c_function.body)

    def add_c_function(self, path_to_namespace: [str], return_type: str,
                       name: str, arguments: str, body: FileGenerator):
        new_c_function = CFunction(path_to_namespace, return_type, name, arguments, body)
        namespace_name = path_to_namespace[0].upper()  # We always have at least one element
        if namespace_name not in self.namespace_name_2_c_functions:
            new_namespace_info = NamespaceInfo()
            new_namespace_info.c_functions.append(new_c_function)
            self.namespace_name_2_c_functions.update({namespace_name: new_namespace_info})
        else:
            self.namespace_name_2_c_functions[namespace_name].c_functions.append(new_c_function)

    def add_c_function_pointer(self, path_to_namespace: [str], return_type: str, name: str, arguments: str):
        new_c_pointer = Pointer2CFunction(path_to_namespace, return_type, name, arguments)
        namespace_name = path_to_namespace[0].upper()  # We always have at least one element
        if namespace_name not in self.namespace_name_2_c_functions:
            new_namespace_info = NamespaceInfo()
            new_namespace_info.c_pointers.append(new_c_pointer)
            self.namespace_name_2_c_functions.update({namespace_name: new_namespace_info})
        else:
            self.namespace_name_2_c_functions[namespace_name].c_pointers.append(new_c_pointer)

    def generate(self, file_cache: FileCache):
        self.main_exception_traits.generate_check_and_throw_exception(file_cache)

        output_capi_impl = FileGenerator(self.params.output_wrap_file_name)
        output_capi_impl.put_begin_cpp_comments(self.params)
        output_capi_impl.put_file(self.additional_includes)
        self.main_exception_traits.generate_exception_info(output_capi_impl)

        self.sorted_by_ns = OrderedDict(sorted(self.namespace_name_2_c_functions.items()))
        for namespace_name, namespace_info in self.sorted_by_ns.items():
            self.__generate_capi_impl_defines(namespace_name, output_capi_impl)
            self.__generate_callback_typedefs(namespace_info, output_capi_impl)

        self.__generate_callback_implementations(output_capi_impl)
        self.__generate_capi_impl(output_capi_impl)
        self.__generate_capi(file_cache)
