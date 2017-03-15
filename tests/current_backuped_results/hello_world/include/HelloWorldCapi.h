/*
 * Beautiful Capi generates beautiful C API wrappers for your C++ classes
 * Copyright (C) 2015 Petr Petrovich Petrov
 *
 * This file is part of Beautiful Capi.
 *
 * Beautiful Capi is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Beautiful Capi is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Beautiful Capi.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/*
 * WARNING: This file was automatically generated by Beautiful Capi!
 * Do not edit this file! Please edit the source API description.
 */

#ifndef HELLOWORLD_CAPI_INCLUDED
#define HELLOWORLD_CAPI_INCLUDED

#include <stddef.h>

#ifdef __cplusplus
    #define HELLOWORLD_CAPI_PREFIX extern "C"
#else /* __cplusplus */
    #define HELLOWORLD_CAPI_PREFIX
#endif /* __cplusplus */

#ifdef _WIN32
    #ifdef __GNUC__
        #define HELLOWORLD_API HELLOWORLD_CAPI_PREFIX __attribute__ ((dllimport))
        #define HELLOWORLD_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define HELLOWORLD_API HELLOWORLD_CAPI_PREFIX __declspec(dllimport)
        #define HELLOWORLD_API_CONVENTION __cdecl
    #endif
#elif __APPLE__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define HELLOWORLD_API HELLOWORLD_CAPI_PREFIX __attribute__ ((visibility ("default")))
    #else
        #define HELLOWORLD_API HELLOWORLD_CAPI_PREFIX
    #endif
    #ifdef __i386__
        #define HELLOWORLD_API_CONVENTION __attribute__ ((cdecl))
    #else /* __i386__ */
        #define HELLOWORLD_API_CONVENTION
    #endif /* __i386__ */
#elif __unix__ || __linux__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define HELLOWORLD_API HELLOWORLD_CAPI_PREFIX __attribute__ ((visibility ("default")))
    #else
        #define HELLOWORLD_API HELLOWORLD_CAPI_PREFIX
    #endif
    #ifdef __i386__
        #define HELLOWORLD_API_CONVENTION __attribute__ ((cdecl))
    #else /* __i386__ */
        #define HELLOWORLD_API_CONVENTION
    #endif /* __i386__ */
#else
    #error "Unknown platform"
#endif

#define HELLOWORLD_MAJOR_VERSION 1
#define HELLOWORLD_MINOR_VERSION 0
#define HELLOWORLD_PATCH_VERSION 0

#ifdef __cplusplus
    #ifdef _MSC_VER
        #if _MSC_VER >= 1900
            #define HELLOWORLD_NOEXCEPT noexcept
        #else /* _MSC_VER >= 1900 */
            #define HELLOWORLD_NOEXCEPT
        #endif /* _MSC_VER >= 1900 */
        #if _MSC_VER >= 1600
            #define HELLOWORLD_CPP_COMPILER_HAS_RVALUE_REFERENCES
        #endif /* _MSC_VER >= 1600 */
        #if _MSC_VER >= 1800
            #define HELLOWORLD_CPP_COMPILER_HAS_MOVE_CONSTRUCTOR_DELETE
        #endif /* _MSC_VER >= 1800 */
    #else /* _MSC_VER */
        #if __cplusplus >= 201103L
            #define HELLOWORLD_NOEXCEPT noexcept
            #define HELLOWORLD_CPP_COMPILER_HAS_RVALUE_REFERENCES
            #define HELLOWORLD_CPP_COMPILER_HAS_MOVE_CONSTRUCTOR_DELETE
        #else /* __cplusplus >= 201103L */
            #define HELLOWORLD_NOEXCEPT
        #endif /* __cplusplus >= 201103L */
    #endif /* _MSC_VER */
#endif /* __cplusplus */

