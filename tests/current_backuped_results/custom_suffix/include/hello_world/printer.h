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

#ifndef HELLO_WORLD_PRINTER_DEFINITION_INCLUDED
#define HELLO_WORLD_PRINTER_DEFINITION_INCLUDED

#include "hello_world/printer_decl.h"

#ifdef __cplusplus

inline hello_world::printer::printer()
{
    SetObject(hello_world_printer_default());
}

inline void hello_world::printer::show() const
{
    hello_world_printer_show(this->get_raw_pointer());
}

inline hello_world::printer::printer(const printer& other)
{
    if (other.mObject)
    {
        SetObject(hello_world_printer_copy(other.mObject));
    }
    else
    {
        SetObject(0);
    }
}

inline hello_world::printer::printer(hello_world::printer::ECreateFromRawPointer, void *object_pointer, bool copy_object)
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

inline hello_world::printer::~printer()
{
    if (mObject)
    {
        hello_world_printer_delete(mObject);
        SetObject(0);
    }
}

inline hello_world::printer& hello_world::printer::operator=(const hello_world::printer& other)
{
    if (mObject != other.mObject)
    {
        if (mObject)
        {
            hello_world_printer_delete(mObject);
            SetObject(0);
        }
        if (other.mObject)
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

inline hello_world::printer hello_world::printer::null()
{
    return hello_world::printer(hello_world::printer::force_creating_from_raw_pointer, 0, false);
}

inline bool hello_world::printer::is_null() const
{
    return !mObject;
}

inline bool hello_world::printer::is_not_null() const
{
    return mObject != 0;
}

inline bool hello_world::printer::operator!() const
{
    return !mObject;
}

inline void* hello_world::printer::detach()
{
    void* result = mObject;
    SetObject(0);
    return result;
}

inline void* hello_world::printer::get_raw_pointer() const
{
    return mObject;
}

inline void hello_world::printer::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* HELLO_WORLD_PRINTER_DEFINITION_INCLUDED */

