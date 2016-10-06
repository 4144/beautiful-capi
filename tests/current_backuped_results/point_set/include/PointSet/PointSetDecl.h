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

#ifndef POINTSET_POINTSET_DECLARATION_INCLUDED
#define POINTSET_POINTSET_DECLARATION_INCLUDED

#include "PointSetCapi.h"
#include "PointSetFwd.h"

#ifdef __cplusplus

namespace PointSet {

class PointSetPtr
{
public:
    inline PointSetPtr();
    inline const char* GetName() const;
    inline void SetName(const char* name);
    inline PointSet::PointsPtr GetPoints() const;
    inline void SetPoints(const PointSet::PointsPtr& value);
    
    inline PointSetPtr(const PointSetPtr& other);
    #ifdef POINTSET_CPP_COMPILER_HAS_RVALUE_REFERENCES
    inline PointSetPtr(PointSetPtr&& other);
    #endif /* POINTSET_CPP_COMPILER_HAS_RVALUE_REFERENCES */
    enum ECreateFromRawPointer { force_creating_from_raw_pointer };
    inline PointSetPtr(ECreateFromRawPointer, void *object_pointer, bool add_ref_object);
    inline ~PointSetPtr();
    inline PointSetPtr& operator=(const PointSetPtr& other);
    #ifdef POINTSET_CPP_COMPILER_HAS_RVALUE_REFERENCES
    inline PointSetPtr& operator=(PointSetPtr&& other);
    #endif /* POINTSET_CPP_COMPILER_HAS_RVALUE_REFERENCES */
    static inline PointSetPtr Null();
    inline bool IsNull() const;
    inline bool IsNotNull() const;
    inline bool operator!() const;
    inline void* Detach();
    inline void* GetRawPointer() const;
    inline PointSetPtr* operator->();
    inline const PointSetPtr* operator->() const;
protected:
    inline void SetObject(void* object_pointer);
    void* mObject;
};

}

#endif /* __cplusplus */

#endif /* POINTSET_POINTSET_DECLARATION_INCLUDED */

