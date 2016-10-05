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

#ifndef EXAMPLE_VECTOROFOBJECTS_EXAMPLE_MODEL_FLOAT_DECLARATION_INCLUDED
#define EXAMPLE_VECTOROFOBJECTS_EXAMPLE_MODEL_FLOAT_DECLARATION_INCLUDED

#include "ExampleCapi.h"
#include "ExampleFwd.h"

#ifdef __cplusplus

namespace Example {

template<>
class VectorOfObjectsPtr<Example::ModelPtr<float> >
{
public:
    inline VectorOfObjectsPtr();
    inline int GetSize() const;
    inline void Clear();
    inline void PushBack(const Example::ModelPtr<float>& value);
    inline Example::ModelPtr<float> GetItem(int index) const;
    
    inline VectorOfObjectsPtr(const VectorOfObjectsPtr<Example::ModelPtr<float> >& other);
    enum ECreateFromRawPointer { force_creating_from_raw_pointer };
    inline VectorOfObjectsPtr(ECreateFromRawPointer, void *object_pointer, bool add_ref_object);
    inline ~VectorOfObjectsPtr();
    inline VectorOfObjectsPtr<Example::ModelPtr<float> >& operator=(const VectorOfObjectsPtr<Example::ModelPtr<float> >& other);
    static inline VectorOfObjectsPtr<Example::ModelPtr<float> > Null();
    inline bool IsNull() const;
    inline bool IsNotNull() const;
    inline bool operator!() const;
    inline void* Detach();
    inline void* GetRawPointer() const;
    inline VectorOfObjectsPtr<Example::ModelPtr<float> >* operator->();
    inline const VectorOfObjectsPtr<Example::ModelPtr<float> >* operator->() const;
protected:
    inline void SetObject(void* object_pointer);
    void* mObject;
};

template<typename TargetType>
inline TargetType down_cast(const Example::VectorOfObjectsPtr<Example::ModelPtr<float> >& source_object);

}

#endif /* __cplusplus */

#endif /* EXAMPLE_VECTOROFOBJECTS_EXAMPLE_MODEL_FLOAT_DECLARATION_INCLUDED */

