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

#ifndef EXAMPLE_PRINTER_DEFINITION_INCLUDED
#define EXAMPLE_PRINTER_DEFINITION_INCLUDED

#include "Example/PrinterDecl.h"
#include "Exception/common/check_and_throw_exception.h"

#ifdef __cplusplus

inline Example::Printer::Printer()
{
    beautiful_capi_exception_exception_info_t exception_info;
    void* result(example_printer_new(&exception_info));
    beautiful_capi_Exception::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
    SetObject(result);
}

inline const char* Example::Printer::Show(const char* text)
{
    beautiful_capi_exception_exception_info_t exception_info;
    const char* result(example_printer_show(&exception_info, this->get_raw_pointer(), text));
    beautiful_capi_Exception::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
    return result;
}

inline void Example::Printer::PowerOn()
{
    beautiful_capi_exception_exception_info_t exception_info;
    example_printer_power_on(&exception_info, this->get_raw_pointer());
    beautiful_capi_Exception::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
}

inline void Example::Printer::PowerOff()
{
    example_printer_power_off(this->get_raw_pointer());
}

inline Example::Printer::Printer(const Printer& other)
{
    if (other.mObject)
    {
        beautiful_capi_exception_exception_info_t exception_info;
        void* result(example_printer_copy(&exception_info, other.mObject));
        beautiful_capi_Exception::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
        SetObject(result);
    }
    else
    {
        SetObject(0);
    }
}

inline Example::Printer::Printer(Example::Printer::ECreateFromRawPointer, void *object_pointer, bool copy_object)
{
    if (object_pointer && copy_object)
    {
        beautiful_capi_exception_exception_info_t exception_info;
        void* result(example_printer_copy(&exception_info, object_pointer));
        beautiful_capi_Exception::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
        SetObject(result);
    }
    else
    {
        SetObject(object_pointer);
    }
}

inline Example::Printer::~Printer()
{
    if (mObject)
    {
        example_printer_delete(mObject);
        SetObject(0);
    }
}

inline Example::Printer& Example::Printer::operator=(const Example::Printer& other)
{
    if (mObject != other.mObject)
    {
        if (mObject)
        {
            example_printer_delete(mObject);
            SetObject(0);
        }
        if (other.mObject)
        {
            beautiful_capi_exception_exception_info_t exception_info;
            void* result(example_printer_copy(&exception_info, other.mObject));
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

inline bool Example::Printer::IsNull() const
{
    return !mObject;
}

inline bool Example::Printer::IsNotNull() const
{
    return mObject != 0;
}

inline bool Example::Printer::operator!() const
{
    return !mObject;
}

inline void* Example::Printer::Detach()
{
    void* result = mObject;
    SetObject(0);
    return result;
}

inline void* Example::Printer::get_raw_pointer() const
{
    return mObject;
}

inline void Example::Printer::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* EXAMPLE_PRINTER_DEFINITION_INCLUDED */

