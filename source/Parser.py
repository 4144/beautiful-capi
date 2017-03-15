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


#
# WARNING: This file was automatically generated by Xsd2Python3.py program!
# Do not edit this file! Please edit the source XSD schema.
#


from enum import Enum


def string_to_bool(string_value):
    return string_value.lower() in ['true', 'on', 'yes', '1']


def string_to_int(string_value):
    return int(string_value)


class TLifecycle(Enum):
    copy_semantic = 0
    raw_pointer_semantic = 1
    reference_counted = 2

    @staticmethod
    def load(value):
        if value == "copy_semantic":
            return TLifecycle.copy_semantic
        if value == "raw_pointer_semantic":
            return TLifecycle.raw_pointer_semantic
        if value == "reference_counted":
            return TLifecycle.reference_counted
        raise ValueError


class TOverloadSuffixMode(Enum):
    Off = 0
    Notify = 1
    Silent = 2

    @staticmethod
    def load(value):
        if value == "Off":
            return TOverloadSuffixMode.Off
        if value == "Notify":
            return TOverloadSuffixMode.Notify
        if value == "Silent":
            return TOverloadSuffixMode.Silent
        raise ValueError


class TBeautifulCapiRoot(object):
    def __init__(self):
        self.all_items = []
        self.project_name = ""
        self.project_name_filled = False
        self.major_version = 1
        self.major_version_filled = False
        self.minor_version = 0
        self.minor_version_filled = False
        self.patch_version = 0
        self.patch_version_filled = False
        self.namespaces = []

    def load_element(self, element):
        if element.nodeName == "namespace":
            new_element = TNamespace()
            new_element.load(element)
            self.namespaces.append(new_element)
            return True
        return False

    def load_attributes(self, dom_node):
        if dom_node.hasAttribute("project_name"):
            cur_attr = dom_node.getAttribute("project_name")
            self.project_name = cur_attr
            self.project_name_filled = True
        if dom_node.hasAttribute("major_version"):
            cur_attr = dom_node.getAttribute("major_version")
            self.major_version = string_to_int(cur_attr)
            self.major_version_filled = True
        if dom_node.hasAttribute("minor_version"):
            cur_attr = dom_node.getAttribute("minor_version")
            self.minor_version = string_to_int(cur_attr)
            self.minor_version_filled = True
        if dom_node.hasAttribute("patch_version"):
            cur_attr = dom_node.getAttribute("patch_version")
            self.patch_version = string_to_int(cur_attr)
            self.patch_version_filled = True

    def load(self, dom_node):
        for element in dom_node.childNodes:
            self.load_element(element)
        self.load_attributes(dom_node)


class TApiInclude(object):
    def __init__(self):
        self.all_items = []
        self.path = ""
        self.path_filled = False

    def load_element(self, element):
        return False

    def load_attributes(self, dom_node):
        if dom_node.hasAttribute("path"):
            cur_attr = dom_node.getAttribute("path")
            self.path = cur_attr
            self.path_filled = True

    def load(self, dom_node):
        for element in dom_node.childNodes:
            self.load_element(element)
        self.load_attributes(dom_node)


