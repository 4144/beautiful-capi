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

#ifndef MIXEDSEMANTIC2_ADDRESS_DEFINITION_INCLUDED
#define MIXEDSEMANTIC2_ADDRESS_DEFINITION_INCLUDED

#include "MixedSemantic2/AddressDecl.h"

#ifdef __cplusplus

inline MixedSemantic2::AddressPtr::AddressPtr()
{
    SetObject(MixedSemantic2::AddressPtr(MixedSemantic2::AddressPtr::force_creating_from_raw_pointer, mixed_semantic2_address_default(), false).Detach());
}

inline const char* MixedSemantic2::AddressPtr::GetStreetName() const
{
    return mixed_semantic2_address_get_street_name_const(GetRawPointer());
}

inline void MixedSemantic2::AddressPtr::SetStreetName(const char* street_name)
{
    mixed_semantic2_address_set_street_name(GetRawPointer(), street_name);
}

inline const char* MixedSemantic2::AddressPtr::GetCity() const
{
    return mixed_semantic2_address_get_city_const(GetRawPointer());
}

inline void MixedSemantic2::AddressPtr::SetCity(const char* city)
{
    mixed_semantic2_address_set_city(GetRawPointer(), city);
}

inline unsigned int MixedSemantic2::AddressPtr::GetState() const
{
    return mixed_semantic2_address_get_state_const(GetRawPointer());
}

inline void MixedSemantic2::AddressPtr::SetState(unsigned int state)
{
    mixed_semantic2_address_set_state(GetRawPointer(), state);
}

inline MixedSemantic2::AddressPtr::AddressPtr(const AddressPtr& other)
{
    SetObject(other.GetRawPointer());
    if (other.GetRawPointer())
    {
        mixed_semantic2_address_add_ref(other.GetRawPointer());
    }
}

#ifdef MIXEDSEMANTIC2_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline MixedSemantic2::AddressPtr::AddressPtr(AddressPtr&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* MIXEDSEMANTIC2_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline MixedSemantic2::AddressPtr::AddressPtr(MixedSemantic2::AddressPtr::ECreateFromRawPointer, void *object_pointer, bool add_ref_object)
{
    SetObject(object_pointer);
    if (add_ref_object && object_pointer)
    {
        mixed_semantic2_address_add_ref(object_pointer);
    }
}

inline MixedSemantic2::AddressPtr::~AddressPtr()
{
    if (GetRawPointer())
    {
        mixed_semantic2_address_release(GetRawPointer());
        SetObject(0);
    }
}

inline MixedSemantic2::AddressPtr& MixedSemantic2::AddressPtr::operator=(const MixedSemantic2::AddressPtr& other)
{
    if (GetRawPointer() != other.GetRawPointer())
    {
        if (GetRawPointer())
        {
            mixed_semantic2_address_release(GetRawPointer());
            SetObject(0);
        }
        SetObject(other.GetRawPointer());
        if (other.GetRawPointer())
        {
            mixed_semantic2_address_add_ref(other.GetRawPointer());
        }
    }
    return *this;
}

#ifdef MIXEDSEMANTIC2_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline MixedSemantic2::AddressPtr& MixedSemantic2::AddressPtr::operator=(MixedSemantic2::AddressPtr&& other)
{
    if (GetRawPointer() != other.GetRawPointer())
    {
        if (GetRawPointer())
        {
            mixed_semantic2_address_release(GetRawPointer());
            SetObject(0);
        }
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* MIXEDSEMANTIC2_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline MixedSemantic2::AddressPtr MixedSemantic2::AddressPtr::Null()
{
    return MixedSemantic2::AddressPtr(MixedSemantic2::AddressPtr::force_creating_from_raw_pointer, static_cast<void*>(0), false);
}

inline bool MixedSemantic2::AddressPtr::IsNull() const
{
    return !GetRawPointer();
}

inline bool MixedSemantic2::AddressPtr::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool MixedSemantic2::AddressPtr::operator!() const
{
    return !GetRawPointer();
}

inline void* MixedSemantic2::AddressPtr::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* MixedSemantic2::AddressPtr::GetRawPointer() const
{
    return MixedSemantic2::AddressPtr::mObject ? mObject: 0;
}

inline MixedSemantic2::AddressPtr* MixedSemantic2::AddressPtr::operator->()
{
    return this;
}

inline const MixedSemantic2::AddressPtr* MixedSemantic2::AddressPtr::operator->() const
{
    return this;
}

inline void MixedSemantic2::AddressPtr::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* MIXEDSEMANTIC2_ADDRESS_DEFINITION_INCLUDED */

