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

#ifndef EXAMPLE_VECTOROFOBJECTS_EXAMPLE_MODEL_DOUBLE_DEFINITION_INCLUDED
#define EXAMPLE_VECTOROFOBJECTS_EXAMPLE_MODEL_DOUBLE_DEFINITION_INCLUDED

#include "Example/VectorOfObjectsExampleModeldoubleDecl.h"
#include "Example/Modeldouble.h"

#ifdef __cplusplus

inline Example::VectorOfObjectsPtr<Example::ModelPtr<double> >::VectorOfObjectsPtr()
{
    SetObject(example_vector_of_objects_example_model_double_default());
}

inline int Example::VectorOfObjectsPtr<Example::ModelPtr<double> >::GetSize() const
{
    return example_vector_of_objects_example_model_double_get_size(this->GetRawPointer());
}

inline void Example::VectorOfObjectsPtr<Example::ModelPtr<double> >::Clear()
{
    example_vector_of_objects_example_model_double_clear(this->GetRawPointer());
}

inline void Example::VectorOfObjectsPtr<Example::ModelPtr<double> >::PushBack(const Example::ModelPtr<double>& value)
{
    example_vector_of_objects_example_model_double_push_back(this->GetRawPointer(), value.GetRawPointer());
}

inline Example::ModelPtr<double> Example::VectorOfObjectsPtr<Example::ModelPtr<double> >::GetItem(int index) const
{
    return Example::ModelPtr<double>(Example::ModelPtr<double>::force_creating_from_raw_pointer, example_vector_of_objects_example_model_double_get_item(this->GetRawPointer(), index), true);
}

inline Example::VectorOfObjectsPtr<Example::ModelPtr<double> >::VectorOfObjectsPtr(const VectorOfObjectsPtr<Example::ModelPtr<double> >& other)
{
    SetObject(other.mObject);
    if (other.mObject)
    {
        example_vector_of_objects_example_model_double_add_ref(other.mObject);
    }
}

inline Example::VectorOfObjectsPtr<Example::ModelPtr<double> >::VectorOfObjectsPtr(Example::VectorOfObjectsPtr<Example::ModelPtr<double> >::ECreateFromRawPointer, void *object_pointer, bool add_ref_object)
{
    SetObject(object_pointer);
    if (add_ref_object && object_pointer)
    {
        example_vector_of_objects_example_model_double_add_ref(object_pointer);
    }
}

inline Example::VectorOfObjectsPtr<Example::ModelPtr<double> >::~VectorOfObjectsPtr()
{
    if (mObject)
    {
        example_vector_of_objects_example_model_double_release(mObject);
        SetObject(0);
    }
}

inline Example::VectorOfObjectsPtr<Example::ModelPtr<double> >& Example::VectorOfObjectsPtr<Example::ModelPtr<double> >::operator=(const Example::VectorOfObjectsPtr<Example::ModelPtr<double> >& other)
{
    if (mObject != other.mObject)
    {
        if (mObject)
        {
            example_vector_of_objects_example_model_double_release(mObject);
            SetObject(0);
        }
        SetObject(other.mObject);
        if (other.mObject)
        {
            example_vector_of_objects_example_model_double_add_ref(other.mObject);
        }
    }
    return *this;
}

inline bool Example::VectorOfObjectsPtr<Example::ModelPtr<double> >::IsNull() const
{
    return !mObject;
}

inline bool Example::VectorOfObjectsPtr<Example::ModelPtr<double> >::IsNotNull() const
{
    return mObject != 0;
}

inline bool Example::VectorOfObjectsPtr<Example::ModelPtr<double> >::operator!() const
{
    return !mObject;
}

inline void* Example::VectorOfObjectsPtr<Example::ModelPtr<double> >::Detach()
{
    void* result = mObject;
    SetObject(0);
    return result;
}

inline void* Example::VectorOfObjectsPtr<Example::ModelPtr<double> >::GetRawPointer() const
{
    return mObject;
}

inline Example::VectorOfObjectsPtr<Example::ModelPtr<double> >* Example::VectorOfObjectsPtr<Example::ModelPtr<double> >::operator->()
{
    return this;
}

inline const Example::VectorOfObjectsPtr<Example::ModelPtr<double> >* Example::VectorOfObjectsPtr<Example::ModelPtr<double> >::operator->() const
{
    return this;
}

inline void Example::VectorOfObjectsPtr<Example::ModelPtr<double> >::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* EXAMPLE_VECTOROFOBJECTS_EXAMPLE_MODEL_DOUBLE_DEFINITION_INCLUDED */

