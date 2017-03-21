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

#ifndef MAPPEDTYPES_DEVICE_DEFINITION_INCLUDED
#define MAPPEDTYPES_DEVICE_DEFINITION_INCLUDED

#include "MappedTypes/DeviceDecl.h"

#ifdef __cplusplus

inline MappedTypes::Device::Device()
{
    SetObject(mapped_types_device_default());
}

inline std::string MappedTypes::Device::GetName() const
{
    return std::string(mapped_types_device_get_name_const(GetRawPointer()));
}

inline void MappedTypes::Device::SetName(std::string value)
{
    mapped_types_device_set_name(GetRawPointer(), value.c_str());
}

inline bool MappedTypes::Device::IsBusy() const
{
    return (mapped_types_device_is_busy_const(GetRawPointer()) ? true : false);
}

inline void MappedTypes::Device::SetBusy(bool value)
{
    mapped_types_device_set_busy(GetRawPointer(), static_cast<uint32_t>(value));
}

inline MappedTypes::Device::Device(const Device& other)
{
    if (other.GetRawPointer())
    {
        SetObject(mapped_types_device_copy(other.GetRawPointer()));
    }
    else
    {
        SetObject(0);
    }
}

#ifdef MAPPEDTYPES_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline MappedTypes::Device::Device(Device&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* MAPPEDTYPES_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline MappedTypes::Device::Device(MappedTypes::Device::ECreateFromRawPointer, void *object_pointer, bool copy_object)
{
    if (object_pointer && copy_object)
    {
        SetObject(mapped_types_device_copy(object_pointer));
    }
    else
    {
        SetObject(object_pointer);
    }
}

inline MappedTypes::Device::~Device()
{
    if (GetRawPointer())
    {
        mapped_types_device_delete(GetRawPointer());
        SetObject(0);
    }
}

inline MappedTypes::Device& MappedTypes::Device::operator=(const MappedTypes::Device& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            mapped_types_device_delete(GetRawPointer());
            SetObject(0);
        }
        if (other.GetRawPointer())
        {
            SetObject(mapped_types_device_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    return *this;
}

#ifdef MAPPEDTYPES_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline MappedTypes::Device& MappedTypes::Device::operator=(MappedTypes::Device&& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            mapped_types_device_delete(GetRawPointer());
            SetObject(0);
        }
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* MAPPEDTYPES_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline MappedTypes::Device MappedTypes::Device::Null()
{
    return MappedTypes::Device(MappedTypes::Device::force_creating_from_raw_pointer, 0, false);
}

inline bool MappedTypes::Device::IsNull() const
{
    return !GetRawPointer();
}

inline bool MappedTypes::Device::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool MappedTypes::Device::operator!() const
{
    return !GetRawPointer();
}

inline void* MappedTypes::Device::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* MappedTypes::Device::GetRawPointer() const
{
    return MappedTypes::Device::mObject ? mObject: 0;
}

inline void MappedTypes::Device::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* MAPPEDTYPES_DEVICE_DEFINITION_INCLUDED */

