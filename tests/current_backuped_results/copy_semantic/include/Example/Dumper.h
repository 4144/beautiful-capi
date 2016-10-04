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

#ifndef EXAMPLE_DUMPER_DEFINITION_INCLUDED
#define EXAMPLE_DUMPER_DEFINITION_INCLUDED

#include "Example/DumperDecl.h"
#include "Example/Printer.h"

#ifdef __cplusplus

inline Example::Dumper::Dumper()
{
    SetObject(example_dumper_new());
}

inline Example::Printer Example::Dumper::GetPrinter() const
{
    return Example::Printer(Example::Printer::force_creating_from_raw_pointer, example_dumper_get_printer(this->get_raw_pointer()), false);
}

inline void Example::Dumper::SetPrinter(const Example::Printer& printer)
{
    example_dumper_set_printer(this->get_raw_pointer(), printer.get_raw_pointer());
}

inline void Example::Dumper::Dump()
{
    example_dumper_dump(this->get_raw_pointer());
}

inline Example::Dumper::Dumper(const Dumper& other)
{
    if (other.mObject)
    {
        SetObject(example_dumper_copy(other.mObject));
    }
    else
    {
        SetObject(0);
    }
}

inline Example::Dumper::Dumper(Example::Dumper::ECreateFromRawPointer, void *object_pointer, bool copy_object)
{
    if (object_pointer && copy_object)
    {
        SetObject(example_dumper_copy(object_pointer));
    }
    else
    {
        SetObject(object_pointer);
    }
}

inline Example::Dumper::~Dumper()
{
    if (mObject)
    {
        example_dumper_delete(mObject);
        SetObject(0);
    }
}

inline Example::Dumper& Example::Dumper::operator=(const Example::Dumper& other)
{
    if (mObject != other.mObject)
    {
        if (mObject)
        {
            example_dumper_delete(mObject);
            SetObject(0);
        }
        if (other.mObject)
        {
            SetObject(example_dumper_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    return *this;
}

inline bool Example::Dumper::IsNull() const
{
    return !mObject;
}

inline bool Example::Dumper::IsNotNull() const
{
    return mObject != 0;
}

inline bool Example::Dumper::operator!() const
{
    return !mObject;
}

inline void* Example::Dumper::Detach()
{
    void* result = mObject;
    SetObject(0);
    return result;
}

inline void* Example::Dumper::get_raw_pointer() const
{
    return mObject;
}

inline void Example::Dumper::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* EXAMPLE_DUMPER_DEFINITION_INCLUDED */

