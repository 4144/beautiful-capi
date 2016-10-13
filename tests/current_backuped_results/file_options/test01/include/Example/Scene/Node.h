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

#ifndef EXAMPLE_SCENE_NODE_DEFINITION_INCLUDED
#define EXAMPLE_SCENE_NODE_DEFINITION_INCLUDED

#include "Example/Scene/NodeDecl.h"

#ifdef __cplusplus

inline Example::Scene::Node::Node()
{
    SetObject(example_scene_node_new());
}

inline const char* Example::Scene::Node::GetName()
{
    return example_scene_node_get_name(GetRawPointer());
}

inline void Example::Scene::Node::SetName(const char* value)
{
    example_scene_node_set_name(GetRawPointer(), value);
}

inline Example::Scene::Node::Node(const Node& other)
{
    if (other.GetRawPointer())
    {
        SetObject(example_scene_node_copy(other.GetRawPointer()));
    }
    else
    {
        SetObject(0);
    }
}

#ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Example::Scene::Node::Node(Node&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Example::Scene::Node::Node(Example::Scene::Node::ECreateFromRawPointer, void *object_pointer, bool copy_object)
{
    if (object_pointer && copy_object)
    {
        SetObject(example_scene_node_copy(object_pointer));
    }
    else
    {
        SetObject(object_pointer);
    }
}

inline Example::Scene::Node::~Node()
{
    if (GetRawPointer())
    {
        example_scene_node_delete(GetRawPointer());
        SetObject(0);
    }
}

inline Example::Scene::Node& Example::Scene::Node::operator=(const Example::Scene::Node& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            example_scene_node_delete(GetRawPointer());
            SetObject(0);
        }
        if (other.GetRawPointer())
        {
            SetObject(example_scene_node_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    return *this;
}

#ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Example::Scene::Node& Example::Scene::Node::operator=(Example::Scene::Node&& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            example_scene_node_delete(GetRawPointer());
            SetObject(0);
        }
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Example::Scene::Node Example::Scene::Node::Null()
{
    return Example::Scene::Node(Example::Scene::Node::force_creating_from_raw_pointer, 0, false);
}

inline bool Example::Scene::Node::IsNull() const
{
    return !GetRawPointer();
}

inline bool Example::Scene::Node::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool Example::Scene::Node::operator!() const
{
    return !GetRawPointer();
}

inline void* Example::Scene::Node::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* Example::Scene::Node::GetRawPointer() const
{
    return Example::Scene::Node::mObject ? mObject: 0;
}

inline void Example::Scene::Node::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* EXAMPLE_SCENE_NODE_DEFINITION_INCLUDED */