#ifndef HELLOWORLD_CAPI_USE_DYNAMIC_LOADER

    HELLOWORLD_API int HELLOWORLD_API_CONVENTION hello_world_get_major_version();
    HELLOWORLD_API int HELLOWORLD_API_CONVENTION hello_world_get_minor_version();
    HELLOWORLD_API int HELLOWORLD_API_CONVENTION hello_world_get_patch_version();
    HELLOWORLD_API void* HELLOWORLD_API_CONVENTION hello_world_printer_default();
    HELLOWORLD_API void HELLOWORLD_API_CONVENTION hello_world_printer_show_const(void* object_pointer);
    HELLOWORLD_API void* HELLOWORLD_API_CONVENTION hello_world_printer_copy(void* object_pointer);
    HELLOWORLD_API void HELLOWORLD_API_CONVENTION hello_world_printer_delete(void* object_pointer);

    #ifdef __cplusplus

    #include <stdexcept>
    #include <sstream>

    namespace HelloWorld
    {
        class Initialization
        {
        public:
            Initialization()
            {
                const int major_version = hello_world_get_major_version();
                const int minor_version = hello_world_get_minor_version();
                const int patch_version = hello_world_get_patch_version();
                if (major_version != HELLOWORLD_MAJOR_VERSION || minor_version != HELLOWORLD_MINOR_VERSION || patch_version != HELLOWORLD_PATCH_VERSION)
                {
                    std::stringstream error_message;
                    error_message << "Incorrect version of library. ";
                    error_message << "Expected version is " << HELLOWORLD_MAJOR_VERSION << "." << HELLOWORLD_MINOR_VERSION << "." << HELLOWORLD_PATCH_VERSION << ". ";
                    error_message << "Found version is " << major_version << "." << minor_version << "." << patch_version << ".";
                    throw std::runtime_error(error_message.str());
                }
            }
        };
    }

    #endif /* __cplusplus */

