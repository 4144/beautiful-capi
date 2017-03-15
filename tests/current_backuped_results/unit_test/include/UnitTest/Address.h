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

#ifndef UNITTEST_ADDRESS_DEFINITION_INCLUDED
#define UNITTEST_ADDRESS_DEFINITION_INCLUDED

#include "UnitTest/AddressDecl.h"

#ifdef __cplusplus

inline UnitTest::AddressPtr::AddressPtr()
{
    SetObject(unit_test_address_default());
}

inline const char* UnitTest::AddressPtr::GetStreetName() const
{
    return unit_test_address_get_street_name_const(GetRawPointer());
}

inline void UnitTest::AddressPtr::SetStreetName(const char* value)
{
    unit_test_address_set_street_name(GetRawPointer(), value);
}

inline const char* UnitTest::AddressPtr::GetCity() const
{
    return unit_test_address_get_city_const(GetRawPointer());
}

inline void UnitTest::AddressPtr::SetCity(const char* value)
{
    unit_test_address_set_city(GetRawPointer(), value);
}

inline unsigned int UnitTest::AddressPtr::GetState() const
{
    return unit_test_address_get_state_const(GetRawPointer());
}

inline void UnitTest::AddressPtr::SetState(unsigned int value)
{
    unit_test_address_set_state(GetRawPointer(), value);
}

inline unsigned int UnitTest::AddressPtr::GetZipCode() const
{
    return unit_test_address_get_zip_code_const(GetRawPointer());
}

inline void UnitTest::AddressPtr::SetZipCode(unsigned int value)
{
    unit_test_address_set_zip_code(GetRawPointer(), value);
}

inline UnitTest::AddressPtr::AddressPtr(const AddressPtr& other)
{
    SetObject(other.GetRawPointer());
    if (other.GetRawPointer())
    {
        unit_test_address_add_ref(other.GetRawPointer());
    }
}

#ifdef UNITTEST_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline UnitTest::AddressPtr::AddressPtr(AddressPtr&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* UNITTEST_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline UnitTest::AddressPtr::AddressPtr(UnitTest::AddressPtr::ECreateFromRawPointer, void *object_pointer, bool add_ref_object)
{
    SetObject(object_pointer);
    if (add_ref_object && object_pointer)
    {
        unit_test_address_add_ref(object_pointer);
    }
}

inline UnitTest::AddressPtr::~AddressPtr()
{
    if (GetRawPointer())
    {
        unit_test_address_release(GetRawPointer());
        SetObject(0);
    }
}

inline UnitTest::AddressPtr& UnitTest::AddressPtr::operator=(const UnitTest::AddressPtr& other)
{
    if (GetRawPointer() != other.GetRawPointer())
    {
        if (GetRawPointer())
        {
            unit_test_address_release(GetRawPointer());
            SetObject(0);
        }
        SetObject(other.GetRawPointer());
        if (other.GetRawPointer())
        {
            unit_test_address_add_ref(other.GetRawPointer());
        }
    }
    return *this;
}

#ifdef UNITTEST_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline UnitTest::AddressPtr& UnitTest::AddressPtr::operator=(UnitTest::AddressPtr&& other)
{
    if (GetRawPointer() != other.GetRawPointer())
    {
        if (GetRawPointer())
        {
            unit_test_address_release(GetRawPointer());
            SetObject(0);
        }
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* UNITTEST_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline UnitTest::AddressPtr UnitTest::AddressPtr::Null()
{
    return UnitTest::AddressPtr(UnitTest::AddressPtr::force_creating_from_raw_pointer, 0, false);
}

inline bool UnitTest::AddressPtr::IsNull() const
{
    return !GetRawPointer();
}

inline bool UnitTest::AddressPtr::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool UnitTest::AddressPtr::operator!() const
{
    return !GetRawPointer();
}

inline void* UnitTest::AddressPtr::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* UnitTest::AddressPtr::GetRawPointer() const
{
    return UnitTest::AddressPtr::mObject ? mObject: 0;
}

inline UnitTest::AddressPtr* UnitTest::AddressPtr::operator->()
{
    return this;
}

inline const UnitTest::AddressPtr* UnitTest::AddressPtr::operator->() const
{
    return this;
}

inline void UnitTest::AddressPtr::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* UNITTEST_ADDRESS_DEFINITION_INCLUDED */