class TNamespace(object):
    def __init__(self):
        self.all_items = []
        self.name = ""
        self.name_filled = False
        self.implementation_header = ""
        self.implementation_header_filled = False
        self.overload_suffix_mode = TOverloadSuffixMode.Notify
        self.overload_suffix_mode_filled = False
        self.includes = []
        self.namespaces = []
        self.include_headers = []
        self.enumerations = []
        self.classes = []
        self.functions = []
        self.templates = []
        self.property_set_prefixes = []
        self.property_get_prefixes = []
        self.property_get_consts = []

    def load_element(self, element):
        if element.nodeName == "include":
            new_element = TApiInclude()
            new_element.load(element)
            self.includes.append(new_element)
            return True
        if element.nodeName == "namespace":
            new_element = TNamespace()
            new_element.load(element)
            self.namespaces.append(new_element)
            return True
        if element.nodeName == "include_header":
            new_element = THeaderInclude()
            new_element.load(element)
            self.include_headers.append(new_element)
            return True
        if element.nodeName == "enumeration":
            new_element = TEnumeration()
            new_element.load(element)
            self.enumerations.append(new_element)
            return True
        if element.nodeName == "class":
            new_element = TClass()
            new_element.load(element)
            self.classes.append(new_element)
            return True
        if element.nodeName == "function":
            new_element = TFunction()
            new_element.load(element)
            self.functions.append(new_element)
            return True
        if element.nodeName == "template":
            new_element = TTemplate()
            new_element.load(element)
            self.templates.append(new_element)
            return True
        if element.nodeName == "property_set_prefix":
            new_element = TPropertySetPrefix()
            new_element.load(element)
            self.property_set_prefixes.append(new_element)
            return True
        if element.nodeName == "property_get_prefix":
            new_element = TPropertyGetPrefix()
            new_element.load(element)
            self.property_get_prefixes.append(new_element)
            return True
        if element.nodeName == "property_get_const":
            new_element = TPropertyGetConst()
            new_element.load(element)
            self.property_get_consts.append(new_element)
            return True
        return False

    def load_attributes(self, dom_node):
        if dom_node.hasAttribute("name"):
            cur_attr = dom_node.getAttribute("name")
            self.name = cur_attr
            self.name_filled = True
        if dom_node.hasAttribute("implementation_header"):
            cur_attr = dom_node.getAttribute("implementation_header")
            self.implementation_header = cur_attr
            self.implementation_header_filled = True
        if dom_node.hasAttribute("overload_suffix_mode"):
            cur_attr = dom_node.getAttribute("overload_suffix_mode")
            self.overload_suffix_mode = TOverloadSuffixMode.load(cur_attr)
            self.overload_suffix_mode_filled = True

    def load(self, dom_node):
        for element in dom_node.childNodes:
            self.load_element(element)
        self.load_attributes(dom_node)


class TEnumerationItem(object):
    def __init__(self):
        self.all_items = []
        self.name = ""
        self.name_filled = False
        self.value = ""
        self.value_filled = False
        self.documentations = []

    def load_element(self, element):
        if element.nodeName == "documentation":
            new_element = TGenericDocumentation()
            new_element.load(element)
            self.documentations.append(new_element)
            return True
        return False

    def load_attributes(self, dom_node):
        if dom_node.hasAttribute("name"):
            cur_attr = dom_node.getAttribute("name")
            self.name = cur_attr
            self.name_filled = True
        if dom_node.hasAttribute("value"):
            cur_attr = dom_node.getAttribute("value")
            self.value = cur_attr
            self.value_filled = True

    def load(self, dom_node):
        for element in dom_node.childNodes:
            self.load_element(element)
        self.load_attributes(dom_node)


class TEnumeration(object):
    def __init__(self):
        self.all_items = []
        self.name = ""
        self.name_filled = False
        self.underlying_type = ""
        self.underlying_type_filled = False
        self.documentations = []
        self.items = []

    def load_element(self, element):
        if element.nodeName == "documentation":
            new_element = TDocumentation()
            new_element.load(element)
            self.documentations.append(new_element)
            return True
        if element.nodeName == "item":
            new_element = TEnumerationItem()
            new_element.load(element)
            self.items.append(new_element)
            return True
        return False

    def load_attributes(self, dom_node):
        if dom_node.hasAttribute("name"):
            cur_attr = dom_node.getAttribute("name")
            self.name = cur_attr
            self.name_filled = True
        if dom_node.hasAttribute("underlying_type"):
            cur_attr = dom_node.getAttribute("underlying_type")
            self.underlying_type = cur_attr
            self.underlying_type_filled = True

    def load(self, dom_node):
        for element in dom_node.childNodes:
            self.load_element(element)
        self.load_attributes(dom_node)


