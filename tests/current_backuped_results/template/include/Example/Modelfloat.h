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

#ifndef EXAMPLE_MODEL_FLOAT_DEFINITION_INCLUDED
#define EXAMPLE_MODEL_FLOAT_DEFINITION_INCLUDED

#include "Example/ModelfloatDecl.h"
#include "Example/Positionfloat.h"

#ifdef __cplusplus

inline Example::ModelPtr<float>::ModelPtr()
{
    SetObject(example_model_float_default());
}

inline const char* Example::ModelPtr<float>::GetName() const
{
    return example_model_float_get_name(this->get_raw_pointer());
}

inline void Example::ModelPtr<float>::SetName(const char* name)
{
    example_model_float_set_name(this->get_raw_pointer(), name);
}

inline Example::Position<float> Example::ModelPtr<float>::GetPosition() const
{
    return Example::Position<float>(Example::Position<float>::force_creating_from_raw_pointer, example_model_float_get_position(this->get_raw_pointer()), false);
}

inline void Example::ModelPtr<float>::SetPosition(const Example::Position<float>& position)
{
    example_model_float_set_position(this->get_raw_pointer(), position.get_raw_pointer());
}

inline Example::ModelPtr<float>::ModelPtr(const ModelPtr<float>& other)
{
    SetObject(other.mObject);
    if (other.mObject)
    {
        example_model_float_add_ref(other.mObject);
    }
}

inline Example::ModelPtr<float>::ModelPtr(Example::ModelPtr<float>::ECreateFromRawPointer, void *object_pointer, bool add_ref_object)
{
    SetObject(object_pointer);
    if (add_ref_object && object_pointer)
    {
        example_model_float_add_ref(object_pointer);
    }
}

inline Example::ModelPtr<float>::~ModelPtr()
{
    if (mObject)
    {
        example_model_float_release(mObject);
        SetObject(0);
    }
}

inline Example::ModelPtr<float>& Example::ModelPtr<float>::operator=(const Example::ModelPtr<float>& other)
{
    if (mObject != other.mObject)
    {
        if (mObject)
        {
            example_model_float_release(mObject);
            SetObject(0);
        }
        SetObject(other.mObject);
        if (other.mObject)
        {
            example_model_float_add_ref(other.mObject);
        }
    }
    return *this;
}

inline bool Example::ModelPtr<float>::IsNull() const
{
    return !mObject;
}

inline bool Example::ModelPtr<float>::IsNotNull() const
{
    return mObject != 0;
}

inline bool Example::ModelPtr<float>::operator!() const
{
    return !mObject;
}

inline void* Example::ModelPtr<float>::Detach()
{
    void* result = mObject;
    SetObject(0);
    return result;
}

inline void* Example::ModelPtr<float>::get_raw_pointer() const
{
    return mObject;
}

inline Example::ModelPtr<float>* Example::ModelPtr<float>::operator->()
{
    return this;
}

inline const Example::ModelPtr<float>* Example::ModelPtr<float>::operator->() const
{
    return this;
}

inline void Example::ModelPtr<float>::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* EXAMPLE_MODEL_FLOAT_DEFINITION_INCLUDED */

