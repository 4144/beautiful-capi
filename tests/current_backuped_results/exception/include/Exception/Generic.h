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

#ifndef EXCEPTION_GENERIC_DEFINITION_INCLUDED
#define EXCEPTION_GENERIC_DEFINITION_INCLUDED

#include "Exception/GenericDecl.h"
#include "Exception/common/check_and_throw_exception.h"

#ifdef __cplusplus

inline Exception::Generic::Generic()
{
    beautiful_capi_exception_exception_info_t exception_info;
    Exception::Generic result(Exception::Generic::force_creating_from_raw_pointer, exception_generic_new(&exception_info), false);
    beautiful_capi_Exception::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
    SetObject(result.Detach());
}

inline const char* Exception::Generic::GetErrorText() const
{
    return exception_generic_get_error_text_const(GetRawPointer());
}

inline Exception::Generic::Generic(const Generic& other)
{
    if (other.GetRawPointer())
    {
        beautiful_capi_exception_exception_info_t exception_info;
        void* result(exception_generic_copy(&exception_info, other.GetRawPointer()));
        beautiful_capi_Exception::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
        SetObject(result);
    }
    else
    {
        SetObject(0);
    }
}

#ifdef EXCEPTION_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Exception::Generic::Generic(Generic&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* EXCEPTION_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Exception::Generic::Generic(Exception::Generic::ECreateFromRawPointer, void *object_pointer, bool copy_object)
{
    if (object_pointer && copy_object)
    {
        beautiful_capi_exception_exception_info_t exception_info;
        void* result(exception_generic_copy(&exception_info, object_pointer));
        beautiful_capi_Exception::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
        SetObject(result);
    }
    else
    {
        SetObject(object_pointer);
    }
}

inline Exception::Generic::~Generic()
{
    if (GetRawPointer())
    {
        exception_generic_delete(GetRawPointer());
        SetObject(0);
    }
}

inline Exception::Generic& Exception::Generic::operator=(const Exception::Generic& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            exception_generic_delete(GetRawPointer());
            SetObject(0);
        }
        if (other.GetRawPointer())
        {
            beautiful_capi_exception_exception_info_t exception_info;
            void* result(exception_generic_copy(&exception_info, other.mObject));
            beautiful_capi_Exception::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
            SetObject(result);
        }
        else
        {
            SetObject(0);
        }
    }
    return *this;
}

#ifdef EXCEPTION_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Exception::Generic& Exception::Generic::operator=(Exception::Generic&& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            exception_generic_delete(GetRawPointer());
            SetObject(0);
        }
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* EXCEPTION_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Exception::Generic Exception::Generic::Null()
{
    return Exception::Generic(Exception::Generic::force_creating_from_raw_pointer, static_cast<void*>(0), false);
}

inline bool Exception::Generic::IsNull() const
{
    return !GetRawPointer();
}

inline bool Exception::Generic::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool Exception::Generic::operator!() const
{
    return !GetRawPointer();
}

inline void* Exception::Generic::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* Exception::Generic::GetRawPointer() const
{
    return Exception::Generic::mObject ? mObject: 0;
}

inline void Exception::Generic::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* EXCEPTION_GENERIC_DEFINITION_INCLUDED */

