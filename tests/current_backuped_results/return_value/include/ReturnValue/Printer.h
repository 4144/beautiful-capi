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

#ifndef RETURNVALUE_PRINTER_DEFINITION_INCLUDED
#define RETURNVALUE_PRINTER_DEFINITION_INCLUDED

#include "ReturnValue/PrinterDecl.h"
#include "ReturnValue/FirstName.h"
#include "ReturnValue/MiddleName.h"
#include "ReturnValue/LastName.h"

#ifdef __cplusplus

inline ReturnValue::Printer::Printer()
{
    SetObject(ReturnValue::Printer(ReturnValue::Printer::force_creating_from_raw_pointer, return_value_printer_default(), false).Detach());
}

inline void ReturnValue::Printer::ShowFirstName(const ReturnValue::FirstName& first_name)
{
    return_value_printer_show_first_name(GetRawPointer(), first_name.GetRawPointer());
}

inline void ReturnValue::Printer::ShowMiddleName(const ReturnValue::MiddleNamePtr& middle_name)
{
    return_value_printer_show_middle_name(GetRawPointer(), middle_name.GetRawPointer());
}

inline void ReturnValue::Printer::ShowLastName(const ReturnValue::LastNameRawPtr& last_name)
{
    return_value_printer_show_last_name(GetRawPointer(), last_name.GetRawPointer());
}

inline ReturnValue::Printer::Printer(const Printer& other)
{
    if (other.GetRawPointer())
    {
        SetObject(return_value_printer_copy(other.GetRawPointer()));
    }
    else
    {
        SetObject(0);
    }
}

#ifdef RETURNVALUE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline ReturnValue::Printer::Printer(Printer&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* RETURNVALUE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline ReturnValue::Printer::Printer(ReturnValue::Printer::ECreateFromRawPointer, void *object_pointer, bool copy_object)
{
    if (object_pointer && copy_object)
    {
        SetObject(return_value_printer_copy(object_pointer));
    }
    else
    {
        SetObject(object_pointer);
    }
}

inline ReturnValue::Printer::~Printer()
{
    if (GetRawPointer())
    {
        return_value_printer_delete(GetRawPointer());
        SetObject(0);
    }
}

inline ReturnValue::Printer& ReturnValue::Printer::operator=(const ReturnValue::Printer& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            return_value_printer_delete(GetRawPointer());
            SetObject(0);
        }
        if (other.GetRawPointer())
        {
            SetObject(return_value_printer_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    return *this;
}

#ifdef RETURNVALUE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline ReturnValue::Printer& ReturnValue::Printer::operator=(ReturnValue::Printer&& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            return_value_printer_delete(GetRawPointer());
            SetObject(0);
        }
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* RETURNVALUE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline ReturnValue::Printer ReturnValue::Printer::Null()
{
    return ReturnValue::Printer(ReturnValue::Printer::force_creating_from_raw_pointer, static_cast<void*>(0), false);
}

inline bool ReturnValue::Printer::IsNull() const
{
    return !GetRawPointer();
}

inline bool ReturnValue::Printer::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool ReturnValue::Printer::operator!() const
{
    return !GetRawPointer();
}

inline void* ReturnValue::Printer::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* ReturnValue::Printer::GetRawPointer() const
{
    return ReturnValue::Printer::mObject ? mObject: 0;
}

inline void ReturnValue::Printer::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* RETURNVALUE_PRINTER_DEFINITION_INCLUDED */

