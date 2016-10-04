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

#ifndef EXAMPLE_POSITION4D_DOUBLE_DEFINITION_INCLUDED
#define EXAMPLE_POSITION4D_DOUBLE_DEFINITION_INCLUDED

#include "Example/Position4DdoubleDecl.h"
#include "Example/Positiondouble.h"

#ifdef __cplusplus

inline Example::Position4D<double>::Position4D() : Example::Position<double>(Example::Position<double>::force_creating_from_raw_pointer, 0, false)
{
    SetObject(example_position4_d_double_default());
}

inline double Example::Position4D<double>::GetW() const
{
    return example_position4_d_double_get_w(this->get_raw_pointer());
}

inline void Example::Position4D<double>::SetW(double x)
{
    example_position4_d_double_set_w(this->get_raw_pointer(), x);
}

inline Example::Position4D<double>::Position4D(const Position4D<double>& other) : Example::Position<double>(Example::Position<double>::force_creating_from_raw_pointer, 0, false)
{
    if (other.mObject)
    {
        SetObject(example_position4_d_double_copy(other.mObject));
    }
    else
    {
        SetObject(0);
    }
}

inline Example::Position4D<double>::Position4D(Example::Position4D<double>::ECreateFromRawPointer, void *object_pointer, bool copy_object) : Example::Position<double>(Example::Position<double>::force_creating_from_raw_pointer, 0, false)
{
    if (object_pointer && copy_object)
    {
        SetObject(example_position4_d_double_copy(object_pointer));
    }
    else
    {
        SetObject(object_pointer);
    }
}

inline Example::Position4D<double>::~Position4D()
{
    if (mObject)
    {
        example_position4_d_double_delete(mObject);
        SetObject(0);
    }
}

inline Example::Position4D<double>& Example::Position4D<double>::operator=(const Example::Position4D<double>& other)
{
    if (mObject != other.mObject)
    {
        if (mObject)
        {
            example_position4_d_double_delete(mObject);
            SetObject(0);
        }
        if (other.mObject)
        {
            SetObject(example_position4_d_double_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    return *this;
}

inline bool Example::Position4D<double>::IsNull() const
{
    return !mObject;
}

inline bool Example::Position4D<double>::IsNotNull() const
{
    return mObject != 0;
}

inline bool Example::Position4D<double>::operator!() const
{
    return !mObject;
}

inline void* Example::Position4D<double>::Detach()
{
    void* result = mObject;
    SetObject(0);
    return result;
}

inline void* Example::Position4D<double>::get_raw_pointer() const
{
    return mObject;
}

inline void Example::Position4D<double>::SetObject(void* object_pointer)
{
    mObject = object_pointer;
    if (mObject)
    {
        Example::Position<double>::SetObject(example_position4_d_double_cast_to_base(mObject));
    }
    else
    {
        Example::Position<double>::SetObject(0);
    }
}

#endif /* __cplusplus */

#endif /* EXAMPLE_POSITION4D_DOUBLE_DEFINITION_INCLUDED */
