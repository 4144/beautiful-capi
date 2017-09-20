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

#ifndef EXAMPLE_ICIRCLE_DEFINITION_INCLUDED
#define EXAMPLE_ICIRCLE_DEFINITION_INCLUDED

#include "Example/ICircleDecl.h"
#include "Example/IShape.h"

#ifdef __cplusplus

inline void Example::ICirclePtr::SetRadius(double radius)
{
    example_icircle_set_radius(GetRawPointer(), radius);
}

inline Example::ICirclePtr::ICirclePtr(const ICirclePtr& other) : Example::IShapePtr(Example::IShapePtr::force_creating_from_raw_pointer, static_cast<void*>(0), false)
{
    SetObject(other.GetRawPointer());
    if (other.GetRawPointer())
    {
        example_icircle_add_ref(other.GetRawPointer());
    }
}

#ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Example::ICirclePtr::ICirclePtr(ICirclePtr&& other) : Example::IShapePtr(std::move(other))
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Example::ICirclePtr::ICirclePtr(Example::ICirclePtr::ECreateFromRawPointer, void *object_pointer, bool add_ref_object) : Example::IShapePtr(Example::IShapePtr::force_creating_from_raw_pointer, static_cast<void*>(0), false)
{
    SetObject(object_pointer);
    if (add_ref_object && object_pointer)
    {
        example_icircle_add_ref(object_pointer);
    }
}

inline Example::ICirclePtr::~ICirclePtr()
{
    if (GetRawPointer())
    {
        example_icircle_release(GetRawPointer());
        SetObject(0);
    }
}

inline Example::ICirclePtr& Example::ICirclePtr::operator=(const Example::ICirclePtr& other)
{
    if (GetRawPointer() != other.GetRawPointer())
    {
        if (GetRawPointer())
        {
            example_icircle_release(GetRawPointer());
            SetObject(0);
        }
        SetObject(other.GetRawPointer());
        if (other.GetRawPointer())
        {
            example_icircle_add_ref(other.GetRawPointer());
        }
    }
    return *this;
}

#ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Example::ICirclePtr& Example::ICirclePtr::operator=(Example::ICirclePtr&& other)
{
    if (GetRawPointer() != other.GetRawPointer())
    {
        if (GetRawPointer())
        {
            example_icircle_release(GetRawPointer());
            SetObject(0);
        }
        Example::IShapePtr::operator=(std::move(other));
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Example::ICirclePtr Example::ICirclePtr::Null()
{
    return Example::ICirclePtr(Example::ICirclePtr::force_creating_from_raw_pointer, static_cast<void*>(0), false);
}

inline bool Example::ICirclePtr::IsNull() const
{
    return !GetRawPointer();
}

inline bool Example::ICirclePtr::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool Example::ICirclePtr::operator!() const
{
    return !GetRawPointer();
}

inline void* Example::ICirclePtr::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* Example::ICirclePtr::GetRawPointer() const
{
    return Example::IShapePtr::mObject ? mObject: 0;
}

inline Example::ICirclePtr* Example::ICirclePtr::operator->()
{
    return this;
}

inline const Example::ICirclePtr* Example::ICirclePtr::operator->() const
{
    return this;
}

inline void Example::ICirclePtr::SetObject(void* object_pointer)
{
    mObject = object_pointer;
    if (mObject)
    {
        Example::IShapePtr::SetObject(example_icircle_cast_to_base(mObject));
    }
    else
    {
        Example::IShapePtr::SetObject(0);
    }
}

namespace Example {

template<>
inline Example::ICirclePtr down_cast<Example::ICirclePtr >(const Example::IShapePtr& source_object)
{
    return Example::ICirclePtr(Example::ICirclePtr::force_creating_from_raw_pointer, example_ishape_cast_to_example_icircle(source_object.GetRawPointer()), true);
}

}

#endif /* __cplusplus */

#endif /* EXAMPLE_ICIRCLE_DEFINITION_INCLUDED */