class TTemplate(object):
    def __init__(self):
        self.all_items = []
        self.arguments = []
        self.instantiations = []
        self.classes = []

    def load_element(self, element):
        if element.nodeName == "argument":
            new_element = TArgument()
            new_element.load(element)
            self.arguments.append(new_element)
            return True
        if element.nodeName == "instantiation":
            new_element = TInstantiation()
            new_element.load(element)
            self.instantiations.append(new_element)
            return True
        if element.nodeName == "class":
            new_element = TClass()
            new_element.load(element)
            self.classes.append(new_element)
            return True
        return False

    def load_attributes(self, dom_node):
        pass

    def load(self, dom_node):
        for element in dom_node.childNodes:
            self.load_element(element)
        self.load_attributes(dom_node)


class TInstantiation(object):
    def __init__(self):
        self.all_items = []
        self.typedef_name = ""
        self.typedef_name_filled = False
        self.arguments = []

    def load_element(self, element):
        if element.nodeName == "argument":
            new_element = TInstantiationArgument()
            new_element.load(element)
            self.arguments.append(new_element)
            return True
        return False

    def load_attributes(self, dom_node):
        if dom_node.hasAttribute("typedef_name"):
            cur_attr = dom_node.getAttribute("typedef_name")
            self.typedef_name = cur_attr
            self.typedef_name_filled = True

    def load(self, dom_node):
        for element in dom_node.childNodes:
            self.load_element(element)
        self.load_attributes(dom_node)


class TInstantiationArgument(object):
    def __init__(self):
        self.all_items = []
        self.name = ""
        self.name_filled = False
        self.value = ""
        self.value_filled = False

    def load_element(self, element):
        return False

    def load_attributes(self, dom_node):
        if dom_node.hasAttribute("name"):
            cur_attr = dom_node.getAttribute("name")
            self.name = cur_attr
            self.name_filled = True
        if dom_node.hasAttribute("value"):
            cur_attr = dom_node.getAttribute("value")
            self.value = cur_attr
            self.value_filled = True

    def load(self, dom_node):
        for element in dom_node.childNodes:
            self.load_element(element)
        self.load_attributes(dom_node)


