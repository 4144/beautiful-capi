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

inline Example::PrinterPtr::PrinterPtr()
{
    SetObject(example_printer_new());
}

inline void Example::PrinterPtr::Show(const char* text) const
{
    example_printer_show(this->get_raw_pointer(), text);
}

inline Example::PrinterPtr::PrinterPtr(const PrinterPtr& other)
{
    SetObject(other.mObject);
    if (other.mObject)
    {
        example_printer_add_ref(other.mObject);
    }
}

inline Example::PrinterPtr::PrinterPtr(Example::PrinterPtr::ECreateFromRawPointer, void *object_pointer, bool add_ref_object)
{
    SetObject(object_pointer);
    if (add_ref_object && object_pointer)
    {
        example_printer_add_ref(object_pointer);
    }
}

inline Example::PrinterPtr::~PrinterPtr()
{
    if (mObject)
    {
        example_printer_release(mObject);
        SetObject(0);
    }
}

inline Example::PrinterPtr& Example::PrinterPtr::operator=(const Example::PrinterPtr& other)
{
    if (mObject != other.mObject)
    {
        if (mObject)
        {
            example_printer_release(mObject);
            SetObject(0);
        }
        SetObject(other.mObject);
        if (other.mObject)
        {
            example_printer_add_ref(other.mObject);
        }
    }
    return *this;
}

inline bool Example::PrinterPtr::IsNull() const
{
    return !mObject;
}

inline bool Example::PrinterPtr::IsNotNull() const
{
    return mObject != 0;
}

inline bool Example::PrinterPtr::operator!() const
{
    return !mObject;
}

inline void* Example::PrinterPtr::Detach()
{
    void* result = mObject;
    SetObject(0);
    return result;
}

inline void* Example::PrinterPtr::get_raw_pointer() const
{
    return mObject;
}

inline Example::PrinterPtr* Example::PrinterPtr::operator->()
{
    return this;
}

inline const Example::PrinterPtr* Example::PrinterPtr::operator->() const
{
    return this;
}

inline void Example::PrinterPtr::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* EXAMPLE_PRINTER_DEFINITION_INCLUDED */

