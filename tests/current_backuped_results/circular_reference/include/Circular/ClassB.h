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

#ifndef CIRCULAR_CLASSB_DEFINITION_INCLUDED
#define CIRCULAR_CLASSB_DEFINITION_INCLUDED

#include "Circular/ClassBDecl.h"
#include "Circular/ClassA.h"

#ifdef __cplusplus

inline Circular::ClassBRawPtr::ClassBRawPtr()
{
    SetObject(circular_class_b_default());
}

inline void Circular::ClassBRawPtr::SetA(const Circular::ClassARawPtr& value)
{
    circular_class_b_set_a(this->GetRawPointer(), value.GetRawPointer());
}

inline Circular::ClassARawPtr Circular::ClassBRawPtr::GetA() const
{
    return Circular::ClassARawPtr(Circular::ClassARawPtr::force_creating_from_raw_pointer, circular_class_b_get_a(this->GetRawPointer()), false);
}

inline Circular::ClassBRawPtr::ClassBRawPtr(const ClassBRawPtr& other)
{
    SetObject(other.mObject);
}

inline Circular::ClassBRawPtr::ClassBRawPtr(Circular::ClassBRawPtr::ECreateFromRawPointer, void *object_pointer, bool)
{
    SetObject(object_pointer);
}

inline void Circular::ClassBRawPtr::Delete()
{
    if (mObject)
    {
        circular_class_b_delete(mObject);
        SetObject(0);
    }
}

inline Circular::ClassBRawPtr& Circular::ClassBRawPtr::operator=(const Circular::ClassBRawPtr& other)
{
    SetObject(other.mObject);
    return *this;
}

inline Circular::ClassBRawPtr Circular::ClassBRawPtr::Null()
{
    return Circular::ClassBRawPtr(Circular::ClassBRawPtr::force_creating_from_raw_pointer, 0, false);
}

inline bool Circular::ClassBRawPtr::IsNull() const
{
    return !mObject;
}

inline bool Circular::ClassBRawPtr::IsNotNull() const
{
    return mObject != 0;
}

inline bool Circular::ClassBRawPtr::operator!() const
{
    return !mObject;
}

inline void* Circular::ClassBRawPtr::Detach()
{
    void* result = mObject;
    SetObject(0);
    return result;
}

inline void* Circular::ClassBRawPtr::GetRawPointer() const
{
    return mObject;
}

inline Circular::ClassBRawPtr* Circular::ClassBRawPtr::operator->()
{
    return this;
}

inline const Circular::ClassBRawPtr* Circular::ClassBRawPtr::operator->() const
{
    return this;
}

inline void Circular::ClassBRawPtr::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* CIRCULAR_CLASSB_DEFINITION_INCLUDED */

