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

#ifndef EXAMPLE_VECTOROF_EXAMPLE_POSITION_DOUBLE_DEFINITION_INCLUDED
#define EXAMPLE_VECTOROF_EXAMPLE_POSITION_DOUBLE_DEFINITION_INCLUDED

#include "Example/VectorOfExamplePositiondoubleDecl.h"
#include "Example/Positiondouble.h"

#ifdef __cplusplus

inline Example::VectorOf<Example::Position<double> >::VectorOf()
{
    SetObject(example_vector_of_example_position_double_default());
}

inline int Example::VectorOf<Example::Position<double> >::GetSize() const
{
    return example_vector_of_example_position_double_get_size(this->GetRawPointer());
}

inline void Example::VectorOf<Example::Position<double> >::Clear()
{
    example_vector_of_example_position_double_clear(this->GetRawPointer());
}

inline void Example::VectorOf<Example::Position<double> >::PushBack(const Example::Position<double>& value)
{
    example_vector_of_example_position_double_push_back(this->GetRawPointer(), value.GetRawPointer());
}

inline Example::Position<double> Example::VectorOf<Example::Position<double> >::GetItem(int index) const
{
    return Example::Position<double>(Example::Position<double>::force_creating_from_raw_pointer, example_vector_of_example_position_double_get_item(this->GetRawPointer(), index), false);
}

inline Example::VectorOf<Example::Position<double> >::VectorOf(const VectorOf<Example::Position<double> >& other)
{
    if (other.mObject)
    {
        SetObject(example_vector_of_example_position_double_copy(other.mObject));
    }
    else
    {
        SetObject(0);
    }
}

inline Example::VectorOf<Example::Position<double> >::VectorOf(Example::VectorOf<Example::Position<double> >::ECreateFromRawPointer, void *object_pointer, bool copy_object)
{
    if (object_pointer && copy_object)
    {
        SetObject(example_vector_of_example_position_double_copy(object_pointer));
    }
    else
    {
        SetObject(object_pointer);
    }
}

inline Example::VectorOf<Example::Position<double> >::~VectorOf()
{
    if (mObject)
    {
        example_vector_of_example_position_double_delete(mObject);
        SetObject(0);
    }
}

inline Example::VectorOf<Example::Position<double> >& Example::VectorOf<Example::Position<double> >::operator=(const Example::VectorOf<Example::Position<double> >& other)
{
    if (mObject != other.mObject)
    {
        if (mObject)
        {
            example_vector_of_example_position_double_delete(mObject);
            SetObject(0);
        }
        if (other.mObject)
        {
            SetObject(example_vector_of_example_position_double_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    return *this;
}

inline Example::VectorOf<Example::Position<double> > Example::VectorOf<Example::Position<double> >::Null()
{
    return Example::VectorOf<Example::Position<double> >(Example::VectorOf<Example::Position<double> >::force_creating_from_raw_pointer, 0, false);
}

inline bool Example::VectorOf<Example::Position<double> >::IsNull() const
{
    return !mObject;
}

inline bool Example::VectorOf<Example::Position<double> >::IsNotNull() const
{
    return mObject != 0;
}

inline bool Example::VectorOf<Example::Position<double> >::operator!() const
{
    return !mObject;
}

inline void* Example::VectorOf<Example::Position<double> >::Detach()
{
    void* result = mObject;
    SetObject(0);
    return result;
}

inline void* Example::VectorOf<Example::Position<double> >::GetRawPointer() const
{
    return mObject;
}

inline void Example::VectorOf<Example::Position<double> >::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* EXAMPLE_VECTOROF_EXAMPLE_POSITION_DOUBLE_DEFINITION_INCLUDED */

