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

#ifndef MIXEDSEMANTIC_ADDRESS_DEFINITION_INCLUDED
#define MIXEDSEMANTIC_ADDRESS_DEFINITION_INCLUDED

#include "MixedSemantic/AddressDecl.h"

#ifdef __cplusplus

inline MixedSemantic::AddressPtr::AddressPtr()
{
    SetObject(MixedSemantic::AddressPtr(MixedSemantic::AddressPtr::force_creating_from_raw_pointer, mixed_semantic_address_default(), false).Detach());
}

inline const char* MixedSemantic::AddressPtr::GetStreetName() const
{
    return mixed_semantic_address_get_street_name_const(GetRawPointer());
}

inline void MixedSemantic::AddressPtr::SetStreetName(const char* street_name)
{
    mixed_semantic_address_set_street_name(GetRawPointer(), street_name);
}

inline const char* MixedSemantic::AddressPtr::GetCity() const
{
    return mixed_semantic_address_get_city_const(GetRawPointer());
}

inline void MixedSemantic::AddressPtr::SetCity(const char* city)
{
    mixed_semantic_address_set_city(GetRawPointer(), city);
}

inline unsigned int MixedSemantic::AddressPtr::GetState() const
{
    return mixed_semantic_address_get_state_const(GetRawPointer());
}

inline void MixedSemantic::AddressPtr::SetState(unsigned int state)
{
    mixed_semantic_address_set_state(GetRawPointer(), state);
}

inline MixedSemantic::AddressPtr::AddressPtr(const AddressPtr& other)
{
    SetObject(other.GetRawPointer());
    if (other.GetRawPointer())
    {
        mixed_semantic_address_add_ref(other.GetRawPointer());
    }
}

#ifdef MIXEDSEMANTIC_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline MixedSemantic::AddressPtr::AddressPtr(AddressPtr&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* MIXEDSEMANTIC_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline MixedSemantic::AddressPtr::AddressPtr(MixedSemantic::AddressPtr::ECreateFromRawPointer, void *object_pointer, bool add_ref_object)
{
    SetObject(object_pointer);
    if (add_ref_object && object_pointer)
    {
        mixed_semantic_address_add_ref(object_pointer);
    }
}

inline MixedSemantic::AddressPtr::~AddressPtr()
{
    if (GetRawPointer())
    {
        mixed_semantic_address_release(GetRawPointer());
        SetObject(0);
    }
}

inline MixedSemantic::AddressPtr& MixedSemantic::AddressPtr::operator=(const MixedSemantic::AddressPtr& other)
{
    if (GetRawPointer() != other.GetRawPointer())
    {
        if (GetRawPointer())
        {
            mixed_semantic_address_release(GetRawPointer());
            SetObject(0);
        }
        SetObject(other.GetRawPointer());
        if (other.GetRawPointer())
        {
            mixed_semantic_address_add_ref(other.GetRawPointer());
        }
    }
    return *this;
}

#ifdef MIXEDSEMANTIC_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline MixedSemantic::AddressPtr& MixedSemantic::AddressPtr::operator=(MixedSemantic::AddressPtr&& other)
{
    if (GetRawPointer() != other.GetRawPointer())
    {
        if (GetRawPointer())
        {
            mixed_semantic_address_release(GetRawPointer());
            SetObject(0);
        }
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* MIXEDSEMANTIC_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline MixedSemantic::AddressPtr MixedSemantic::AddressPtr::Null()
{
    return MixedSemantic::AddressPtr(MixedSemantic::AddressPtr::force_creating_from_raw_pointer, static_cast<void*>(0), false);
}

inline bool MixedSemantic::AddressPtr::IsNull() const
{
    return !GetRawPointer();
}

inline bool MixedSemantic::AddressPtr::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool MixedSemantic::AddressPtr::operator!() const
{
    return !GetRawPointer();
}

inline void* MixedSemantic::AddressPtr::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* MixedSemantic::AddressPtr::GetRawPointer() const
{
    return MixedSemantic::AddressPtr::mObject ? mObject: 0;
}

inline MixedSemantic::AddressPtr* MixedSemantic::AddressPtr::operator->()
{
    return this;
}

inline const MixedSemantic::AddressPtr* MixedSemantic::AddressPtr::operator->() const
{
    return this;
}

inline void MixedSemantic::AddressPtr::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* MIXEDSEMANTIC_ADDRESS_DEFINITION_INCLUDED */

