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

#ifndef EXAMPLE_VECTOROF_EXAMPLE_POSITION4D_DOUBLE_DEFINITION_INCLUDED
#define EXAMPLE_VECTOROF_EXAMPLE_POSITION4D_DOUBLE_DEFINITION_INCLUDED

#include "Example/VectorOfExamplePosition4DdoubleDecl.h"
#include "Example/Position4Ddouble.h"

#ifdef __cplusplus

inline Example::VectorOf<Example::Position4D<double> >::VectorOf()
{
    SetObject(example_vector_of_example_position4_d_double_default());
}

inline int Example::VectorOf<Example::Position4D<double> >::GetSize() const
{
    return example_vector_of_example_position4_d_double_get_size(GetRawPointer());
}

inline void Example::VectorOf<Example::Position4D<double> >::Clear()
{
    example_vector_of_example_position4_d_double_clear(GetRawPointer());
}

inline void Example::VectorOf<Example::Position4D<double> >::PushBack(const Example::Position4D<double>& value)
{
    example_vector_of_example_position4_d_double_push_back(GetRawPointer(), value.GetRawPointer());
}

inline Example::Position4D<double> Example::VectorOf<Example::Position4D<double> >::GetItem(int index) const
{
    return Example::Position4D<double>(Example::Position4D<double>::force_creating_from_raw_pointer, example_vector_of_example_position4_d_double_get_item(GetRawPointer(), index), false);
}

inline Example::VectorOf<Example::Position4D<double> >::VectorOf(const VectorOf<Example::Position4D<double> >& other)
{
    if (other.GetRawPointer())
    {
        SetObject(example_vector_of_example_position4_d_double_copy(other.GetRawPointer()));
    }
    else
    {
        SetObject(0);
    }
}

#ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Example::VectorOf<Example::Position4D<double> >::VectorOf(VectorOf<Example::Position4D<double> >&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Example::VectorOf<Example::Position4D<double> >::VectorOf(Example::VectorOf<Example::Position4D<double> >::ECreateFromRawPointer, void *object_pointer, bool copy_object)
{
    if (object_pointer && copy_object)
    {
        SetObject(example_vector_of_example_position4_d_double_copy(object_pointer));
    }
    else
    {
        SetObject(object_pointer);
    }
}

inline Example::VectorOf<Example::Position4D<double> >::~VectorOf()
{
    if (GetRawPointer())
    {
        example_vector_of_example_position4_d_double_delete(GetRawPointer());
        SetObject(0);
    }
}

inline Example::VectorOf<Example::Position4D<double> >& Example::VectorOf<Example::Position4D<double> >::operator=(const Example::VectorOf<Example::Position4D<double> >& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            example_vector_of_example_position4_d_double_delete(GetRawPointer());
            SetObject(0);
        }
        if (other.GetRawPointer())
        {
            SetObject(example_vector_of_example_position4_d_double_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    return *this;
}

#ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Example::VectorOf<Example::Position4D<double> >& Example::VectorOf<Example::Position4D<double> >::operator=(Example::VectorOf<Example::Position4D<double> >&& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            example_vector_of_example_position4_d_double_delete(GetRawPointer());
            SetObject(0);
        }
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Example::VectorOf<Example::Position4D<double> > Example::VectorOf<Example::Position4D<double> >::Null()
{
    return Example::VectorOf<Example::Position4D<double> >(Example::VectorOf<Example::Position4D<double> >::force_creating_from_raw_pointer, 0, false);
}

inline bool Example::VectorOf<Example::Position4D<double> >::IsNull() const
{
    return !GetRawPointer();
}

inline bool Example::VectorOf<Example::Position4D<double> >::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool Example::VectorOf<Example::Position4D<double> >::operator!() const
{
    return !GetRawPointer();
}

inline void* Example::VectorOf<Example::Position4D<double> >::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* Example::VectorOf<Example::Position4D<double> >::GetRawPointer() const
{
    return Example::VectorOf<Example::Position4D<double> >::mObject ? mObject: 0;
}

inline void Example::VectorOf<Example::Position4D<double> >::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* EXAMPLE_VECTOROF_EXAMPLE_POSITION4D_DOUBLE_DEFINITION_INCLUDED */

