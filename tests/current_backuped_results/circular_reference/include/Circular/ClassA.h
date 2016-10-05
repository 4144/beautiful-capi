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

#ifndef CIRCULAR_CLASSA_DEFINITION_INCLUDED
#define CIRCULAR_CLASSA_DEFINITION_INCLUDED

#include "Circular/ClassADecl.h"
#include "Circular/ClassB.h"

#ifdef __cplusplus

inline Circular::ClassARawPtr::ClassARawPtr()
{
    SetObject(circular_class_a_default());
}

inline void Circular::ClassARawPtr::SetB(const Circular::ClassBRawPtr& value)
{
    circular_class_a_set_b(this->GetRawPointer(), value.GetRawPointer());
}

inline Circular::ClassBRawPtr Circular::ClassARawPtr::GetB() const
{
    return Circular::ClassBRawPtr(Circular::ClassBRawPtr::force_creating_from_raw_pointer, circular_class_a_get_b(this->GetRawPointer()), false);
}

inline Circular::ClassARawPtr::ClassARawPtr(const ClassARawPtr& other)
{
    SetObject(other.mObject);
}

inline Circular::ClassARawPtr::ClassARawPtr(Circular::ClassARawPtr::ECreateFromRawPointer, void *object_pointer, bool)
{
    SetObject(object_pointer);
}

inline void Circular::ClassARawPtr::Delete()
{
    if (mObject)
    {
        circular_class_a_delete(mObject);
        SetObject(0);
    }
}

inline Circular::ClassARawPtr& Circular::ClassARawPtr::operator=(const Circular::ClassARawPtr& other)
{
    SetObject(other.mObject);
    return *this;
}

inline Circular::ClassARawPtr Circular::ClassARawPtr::Null()
{
    return Circular::ClassARawPtr(Circular::ClassARawPtr::force_creating_from_raw_pointer, 0, false);
}

inline bool Circular::ClassARawPtr::IsNull() const
{
    return !mObject;
}

inline bool Circular::ClassARawPtr::IsNotNull() const
{
    return mObject != 0;
}

inline bool Circular::ClassARawPtr::operator!() const
{
    return !mObject;
}

inline void* Circular::ClassARawPtr::Detach()
{
    void* result = mObject;
    SetObject(0);
    return result;
}

inline void* Circular::ClassARawPtr::GetRawPointer() const
{
    return mObject;
}

inline Circular::ClassARawPtr* Circular::ClassARawPtr::operator->()
{
    return this;
}

inline const Circular::ClassARawPtr* Circular::ClassARawPtr::operator->() const
{
    return this;
}

inline void Circular::ClassARawPtr::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* CIRCULAR_CLASSA_DEFINITION_INCLUDED */

