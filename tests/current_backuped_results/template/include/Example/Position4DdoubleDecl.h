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

#ifndef EXAMPLE_POSITION4D_DOUBLE_DECLARATION_INCLUDED
#define EXAMPLE_POSITION4D_DOUBLE_DECLARATION_INCLUDED

#include "ExampleCapi.h"
#include "ExampleFwd.h"
#include "Example/PositiondoubleDecl.h"

#ifdef __cplusplus

namespace Example {

template<>
class Position4D<double>: public Example::Position<double>
{
public:
    inline Position4D();
    inline double GetW() const;
    inline void SetW(double x);
    
    inline Position4D(const Position4D<double>& other);
    #ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
    inline Position4D(Position4D<double>&& other);
    #endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */
    enum ECreateFromRawPointer { force_creating_from_raw_pointer };
    inline Position4D(ECreateFromRawPointer, void *object_pointer, bool copy_object);
    inline ~Position4D();
    inline Position4D<double>& operator=(const Position4D<double>& other);
    #ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
    inline Position4D<double>& operator=(Position4D<double>&& other);
    #endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */
    static inline Position4D<double> Null();
    inline bool IsNull() const;
    inline bool IsNotNull() const;
    inline bool operator!() const;
    inline void* Detach();
    inline void* GetRawPointer() const;
protected:
    inline void SetObject(void* object_pointer);
    void* mObject;
};

}

#endif /* __cplusplus */

#endif /* EXAMPLE_POSITION4D_DOUBLE_DECLARATION_INCLUDED */