class TClass(object):
    def __init__(self):
        self.all_items = []
        self.name = ""
        self.name_filled = False
        self.base = ""
        self.base_filled = False
        self.implementation_class_name = ""
        self.implementation_class_name_filled = False
        self.abstract = False
        self.abstract_filled = False
        self.implementation_class_header = ""
        self.implementation_class_header_filled = False
        self.lifecycle = TLifecycle.reference_counted
        self.lifecycle_filled = False
        self.requires_cast_to_base = True
        self.requires_cast_to_base_filled = False
        self.pointer_access = False
        self.pointer_access_filled = False
        self.exception = False
        self.exception_filled = False
        self.template_line = ""
        self.template_line_filled = False
        self.typedef_name = ""
        self.typedef_name_filled = False
        self.copy_or_add_ref_noexcept = False
        self.copy_or_add_ref_noexcept_filled = False
        self.delete_or_release_noexcept = True
        self.delete_or_release_noexcept_filled = False
        self.overload_suffix_mode = TOverloadSuffixMode.Notify
        self.overload_suffix_mode_filled = False
        self.documentations = []
        self.include_headers = []
        self.enumerations = []
        self.constructors = []
        self.properties = []
        self.methods = []
        self.callbacks = []

    def load_element(self, element):
        if element.nodeName == "documentation":
            new_element = TDocumentation()
            new_element.load(element)
            self.documentations.append(new_element)
            return True
        if element.nodeName == "include_header":
            new_element = THeaderInclude()
            new_element.load(element)
            self.include_headers.append(new_element)
            return True
        if element.nodeName == "enumeration":
            new_element = TEnumeration()
            new_element.load(element)
            self.enumerations.append(new_element)
            return True
        if element.nodeName == "constructor":
            new_element = TConstructor()
            new_element.load(element)
            self.constructors.append(new_element)
            return True
        if element.nodeName == "property":
            new_element = TProperty()
            new_element.load(element)
            self.properties.append(new_element)
            return True
        if element.nodeName == "method":
            new_element = TMethod()
            new_element.load(element)
            self.methods.append(new_element)
            return True
        if element.nodeName == "callback":
            new_element = TCallback()
            new_element.load(element)
            self.callbacks.append(new_element)
            return True
        return False

    def load_attributes(self, dom_node):
        if dom_node.hasAttribute("name"):
            cur_attr = dom_node.getAttribute("name")
            self.name = cur_attr
            self.name_filled = True
        if dom_node.hasAttribute("base"):
            cur_attr = dom_node.getAttribute("base")
            self.base = cur_attr
            self.base_filled = True
        if dom_node.hasAttribute("implementation_class_name"):
            cur_attr = dom_node.getAttribute("implementation_class_name")
            self.implementation_class_name = cur_attr
            self.implementation_class_name_filled = True
        if dom_node.hasAttribute("abstract"):
            cur_attr = dom_node.getAttribute("abstract")
            self.abstract = string_to_bool(cur_attr)
            self.abstract_filled = True
        if dom_node.hasAttribute("implementation_class_header"):
            cur_attr = dom_node.getAttribute("implementation_class_header")
            self.implementation_class_header = cur_attr
            self.implementation_class_header_filled = True
        if dom_node.hasAttribute("lifecycle"):
            cur_attr = dom_node.getAttribute("lifecycle")
            self.lifecycle = TLifecycle.load(cur_attr)
            self.lifecycle_filled = True
        if dom_node.hasAttribute("requires_cast_to_base"):
            cur_attr = dom_node.getAttribute("requires_cast_to_base")
            self.requires_cast_to_base = string_to_bool(cur_attr)
            self.requires_cast_to_base_filled = True
        if dom_node.hasAttribute("pointer_access"):
            cur_attr = dom_node.getAttribute("pointer_access")
            self.pointer_access = string_to_bool(cur_attr)
            self.pointer_access_filled = True
        if dom_node.hasAttribute("exception"):
            cur_attr = dom_node.getAttribute("exception")
            self.exception = string_to_bool(cur_attr)
            self.exception_filled = True
        if dom_node.hasAttribute("template_line"):
            cur_attr = dom_node.getAttribute("template_line")
            self.template_line = cur_attr
            self.template_line_filled = True
        if dom_node.hasAttribute("typedef_name"):
            cur_attr = dom_node.getAttribute("typedef_name")
            self.typedef_name = cur_attr
            self.typedef_name_filled = True
        if dom_node.hasAttribute("copy_or_add_ref_noexcept"):
            cur_attr = dom_node.getAttribute("copy_or_add_ref_noexcept")
            self.copy_or_add_ref_noexcept = string_to_bool(cur_attr)
            self.copy_or_add_ref_noexcept_filled = True
        if dom_node.hasAttribute("delete_or_release_noexcept"):
            cur_attr = dom_node.getAttribute("delete_or_release_noexcept")
            self.delete_or_release_noexcept = string_to_bool(cur_attr)
            self.delete_or_release_noexcept_filled = True
        if dom_node.hasAttribute("overload_suffix_mode"):
            cur_attr = dom_node.getAttribute("overload_suffix_mode")
            self.overload_suffix_mode = TOverloadSuffixMode.load(cur_attr)
            self.overload_suffix_mode_filled = True

    def load(self, dom_node):
        for element in dom_node.childNodes:
            self.load_element(element)
        self.load_attributes(dom_node)


