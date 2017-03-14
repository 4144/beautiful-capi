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

#ifdef __cplusplus

inline Example::Printer::Printer()
{
    SetObject(example_printer_new());
}

inline void Example::Printer::Show(const char* text)
{
    example_printer_show(GetRawPointer(), text);
}

inline Example::Printer::Printer(const Printer& other)
{
    if (other.GetRawPointer())
    {
        SetObject(example_printer_copy(other.GetRawPointer()));
    }
    else
    {
        SetObject(0);
    }
}

#ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Example::Printer::Printer(Printer&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Example::Printer::Printer(Example::Printer::ECreateFromRawPointer, void *object_pointer, bool copy_object)
{
    if (object_pointer && copy_object)
    {
        SetObject(example_printer_copy(object_pointer));
    }
    else
    {
        SetObject(object_pointer);
    }
}

inline Example::Printer::~Printer()
{
    if (GetRawPointer())
    {
        example_printer_delete(GetRawPointer());
        SetObject(0);
    }
}

inline Example::Printer& Example::Printer::operator=(const Example::Printer& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            example_printer_delete(GetRawPointer());
            SetObject(0);
        }
        if (other.GetRawPointer())
        {
            SetObject(example_printer_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    return *this;
}

#ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Example::Printer& Example::Printer::operator=(Example::Printer&& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            example_printer_delete(GetRawPointer());
            SetObject(0);
        }
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Example::Printer Example::Printer::Null()
{
    return Example::Printer(Example::Printer::force_creating_from_raw_pointer, 0, false);
}

inline bool Example::Printer::IsNull() const
{
    return !GetRawPointer();
}

inline bool Example::Printer::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool Example::Printer::operator!() const
{
    return !GetRawPointer();
}

inline void* Example::Printer::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* Example::Printer::GetRawPointer() const
{
    return Example::Printer::mObject ? mObject: 0;
}

inline void Example::Printer::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* EXAMPLE_PRINTER_DEFINITION_INCLUDED */
