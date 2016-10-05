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

#ifndef EXCEPTION_DIVISIONBYZERO_DEFINITION_INCLUDED
#define EXCEPTION_DIVISIONBYZERO_DEFINITION_INCLUDED

#include "Exception/DivisionByZeroDecl.h"
#include "Exception/Generic.h"
#include "Callback/common/check_and_throw_exception.h"

#ifdef __cplusplus

inline Exception::DivisionByZero::DivisionByZero() : Exception::Generic(Exception::Generic::force_creating_from_raw_pointer, 0, false)
{
    beautiful_capi_callback_exception_info_t exception_info;
    void* result(exception_division_by_zero_new(&exception_info));
    beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
    SetObject(result);
}

inline Exception::DivisionByZero::DivisionByZero(const DivisionByZero& other) : Exception::Generic(Exception::Generic::force_creating_from_raw_pointer, 0, false)
{
    if (other.mObject)
    {
        beautiful_capi_callback_exception_info_t exception_info;
        void* result(exception_division_by_zero_copy(&exception_info, other.mObject));
        beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
        SetObject(result);
    }
    else
    {
        SetObject(0);
    }
}

inline Exception::DivisionByZero::DivisionByZero(Exception::DivisionByZero::ECreateFromRawPointer, void *object_pointer, bool copy_object) : Exception::Generic(Exception::Generic::force_creating_from_raw_pointer, 0, false)
{
    if (object_pointer && copy_object)
    {
        beautiful_capi_callback_exception_info_t exception_info;
        void* result(exception_division_by_zero_copy(&exception_info, object_pointer));
        beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
        SetObject(result);
    }
    else
    {
        SetObject(object_pointer);
    }
}

inline Exception::DivisionByZero::~DivisionByZero()
{
    if (mObject)
    {
        exception_division_by_zero_delete(mObject);
        SetObject(0);
    }
}

inline Exception::DivisionByZero& Exception::DivisionByZero::operator=(const Exception::DivisionByZero& other)
{
    if (mObject != other.mObject)
    {
        if (mObject)
        {
            exception_division_by_zero_delete(mObject);
            SetObject(0);
        }
        if (other.mObject)
        {
            beautiful_capi_callback_exception_info_t exception_info;
            void* result(exception_division_by_zero_copy(&exception_info, other.mObject));
            beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
            SetObject(result);
        }
        else
        {
            SetObject(0);
        }
    }
    return *this;
}

inline Exception::DivisionByZero Exception::DivisionByZero::Null()
{
    return Exception::DivisionByZero(Exception::DivisionByZero::force_creating_from_raw_pointer, 0, false);
}

inline bool Exception::DivisionByZero::IsNull() const
{
    return !mObject;
}

inline bool Exception::DivisionByZero::IsNotNull() const
{
    return mObject != 0;
}

inline bool Exception::DivisionByZero::operator!() const
{
    return !mObject;
}

inline void* Exception::DivisionByZero::Detach()
{
    void* result = mObject;
    SetObject(0);
    return result;
}

inline void* Exception::DivisionByZero::GetRawPointer() const
{
    return mObject;
}

inline void Exception::DivisionByZero::SetObject(void* object_pointer)
{
    mObject = object_pointer;
    if (mObject)
    {
        Exception::Generic::SetObject(exception_division_by_zero_cast_to_base(mObject));
    }
    else
    {
        Exception::Generic::SetObject(0);
    }
}

#endif /* __cplusplus */

#endif /* EXCEPTION_DIVISIONBYZERO_DEFINITION_INCLUDED */