class TCallback(object):
    def __init__(self):
        self.all_items = []
        self.lifecycle = TLifecycle.reference_counted
        self.lifecycle_filled = False
        self.copy_or_add_ref_noexcept = False
        self.copy_or_add_ref_noexcept_filled = False
        self.delete_or_release_noexcept = True
        self.delete_or_release_noexcept_filled = False
        self.implementation_class_name = ""
        self.implementation_class_name_filled = False
        self.implementation_class_header = ""
        self.implementation_class_header_filled = False

    def load_element(self, element):
        return False

    def load_attributes(self, dom_node):
        if dom_node.hasAttribute("lifecycle"):
            cur_attr = dom_node.getAttribute("lifecycle")
            self.lifecycle = TLifecycle.load(cur_attr)
            self.lifecycle_filled = True
        if dom_node.hasAttribute("copy_or_add_ref_noexcept"):
            cur_attr = dom_node.getAttribute("copy_or_add_ref_noexcept")
            self.copy_or_add_ref_noexcept = string_to_bool(cur_attr)
            self.copy_or_add_ref_noexcept_filled = True
        if dom_node.hasAttribute("delete_or_release_noexcept"):
            cur_attr = dom_node.getAttribute("delete_or_release_noexcept")
            self.delete_or_release_noexcept = string_to_bool(cur_attr)
            self.delete_or_release_noexcept_filled = True
        if dom_node.hasAttribute("implementation_class_name"):
            cur_attr = dom_node.getAttribute("implementation_class_name")
            self.implementation_class_name = cur_attr
            self.implementation_class_name_filled = True
        if dom_node.hasAttribute("implementation_class_header"):
            cur_attr = dom_node.getAttribute("implementation_class_header")
            self.implementation_class_header = cur_attr
            self.implementation_class_header_filled = True

    def load(self, dom_node):
        for element in dom_node.childNodes:
            self.load_element(element)
        self.load_attributes(dom_node)


class TConstructor(object):
    def __init__(self):
        self.all_items = []
        self.name = ""
        self.name_filled = False
        self.return_copy_or_add_ref = False
        self.return_copy_or_add_ref_filled = False
        self.noexcept = False
        self.noexcept_filled = False
        self.documentations = []
        self.arguments = []

    def load_element(self, element):
        if element.nodeName == "documentation":
            new_element = TDocumentation()
            new_element.load(element)
            self.documentations.append(new_element)
            return True
        if element.nodeName == "argument":
            new_element = TArgument()
            new_element.load(element)
            self.arguments.append(new_element)
            return True
        return False

    def load_attributes(self, dom_node):
        if dom_node.hasAttribute("name"):
            cur_attr = dom_node.getAttribute("name")
            self.name = cur_attr
            self.name_filled = True
        if dom_node.hasAttribute("return_copy_or_add_ref"):
            cur_attr = dom_node.getAttribute("return_copy_or_add_ref")
            self.return_copy_or_add_ref = string_to_bool(cur_attr)
            self.return_copy_or_add_ref_filled = True
        if dom_node.hasAttribute("noexcept"):
            cur_attr = dom_node.getAttribute("noexcept")
            self.noexcept = string_to_bool(cur_attr)
            self.noexcept_filled = True

    def load(self, dom_node):
        for element in dom_node.childNodes:
            self.load_element(element)
        self.load_attributes(dom_node)


class TMethod(TConstructor):
    def __init__(self):
        super().__init__()
        self.return_type = ""
        self.return_type_filled = False
        self.const = False
        self.const_filled = False
        self.overload_suffix = ""
        self.overload_suffix_filled = False

    def load_element(self, element):
        if super().load_element(element):
            return True
        return False

    def load_attributes(self, dom_node):
        super().load_attributes(dom_node)
        if dom_node.hasAttribute("return"):
            cur_attr = dom_node.getAttribute("return")
            self.return_type = cur_attr
            self.return_type_filled = True
        if dom_node.hasAttribute("const"):
            cur_attr = dom_node.getAttribute("const")
            self.const = string_to_bool(cur_attr)
            self.const_filled = True
        if dom_node.hasAttribute("overload_suffix"):
            cur_attr = dom_node.getAttribute("overload_suffix")
            self.overload_suffix = cur_attr
            self.overload_suffix_filled = True

    def load(self, dom_node):
        for element in dom_node.childNodes:
            self.load_element(element)
        self.load_attributes(dom_node)


