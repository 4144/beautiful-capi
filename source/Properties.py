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


import copy

from Parser import TClass, TMethod, TArgument, TNamespace, TTemplate, TBeautifulCapiRoot, TDocumentation, TImplementationCode
from UnitTestGenerator import TestGenerator
from Helpers import get_c_name


class PropertiesDefaultValues(object):
    def __init__(self):
        self.set_prefix_value = 'Set'
        self.get_prefix_value = 'Get'
        self.get_const_value = True


class PropertiesProcessor(object):
    def __init__(self, root_node: TBeautifulCapiRoot, test_generator: TestGenerator):
        self.root_node = root_node
        self.properties_stack = [PropertiesDefaultValues()]
        self.unittest_generator = test_generator

    @staticmethod
    def __process_documentation_impl(documentation, get: bool):
        for i, doc_item in enumerate(documentation.all_items):
            if type(doc_item) is str:
                documentation.all_items[i] = doc_item.format(Setget='Gets' if get else 'Sets')
            else:
                PropertiesProcessor.__process_documentation(doc_item, get)

    @staticmethod
    def __process_documentation(documentation, get: bool):
        if issubclass(type(documentation), TDocumentation):
            for brief in documentation.briefs:
                PropertiesProcessor.__process_documentation_impl(brief, get)
            for doc_return in documentation.returns:
                PropertiesProcessor.__process_documentation_impl(doc_return, get)
        PropertiesProcessor.__process_documentation_impl(documentation, get)

    @staticmethod
    def __process_documentations(documented_object, get: bool):
        for documentation in documented_object.documentations:
            PropertiesProcessor.__process_documentation(documentation, get)

    def process_class(self, cur_class: TClass):
        top = self.properties_stack.pop()

        for cur_property in cur_class.properties:
            cur_set_prefix = cur_property.set_prefix if cur_property.set_prefix_filled else top.set_prefix_value
            cur_get_prefix = cur_property.get_prefix if cur_property.get_prefix_filled else top.get_prefix_value
            cur_get_const = cur_property.get_const if cur_property.get_const_filled else top.get_const_value
            cur_argument_name = cur_property.set_argument_name if cur_property.set_argument_name \
                else get_c_name(cur_property.name)
            new_get_method = TMethod()
            new_get_method.name = cur_get_prefix + cur_property.name
            new_get_method.const = cur_get_const
            new_get_method.return_type = cur_property.return_type if cur_property.return_type_filled \
                else cur_property.type_name
            new_get_method.documentations = copy.deepcopy(cur_property.documentations)
            new_get_method.impl_2_c = cur_property.get_impl_2_c
            new_get_method.impl_2_c_filled = cur_property.get_impl_2_c_filled
            new_get_method.return_is_builtin = cur_property.is_builtin
            new_get_method.return_is_builtin_filled = cur_property.is_builtin_filled
            new_get_method.return_copy_or_add_ref = cur_property.return_copy_or_add_ref
            new_get_method.return_copy_or_add_ref_filled = True
            if cur_property.field_name_filled:
                new_get_method.getter_field_name = cur_property.field_name
                new_get_method.getter_field_name_filled = True
            PropertiesProcessor.__process_documentations(new_get_method, True)
            cur_class.methods.append(new_get_method)
            new_set_method = TMethod()
            new_set_method.name = cur_set_prefix + cur_property.name
            set_input_argument = TArgument()
            set_input_argument.name = cur_argument_name
            set_input_argument.type_name = cur_property.set_argument_type if cur_property.set_argument_type_filled \
                else cur_property.type_name
            set_input_argument.c_2_impl = cur_property.set_c_2_impl
            set_input_argument.c_2_impl_filled = cur_property.set_c_2_impl_filled
            set_input_argument.c_2_impl_mode = cur_property.set_c_2_impl_mode
            set_input_argument.c_2_impl_mode_filled = cur_property.set_c_2_impl_mode_filled
            set_input_argument.is_builtin = cur_property.is_builtin
            set_input_argument.is_builtin_filled = cur_property.is_builtin_filled
            new_set_method.arguments.append(set_input_argument)
            if cur_property.field_name_filled:
                new_set_method.setter_field_name = cur_property.field_name
                new_set_method.setter_field_name_filled = True
            new_set_method.documentations = copy.deepcopy(cur_property.documentations)
            PropertiesProcessor.__process_documentations(new_set_method, False)
            cur_class.methods.append(new_set_method)

            if self.unittest_generator:
                self.unittest_generator.add_property(cur_class, cur_property, new_set_method, new_get_method)
        self.properties_stack.append(top)

    def process_template(self, template: TTemplate):
        for cur_class in template.classes:
            self.process_class(cur_class)

    def process_namespace(self, namespace: TNamespace):
        top = self.properties_stack.pop()
        self.properties_stack.append(top)
        top = copy.deepcopy(top)
        for cur_set_prefix in namespace.property_set_prefixes:
            top.set_prefix_value = cur_set_prefix.value
        for cur_get_prefix in namespace.property_get_prefixes:
            top.get_prefix_value = cur_get_prefix.value
        for cur_get_const in namespace.property_get_consts:
            top.get_const_value = cur_get_const.value
        self.properties_stack.append(top)
        for nested_namespace in namespace.namespaces:
            self.process_namespace(nested_namespace)
        for cur_template in namespace.templates:
            self.process_template(cur_template)
        for cur_class in namespace.classes:
            self.process_class(cur_class)
        self.properties_stack.pop()

    def process(self):
        for cur_namespace in self.root_node.namespaces:
            self.process_namespace(cur_namespace)


def process(root_node: TBeautifulCapiRoot, test_generator):
    properties_processor = PropertiesProcessor(root_node, test_generator)
    properties_processor.process()
