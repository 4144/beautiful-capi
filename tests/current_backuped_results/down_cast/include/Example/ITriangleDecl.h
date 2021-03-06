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

#ifndef EXAMPLE_ITRIANGLE_DECLARATION_INCLUDED
#define EXAMPLE_ITRIANGLE_DECLARATION_INCLUDED

#include "ExampleCapi.h"
#include "ExampleFwd.h"
#include "Example/IPolygonDecl.h"

#ifdef __cplusplus

namespace Example {

class ITrianglePtr : public Example::IPolygonPtr
{
public:
    inline void SetPoints(double x1, double y1, double x2, double y2, double x3, double y3);

    inline ITrianglePtr(const ITrianglePtr& other);
    #ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
    inline ITrianglePtr(ITrianglePtr&& other);
    #endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */
    enum ECreateFromRawPointer { force_creating_from_raw_pointer };
    inline ITrianglePtr(ECreateFromRawPointer, void *object_pointer, bool add_ref_object);
    inline ~ITrianglePtr();
    inline ITrianglePtr& operator=(const ITrianglePtr& other);
    #ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
    inline ITrianglePtr& operator=(ITrianglePtr&& other);
    #endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */
    static inline ITrianglePtr Null();
    inline bool IsNull() const;
    inline bool IsNotNull() const;
    inline bool operator!() const;
    inline void* Detach();
    inline void* GetRawPointer() const;
    inline ITrianglePtr* operator->();
    inline const ITrianglePtr* operator->() const;
protected:
    inline void SetObject(void* object_pointer);
    void* mObject;
};

}

namespace Example {

template<>
inline Example::ITrianglePtr down_cast<Example::ITrianglePtr >(const Example::IShapePtr& source_object);
template<>
inline Example::ITrianglePtr down_cast<Example::ITrianglePtr >(const Example::IPolygonPtr& source_object);

}

#endif /* __cplusplus */

#endif /* EXAMPLE_ITRIANGLE_DECLARATION_INCLUDED */