class TFunction(TMethod):
    def __init__(self):
        super().__init__()
        self.implementation_name = ""
        self.implementation_name_filled = False
        self.implementation_header = ""
        self.implementation_header_filled = False

    def load_element(self, element):
        if super().load_element(element):
            return True
        return False

    def load_attributes(self, dom_node):
        super().load_attributes(dom_node)
        if dom_node.hasAttribute("implementation_name"):
            cur_attr = dom_node.getAttribute("implementation_name")
            self.implementation_name = cur_attr
            self.implementation_name_filled = True
        if dom_node.hasAttribute("implementation_header"):
            cur_attr = dom_node.getAttribute("implementation_header")
            self.implementation_header = cur_attr
            self.implementation_header_filled = True

    def load(self, dom_node):
        for element in dom_node.childNodes:
            self.load_element(element)
        self.load_attributes(dom_node)


class TArgument(object):
    def __init__(self):
        self.all_items = []
        self.name = ""
        self.name_filled = False
        self.type_name = ""
        self.type_name_filled = False
        self.documentations = []

    def load_element(self, element):
        if element.nodeName == "documentation":
            new_element = TGenericDocumentation()
            new_element.load(element)
            self.documentations.append(new_element)
            return True
        return False

    def load_attributes(self, dom_node):
        if dom_node.hasAttribute("name"):
            cur_attr = dom_node.getAttribute("name")
            self.name = cur_attr
            self.name_filled = True
        if dom_node.hasAttribute("type"):
            cur_attr = dom_node.getAttribute("type")
            self.type_name = cur_attr
            self.type_name_filled = True

    def load(self, dom_node):
        for element in dom_node.childNodes:
            self.load_element(element)
        self.load_attributes(dom_node)


class THeaderInclude(object):
    def __init__(self):
        self.all_items = []
        self.file = ""
        self.file_filled = False
        self.system = False
        self.system_filled = False

    def load_element(self, element):
        return False

    def load_attributes(self, dom_node):
        if dom_node.hasAttribute("file"):
            cur_attr = dom_node.getAttribute("file")
            self.file = cur_attr
            self.file_filled = True
        if dom_node.hasAttribute("system"):
            cur_attr = dom_node.getAttribute("system")
            self.system = string_to_bool(cur_attr)
            self.system_filled = True

    def load(self, dom_node):
        for element in dom_node.childNodes:
            self.load_element(element)
        self.load_attributes(dom_node)


class TProperty(object):
    def __init__(self):
        self.all_items = []
        self.name = ""
        self.name_filled = False
        self.type_name = ""
        self.type_name_filled = False
        self.set_prefix = "Set"
        self.set_prefix_filled = False
        self.get_prefix = "Get"
        self.get_prefix_filled = False
        self.get_const = True
        self.get_const_filled = False
        self.documentations = []

    def load_element(self, element):
        if element.nodeName == "documentation":
            new_element = TDocumentation()
            new_element.load(element)
            self.documentations.append(new_element)
            return True
        return False

    def load_attributes(self, dom_node):
        if dom_node.hasAttribute("name"):
            cur_attr = dom_node.getAttribute("name")
            self.name = cur_attr
            self.name_filled = True
        if dom_node.hasAttribute("type"):
            cur_attr = dom_node.getAttribute("type")
            self.type_name = cur_attr
            self.type_name_filled = True
        if dom_node.hasAttribute("set_prefix"):
            cur_attr = dom_node.getAttribute("set_prefix")
            self.set_prefix = cur_attr
            self.set_prefix_filled = True
        if dom_node.hasAttribute("get_prefix"):
            cur_attr = dom_node.getAttribute("get_prefix")
            self.get_prefix = cur_attr
            self.get_prefix_filled = True
        if dom_node.hasAttribute("get_const"):
            cur_attr = dom_node.getAttribute("get_const")
            self.get_const = string_to_bool(cur_attr)
            self.get_const_filled = True

    def load(self, dom_node):
        for element in dom_node.childNodes:
            self.load_element(element)
        self.load_attributes(dom_node)


