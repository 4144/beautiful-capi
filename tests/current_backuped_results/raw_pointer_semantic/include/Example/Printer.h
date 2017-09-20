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

inline Example::PrinterRawPtr::PrinterRawPtr()
{
    SetObject(Example::PrinterRawPtr(Example::PrinterRawPtr::force_creating_from_raw_pointer, example_printer_new(), false).Detach());
}

inline void Example::PrinterRawPtr::Show(const char* text)
{
    example_printer_show(GetRawPointer(), text);
}

inline Example::PrinterRawPtr::PrinterRawPtr(const PrinterRawPtr& other)
{
    SetObject(other.GetRawPointer());
}

#ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Example::PrinterRawPtr::PrinterRawPtr(PrinterRawPtr&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Example::PrinterRawPtr::PrinterRawPtr(Example::PrinterRawPtr::ECreateFromRawPointer, void *object_pointer, bool)
{
    SetObject(object_pointer);
}

inline void Example::PrinterRawPtr::Delete()
{
    if (GetRawPointer())
    {
        example_printer_delete(GetRawPointer());
        SetObject(0);
    }
}

inline Example::PrinterRawPtr& Example::PrinterRawPtr::operator=(const Example::PrinterRawPtr& other)
{
    if (this != &other)
    {
        SetObject(other.GetRawPointer());
    }
    return *this;
}

#ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Example::PrinterRawPtr& Example::PrinterRawPtr::operator=(Example::PrinterRawPtr&& other)
{
    if (this != &other)
    {
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Example::PrinterRawPtr Example::PrinterRawPtr::Null()
{
    return Example::PrinterRawPtr(Example::PrinterRawPtr::force_creating_from_raw_pointer, static_cast<void*>(0), false);
}

inline bool Example::PrinterRawPtr::IsNull() const
{
    return !GetRawPointer();
}

inline bool Example::PrinterRawPtr::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool Example::PrinterRawPtr::operator!() const
{
    return !GetRawPointer();
}

inline void* Example::PrinterRawPtr::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* Example::PrinterRawPtr::GetRawPointer() const
{
    return Example::PrinterRawPtr::mObject ? mObject: 0;
}

inline Example::PrinterRawPtr* Example::PrinterRawPtr::operator->()
{
    return this;
}

inline const Example::PrinterRawPtr* Example::PrinterRawPtr::operator->() const
{
    return this;
}

inline void Example::PrinterRawPtr::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* EXAMPLE_PRINTER_DEFINITION_INCLUDED */

