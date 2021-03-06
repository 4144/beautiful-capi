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

#ifndef EXAMPLE_PAGE_DEFINITION_INCLUDED
#define EXAMPLE_PAGE_DEFINITION_INCLUDED

#include "Example/PageDecl.h"

#ifdef __cplusplus

inline Example::PagePtr::PagePtr()
{
    SetObject(Example::PagePtr(Example::PagePtr::force_creating_from_raw_pointer, example_page_default(), false).Detach());
}

inline size_t Example::PagePtr::GetWidth() const
{
    return example_page_get_width_const(GetRawPointer());
}

inline void Example::PagePtr::SetWidth(size_t width)
{
    example_page_set_width(GetRawPointer(), width);
}

inline size_t Example::PagePtr::GetHeight() const
{
    return example_page_get_height_const(GetRawPointer());
}

inline void Example::PagePtr::SetHeight(size_t height)
{
    example_page_set_height(GetRawPointer(), height);
}

inline Example::PagePtr::PagePtr(const PagePtr& other)
{
    SetObject(other.GetRawPointer());
    if (other.GetRawPointer())
    {
        example_page_add_ref(other.GetRawPointer());
    }
}

#ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Example::PagePtr::PagePtr(PagePtr&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Example::PagePtr::PagePtr(Example::PagePtr::ECreateFromRawPointer, void *object_pointer, bool add_ref_object)
{
    SetObject(object_pointer);
    if (add_ref_object && object_pointer)
    {
        example_page_add_ref(object_pointer);
    }
}

inline Example::PagePtr::~PagePtr()
{
    if (GetRawPointer())
    {
        example_page_release(GetRawPointer());
        SetObject(0);
    }
}

inline Example::PagePtr& Example::PagePtr::operator=(const Example::PagePtr& other)
{
    if (GetRawPointer() != other.GetRawPointer())
    {
        if (GetRawPointer())
        {
            example_page_release(GetRawPointer());
            SetObject(0);
        }
        SetObject(other.GetRawPointer());
        if (other.GetRawPointer())
        {
            example_page_add_ref(other.GetRawPointer());
        }
    }
    return *this;
}

#ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Example::PagePtr& Example::PagePtr::operator=(Example::PagePtr&& other)
{
    if (GetRawPointer() != other.GetRawPointer())
    {
        if (GetRawPointer())
        {
            example_page_release(GetRawPointer());
            SetObject(0);
        }
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Example::PagePtr Example::PagePtr::Null()
{
    return Example::PagePtr(Example::PagePtr::force_creating_from_raw_pointer, static_cast<void*>(0), false);
}

inline bool Example::PagePtr::IsNull() const
{
    return !GetRawPointer();
}

inline bool Example::PagePtr::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool Example::PagePtr::operator!() const
{
    return !GetRawPointer();
}

inline void* Example::PagePtr::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* Example::PagePtr::GetRawPointer() const
{
    return Example::PagePtr::mObject ? mObject: 0;
}

inline Example::PagePtr* Example::PagePtr::operator->()
{
    return this;
}

inline const Example::PagePtr* Example::PagePtr::operator->() const
{
    return this;
}

inline void Example::PagePtr::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* EXAMPLE_PAGE_DEFINITION_INCLUDED */