class TPropertySetPrefix(object):
    def __init__(self):
        self.all_items = []
        self.value = "Set"
        self.value_filled = False

    def load_element(self, element):
        return False

    def load_attributes(self, dom_node):
        if dom_node.hasAttribute("value"):
            cur_attr = dom_node.getAttribute("value")
            self.value = cur_attr
            self.value_filled = True

    def load(self, dom_node):
        for element in dom_node.childNodes:
            self.load_element(element)
        self.load_attributes(dom_node)


class TPropertyGetPrefix(object):
    def __init__(self):
        self.all_items = []
        self.value = "Get"
        self.value_filled = False

    def load_element(self, element):
        return False

    def load_attributes(self, dom_node):
        if dom_node.hasAttribute("value"):
            cur_attr = dom_node.getAttribute("value")
            self.value = cur_attr
            self.value_filled = True

    def load(self, dom_node):
        for element in dom_node.childNodes:
            self.load_element(element)
        self.load_attributes(dom_node)


class TPropertyGetConst(object):
    def __init__(self):
        self.all_items = []
        self.value = True
        self.value_filled = False

    def load_element(self, element):
        return False

    def load_attributes(self, dom_node):
        if dom_node.hasAttribute("value"):
            cur_attr = dom_node.getAttribute("value")
            self.value = string_to_bool(cur_attr)
            self.value_filled = True

    def load(self, dom_node):
        for element in dom_node.childNodes:
            self.load_element(element)
        self.load_attributes(dom_node)


class TReference(object):
    def __init__(self):
        self.all_items = []

    def load_element(self, element):
        if element.nodeType == element.TEXT_NODE:
            cur_texts = [text.strip() for text in element.data.split('\n')]
            first = True
            for text in cur_texts:
                if first and self.all_items and type(self.all_items[-1]) is str:
                    self.all_items[-1] += text
                else:
                    self.all_items.append(text)
                first = False
            return True
        return False

    def load_attributes(self, dom_node):
        pass

    def load(self, dom_node):
        for element in dom_node.childNodes:
            self.load_element(element)
        self.load_attributes(dom_node)


class TGenericDocumentation(object):
    def __init__(self):
        self.all_items = []
        self.references = []
        self.see_alsos = []

    def load_element(self, element):
        if element.nodeName == "reference":
            new_element = TReference()
            new_element.load(element)
            self.references.append(new_element)
            self.all_items.append(new_element)
            return True
        if element.nodeName == "see_also":
            new_element = TGenericDocumentation()
            new_element.load(element)
            self.see_alsos.append(new_element)
            self.all_items.append(new_element)
            return True
        if element.nodeType == element.TEXT_NODE:
            cur_texts = [text.strip() for text in element.data.split('\n')]
            first = True
            for text in cur_texts:
                if first and self.all_items and type(self.all_items[-1]) is str:
                    self.all_items[-1] += text
                else:
                    self.all_items.append(text)
                first = False
            return True
        return False

    def load_attributes(self, dom_node):
        pass

    def load(self, dom_node):
        for element in dom_node.childNodes:
            self.load_element(element)
        self.load_attributes(dom_node)


class TDocumentation(TGenericDocumentation):
    def __init__(self):
        super().__init__()
        self.briefs = []
        self.returns = []

    def load_element(self, element):
        if super().load_element(element):
            return True
        if element.nodeName == "brief":
            new_element = TGenericDocumentation()
            new_element.load(element)
            self.briefs.append(new_element)
            return True
        if element.nodeName == "returns":
            new_element = TGenericDocumentation()
            new_element.load(element)
            self.returns.append(new_element)
            return True
        return False

    def load_attributes(self, dom_node):
        super().load_attributes(dom_node)

    def load(self, dom_node):
        for element in dom_node.childNodes:
            self.load_element(element)
        self.load_attributes(dom_node)


def load(dom_node):
    for root_element in [root for root in dom_node.childNodes if root.localName == "api"]:
        root_params = TBeautifulCapiRoot()
        root_params.load(root_element)
        return root_params
