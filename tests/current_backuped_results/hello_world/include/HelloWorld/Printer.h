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

#ifndef HELLOWORLD_PRINTER_DEFINITION_INCLUDED
#define HELLOWORLD_PRINTER_DEFINITION_INCLUDED

#include "HelloWorld/PrinterDecl.h"

#ifdef __cplusplus

inline HelloWorld::Printer::Printer()
{
    SetObject(hello_world_printer_default());
}

inline void HelloWorld::Printer::Show() const
{
    hello_world_printer_show_const(GetRawPointer());
}

inline HelloWorld::Printer::Printer(const Printer& other)
{
    if (other.GetRawPointer())
    {
        SetObject(hello_world_printer_copy(other.GetRawPointer()));
    }
    else
    {
        SetObject(0);
    }
}

#ifdef HELLOWORLD_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline HelloWorld::Printer::Printer(Printer&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* HELLOWORLD_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline HelloWorld::Printer::Printer(HelloWorld::Printer::ECreateFromRawPointer, void *object_pointer, bool copy_object)
{
    if (object_pointer && copy_object)
    {
        SetObject(hello_world_printer_copy(object_pointer));
    }
    else
    {
        SetObject(object_pointer);
    }
}

inline HelloWorld::Printer::~Printer()
{
    if (GetRawPointer())
    {
        hello_world_printer_delete(GetRawPointer());
        SetObject(0);
    }
}

inline HelloWorld::Printer& HelloWorld::Printer::operator=(const HelloWorld::Printer& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            hello_world_printer_delete(GetRawPointer());
            SetObject(0);
        }
        if (other.GetRawPointer())
        {
            SetObject(hello_world_printer_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    return *this;
}

#ifdef HELLOWORLD_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline HelloWorld::Printer& HelloWorld::Printer::operator=(HelloWorld::Printer&& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            hello_world_printer_delete(GetRawPointer());
            SetObject(0);
        }
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* HELLOWORLD_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline HelloWorld::Printer HelloWorld::Printer::Null()
{
    return HelloWorld::Printer(HelloWorld::Printer::force_creating_from_raw_pointer, 0, false);
}

inline bool HelloWorld::Printer::IsNull() const
{
    return !GetRawPointer();
}

inline bool HelloWorld::Printer::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool HelloWorld::Printer::operator!() const
{
    return !GetRawPointer();
}

inline void* HelloWorld::Printer::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* HelloWorld::Printer::GetRawPointer() const
{
    return HelloWorld::Printer::mObject ? mObject: 0;
}

inline void HelloWorld::Printer::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* HELLOWORLD_PRINTER_DEFINITION_INCLUDED */

