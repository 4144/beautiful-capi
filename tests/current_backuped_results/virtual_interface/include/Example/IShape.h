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

#ifndef EXAMPLE_ISHAPE_DEFINITION_INCLUDED
#define EXAMPLE_ISHAPE_DEFINITION_INCLUDED

#include "Example/IShapeDecl.h"

#ifdef __cplusplus

inline void Example::IShapeRawPtr::Show() const
{
    example_i_shape_show(this->GetRawPointer());
}

inline Example::IShapeRawPtr::IShapeRawPtr(const IShapeRawPtr& other)
{
    SetObject(other.mObject);
}

inline Example::IShapeRawPtr::IShapeRawPtr(Example::IShapeRawPtr::ECreateFromRawPointer, void *object_pointer, bool)
{
    SetObject(object_pointer);
}

inline void Example::IShapeRawPtr::Delete()
{
    if (mObject)
    {
        example_i_shape_delete(mObject);
        SetObject(0);
    }
}

inline Example::IShapeRawPtr& Example::IShapeRawPtr::operator=(const Example::IShapeRawPtr& other)
{
    SetObject(other.mObject);
    return *this;
}

inline Example::IShapeRawPtr Example::IShapeRawPtr::Null()
{
    return Example::IShapeRawPtr(Example::IShapeRawPtr::force_creating_from_raw_pointer, 0, false);
}

inline bool Example::IShapeRawPtr::IsNull() const
{
    return !mObject;
}

inline bool Example::IShapeRawPtr::IsNotNull() const
{
    return mObject != 0;
}

inline bool Example::IShapeRawPtr::operator!() const
{
    return !mObject;
}

inline void* Example::IShapeRawPtr::Detach()
{
    void* result = mObject;
    SetObject(0);
    return result;
}

inline void* Example::IShapeRawPtr::GetRawPointer() const
{
    return mObject;
}

inline Example::IShapeRawPtr* Example::IShapeRawPtr::operator->()
{
    return this;
}

inline const Example::IShapeRawPtr* Example::IShapeRawPtr::operator->() const
{
    return this;
}

inline void Example::IShapeRawPtr::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* EXAMPLE_ISHAPE_DEFINITION_INCLUDED */

