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

#ifndef SAMPLE_DATA_DEFINITION_INCLUDED
#define SAMPLE_DATA_DEFINITION_INCLUDED

#include "Sample/DataDecl.h"

#ifdef __cplusplus

inline Sample::Data::Data()
{
    SetObject(sample_data_new());
}

inline int Sample::Data::GetData()
{
    return sample_data_get_data(this->GetRawPointer());
}

inline void Sample::Data::SetData(int value)
{
    sample_data_set_data(this->GetRawPointer(), value);
}

inline Sample::Data::Data(const Data& other)
{
    if (other.mObject)
    {
        SetObject(sample_data_copy(other.mObject));
    }
    else
    {
        SetObject(0);
    }
}

#ifdef SAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Sample::Data::Data(Data&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* SAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Sample::Data::Data(Sample::Data::ECreateFromRawPointer, void *object_pointer, bool copy_object)
{
    if (object_pointer && copy_object)
    {
        SetObject(sample_data_copy(object_pointer));
    }
    else
    {
        SetObject(object_pointer);
    }
}

inline Sample::Data::~Data()
{
    if (mObject && Sample::Data::mObject)
    {
        sample_data_delete(mObject);
        SetObject(0);
    }
}

inline Sample::Data& Sample::Data::operator=(const Sample::Data& other)
{
    if (this != &other)
    {
        if (mObject && Sample::Data::mObject)
        {
            sample_data_delete(mObject);
            SetObject(0);
        }
        if (other.mObject)
        {
            SetObject(sample_data_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    return *this;
}

#ifdef SAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Sample::Data& Sample::Data::operator=(Sample::Data&& other)
{
    if (this != &other)
    {
        if (mObject && Sample::Data::mObject)
        {
            sample_data_delete(mObject);
            SetObject(0);
        }
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* SAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Sample::Data Sample::Data::Null()
{
    return Sample::Data(Sample::Data::force_creating_from_raw_pointer, 0, false);
}

inline bool Sample::Data::IsNull() const
{
    return !mObject;
}

inline bool Sample::Data::IsNotNull() const
{
    return mObject != 0;
}

inline bool Sample::Data::operator!() const
{
    return !mObject;
}

inline void* Sample::Data::Detach()
{
    void* result = mObject;
    SetObject(0);
    return result;
}

inline void* Sample::Data::GetRawPointer() const
{
    return mObject;
}

inline void Sample::Data::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* SAMPLE_DATA_DEFINITION_INCLUDED */

