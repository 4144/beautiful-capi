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

#ifndef EXAMPLE_VECTOROF_EXAMPLE_POSITION4D_FLOAT_DEFINITION_INCLUDED
#define EXAMPLE_VECTOROF_EXAMPLE_POSITION4D_FLOAT_DEFINITION_INCLUDED

#include "Example/VectorOfExamplePosition4DfloatDecl.h"
#include "Example/Position4Dfloat.h"

#ifdef __cplusplus

inline Example::VectorOf<Example::Position4D<float> >::VectorOf()
{
    SetObject(example_vector_of_example_position4_d_float_default());
}

inline int Example::VectorOf<Example::Position4D<float> >::GetSize() const
{
    return example_vector_of_example_position4_d_float_get_size(this->GetRawPointer());
}

inline void Example::VectorOf<Example::Position4D<float> >::Clear()
{
    example_vector_of_example_position4_d_float_clear(this->GetRawPointer());
}

inline void Example::VectorOf<Example::Position4D<float> >::PushBack(const Example::Position4D<float>& value)
{
    example_vector_of_example_position4_d_float_push_back(this->GetRawPointer(), value.GetRawPointer());
}

inline Example::Position4D<float> Example::VectorOf<Example::Position4D<float> >::GetItem(int index) const
{
    return Example::Position4D<float>(Example::Position4D<float>::force_creating_from_raw_pointer, example_vector_of_example_position4_d_float_get_item(this->GetRawPointer(), index), false);
}

inline Example::VectorOf<Example::Position4D<float> >::VectorOf(const VectorOf<Example::Position4D<float> >& other)
{
    if (other.mObject)
    {
        SetObject(example_vector_of_example_position4_d_float_copy(other.mObject));
    }
    else
    {
        SetObject(0);
    }
}

inline Example::VectorOf<Example::Position4D<float> >::VectorOf(Example::VectorOf<Example::Position4D<float> >::ECreateFromRawPointer, void *object_pointer, bool copy_object)
{
    if (object_pointer && copy_object)
    {
        SetObject(example_vector_of_example_position4_d_float_copy(object_pointer));
    }
    else
    {
        SetObject(object_pointer);
    }
}

inline Example::VectorOf<Example::Position4D<float> >::~VectorOf()
{
    if (mObject)
    {
        example_vector_of_example_position4_d_float_delete(mObject);
        SetObject(0);
    }
}

inline Example::VectorOf<Example::Position4D<float> >& Example::VectorOf<Example::Position4D<float> >::operator=(const Example::VectorOf<Example::Position4D<float> >& other)
{
    if (mObject != other.mObject)
    {
        if (mObject)
        {
            example_vector_of_example_position4_d_float_delete(mObject);
            SetObject(0);
        }
        if (other.mObject)
        {
            SetObject(example_vector_of_example_position4_d_float_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    return *this;
}

inline bool Example::VectorOf<Example::Position4D<float> >::IsNull() const
{
    return !mObject;
}

inline bool Example::VectorOf<Example::Position4D<float> >::IsNotNull() const
{
    return mObject != 0;
}

inline bool Example::VectorOf<Example::Position4D<float> >::operator!() const
{
    return !mObject;
}

inline void* Example::VectorOf<Example::Position4D<float> >::Detach()
{
    void* result = mObject;
    SetObject(0);
    return result;
}

inline void* Example::VectorOf<Example::Position4D<float> >::GetRawPointer() const
{
    return mObject;
}

inline void Example::VectorOf<Example::Position4D<float> >::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* EXAMPLE_VECTOROF_EXAMPLE_POSITION4D_FLOAT_DEFINITION_INCLUDED */