#else /* HELLOWORLD_CAPI_USE_DYNAMIC_LOADER */

    typedef int (HELLOWORLD_API_CONVENTION *hello_world_get_major_version_function_type)();
    typedef int (HELLOWORLD_API_CONVENTION *hello_world_get_minor_version_function_type)();
    typedef int (HELLOWORLD_API_CONVENTION *hello_world_get_patch_version_function_type)();
    typedef void* (HELLOWORLD_API_CONVENTION *hello_world_printer_default_function_type)();
    typedef void (HELLOWORLD_API_CONVENTION *hello_world_printer_show_const_function_type)(void* object_pointer);
    typedef void* (HELLOWORLD_API_CONVENTION *hello_world_printer_copy_function_type)(void* object_pointer);
    typedef void (HELLOWORLD_API_CONVENTION *hello_world_printer_delete_function_type)(void* object_pointer);

    #ifdef HELLOWORLD_CAPI_DEFINE_FUNCTION_POINTERS

        #ifdef hello_world_get_major_version_define_function_pointer_var
            hello_world_get_major_version_define_function_pointer_var
        #else
            hello_world_get_major_version_function_type hello_world_get_major_version = 0;
        #endif
        #ifdef hello_world_get_minor_version_define_function_pointer_var
            hello_world_get_minor_version_define_function_pointer_var
        #else
            hello_world_get_minor_version_function_type hello_world_get_minor_version = 0;
        #endif
        #ifdef hello_world_get_patch_version_define_function_pointer_var
            hello_world_get_patch_version_define_function_pointer_var
        #else
            hello_world_get_patch_version_function_type hello_world_get_patch_version = 0;
        #endif
        #ifdef hello_world_printer_default_define_function_pointer_var
            hello_world_printer_default_define_function_pointer_var
        #else
            hello_world_printer_default_function_type hello_world_printer_default = 0;
        #endif
        #ifdef hello_world_printer_show_const_define_function_pointer_var
            hello_world_printer_show_const_define_function_pointer_var
        #else
            hello_world_printer_show_const_function_type hello_world_printer_show_const = 0;
        #endif
        #ifdef hello_world_printer_copy_define_function_pointer_var
            hello_world_printer_copy_define_function_pointer_var
        #else
            hello_world_printer_copy_function_type hello_world_printer_copy = 0;
        #endif
        #ifdef hello_world_printer_delete_define_function_pointer_var
            hello_world_printer_delete_define_function_pointer_var
        #else
            hello_world_printer_delete_function_type hello_world_printer_delete = 0;
        #endif

    #else /* HELLOWORLD_CAPI_DEFINE_FUNCTION_POINTERS */

        extern hello_world_get_major_version_function_type hello_world_get_major_version;
        extern hello_world_get_minor_version_function_type hello_world_get_minor_version;
        extern hello_world_get_patch_version_function_type hello_world_get_patch_version;
        extern hello_world_printer_default_function_type hello_world_printer_default;
        extern hello_world_printer_show_const_function_type hello_world_printer_show_const;
        extern hello_world_printer_copy_function_type hello_world_printer_copy;
        extern hello_world_printer_delete_function_type hello_world_printer_delete;

    #endif /* HELLOWORLD_CAPI_DEFINE_FUNCTION_POINTERS */

    #ifdef __cplusplus

    #include <stdexcept>
    #include <sstream>

    #ifdef _WIN32
        #include <Windows.h>
    #else /* _WIN32 */
        #include <dlfcn.h>
    #endif /* _WIN32 */

    namespace HelloWorld
    {
        class Initialization
        {
            #ifdef _WIN32
                HINSTANCE handle;
            #else /* _WIN32 */
                void* handle;
            #endif /* _WIN32 */

            template<class FunctionPointerType>
            void load_function(FunctionPointerType& to_init, const char* name)
            {
                #ifdef _WIN32
                    to_init = reinterpret_cast<FunctionPointerType>(GetProcAddress(handle, name));
                #else /* _WIN32 */
                    to_init = reinterpret_cast<FunctionPointerType>(dlsym(handle, name));
                #endif /* _WIN32 */
                if (!to_init)
                {
                    std::stringstream error_message;
                    error_message << "Can't obtain function " << name;
                    throw std::runtime_error(error_message.str());
                }
            }

            void load_module(const char* shared_library_name)
            {
                if (!shared_library_name) throw std::runtime_error("Null library name was passed");
                #ifdef _WIN32
                    handle = LoadLibraryA(shared_library_name);
                #else /* _WIN32 */
                    handle = dlopen(shared_library_name, RTLD_NOW);
                #endif /* _WIN32 */
                if (!handle)
                {
                    std::stringstream error_message;
                    error_message << "Can't load shared library " << shared_library_name;
                    throw std::runtime_error(error_message.str());
                }
                #ifdef hello_world_get_major_version_load_function_call
                    hello_world_get_major_version_load_function_call
                #else /* hello_world_get_major_version_load_function_call */
                    load_function<hello_world_get_major_version_function_type>(hello_world_get_major_version, "hello_world_get_major_version");
                #endif /* hello_world_get_major_version_load_function_call */
                #ifdef hello_world_get_minor_version_load_function_call
                    hello_world_get_minor_version_load_function_call
                #else /* hello_world_get_minor_version_load_function_call */
                    load_function<hello_world_get_minor_version_function_type>(hello_world_get_minor_version, "hello_world_get_minor_version");
                #endif /* hello_world_get_minor_version_load_function_call */
                #ifdef hello_world_get_patch_version_load_function_call
                    hello_world_get_patch_version_load_function_call
                #else /* hello_world_get_patch_version_load_function_call */
                    load_function<hello_world_get_patch_version_function_type>(hello_world_get_patch_version, "hello_world_get_patch_version");
                #endif /* hello_world_get_patch_version_load_function_call */
                #ifdef hello_world_printer_default_load_function_call
                    hello_world_printer_default_load_function_call
                #else /* hello_world_printer_default_load_function_call */
                    load_function<hello_world_printer_default_function_type>(hello_world_printer_default, "hello_world_printer_default");
                #endif /* hello_world_printer_default_load_function_call */
                #ifdef hello_world_printer_show_const_load_function_call
                    hello_world_printer_show_const_load_function_call
                #else /* hello_world_printer_show_const_load_function_call */
                    load_function<hello_world_printer_show_const_function_type>(hello_world_printer_show_const, "hello_world_printer_show_const");
                #endif /* hello_world_printer_show_const_load_function_call */
                #ifdef hello_world_printer_copy_load_function_call
                    hello_world_printer_copy_load_function_call
                #else /* hello_world_printer_copy_load_function_call */
                    load_function<hello_world_printer_copy_function_type>(hello_world_printer_copy, "hello_world_printer_copy");
                #endif /* hello_world_printer_copy_load_function_call */
                #ifdef hello_world_printer_delete_load_function_call
                    hello_world_printer_delete_load_function_call
                #else /* hello_world_printer_delete_load_function_call */
                    load_function<hello_world_printer_delete_function_type>(hello_world_printer_delete, "hello_world_printer_delete");
                #endif /* hello_world_printer_delete_load_function_call */
                const int major_version = hello_world_get_major_version();
                const int minor_version = hello_world_get_minor_version();
                const int patch_version = hello_world_get_patch_version();
                if (major_version != HELLOWORLD_MAJOR_VERSION || minor_version != HELLOWORLD_MINOR_VERSION || patch_version != HELLOWORLD_PATCH_VERSION)
                {
                    std::stringstream error_message;
                    error_message << "Incorrect version of " << shared_library_name << " library. ";
                    error_message << "Expected version is " << HELLOWORLD_MAJOR_VERSION << "." << HELLOWORLD_MINOR_VERSION << "." << HELLOWORLD_PATCH_VERSION << ". ";
                    error_message << "Found version is " << major_version << "." << minor_version << "." << patch_version << ".";
                    throw std::runtime_error(error_message.str());
                }
            }

            Initialization();
            Initialization(const Initialization&);
            #ifdef HELLOWORLD_CPP_COMPILER_HAS_MOVE_CONSTRUCTOR_DELETE
                Initialization(Initialization &&) = delete;
            #endif /* HELLOWORLD_CPP_COMPILER_HAS_MOVE_CONSTRUCTOR_DELETE */
        public:
            Initialization(const char* shared_library_name)
            {
                load_module(shared_library_name);
            }
            ~Initialization()
            {
                #ifdef _WIN32
                    FreeLibrary(handle);
                #else /* _WIN32 */
                    dlclose(handle);
                #endif /* _WIN32 */
                #ifdef hello_world_get_major_version_zero_function_pointer
                    hello_world_get_major_version_zero_function_pointer
                #else /* hello_world_get_major_version_zero_function_pointer */
                    hello_world_get_major_version = 0;
                #endif /* hello_world_get_major_version_zero_function_pointer */
                #ifdef hello_world_get_minor_version_zero_function_pointer
                    hello_world_get_minor_version_zero_function_pointer
                #else /* hello_world_get_minor_version_zero_function_pointer */
                    hello_world_get_minor_version = 0;
                #endif /* hello_world_get_minor_version_zero_function_pointer */
                #ifdef hello_world_get_patch_version_zero_function_pointer
                    hello_world_get_patch_version_zero_function_pointer
                #else /* hello_world_get_patch_version_zero_function_pointer */
                    hello_world_get_patch_version = 0;
                #endif /* hello_world_get_patch_version_zero_function_pointer */
                #ifdef hello_world_printer_default_zero_function_pointer
                    hello_world_printer_default_zero_function_pointer
                #else /* hello_world_printer_default_zero_function_pointer */
                    hello_world_printer_default = 0;
                #endif /* hello_world_printer_default_zero_function_pointer */
                #ifdef hello_world_printer_show_const_zero_function_pointer
                    hello_world_printer_show_const_zero_function_pointer
                #else /* hello_world_printer_show_const_zero_function_pointer */
                    hello_world_printer_show_const = 0;
                #endif /* hello_world_printer_show_const_zero_function_pointer */
                #ifdef hello_world_printer_copy_zero_function_pointer
                    hello_world_printer_copy_zero_function_pointer
                #else /* hello_world_printer_copy_zero_function_pointer */
                    hello_world_printer_copy = 0;
                #endif /* hello_world_printer_copy_zero_function_pointer */
                #ifdef hello_world_printer_delete_zero_function_pointer
                    hello_world_printer_delete_zero_function_pointer
                #else /* hello_world_printer_delete_zero_function_pointer */
                    hello_world_printer_delete = 0;
                #endif /* hello_world_printer_delete_zero_function_pointer */
            }
        };
    }

    #endif /* __cplusplus */

#endif /* HELLOWORLD_CAPI_USE_DYNAMIC_LOADER */

#endif /* HELLOWORLD_CAPI_INCLUDED */

