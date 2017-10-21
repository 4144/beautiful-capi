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

#ifndef STL_VECTOR_CHAR_DECLARATION_INCLUDED
#define STL_VECTOR_CHAR_DECLARATION_INCLUDED

#include "STLCapi.h"
#include "STLFwd.h"

#ifdef __cplusplus

namespace STL {

template<>
class Vector<char>
{
public:
    inline Vector();
    inline size_t GetSize() const;
    inline char GetElement(size_t index) const;
    inline void SetElement(size_t index, char value);
    inline void PushBack(char value);

    inline Vector(const Vector<char>& other);
    #ifdef STL_CPP_COMPILER_HAS_RVALUE_REFERENCES
    inline Vector(Vector<char>&& other);
    #endif /* STL_CPP_COMPILER_HAS_RVALUE_REFERENCES */
    enum ECreateFromRawPointer { force_creating_from_raw_pointer };
    inline Vector(ECreateFromRawPointer, void *object_pointer, bool copy_object);
    inline ~Vector();
    inline Vector<char>& operator=(const Vector<char>& other);
    #ifdef STL_CPP_COMPILER_HAS_RVALUE_REFERENCES
    inline Vector<char>& operator=(Vector<char>&& other);
    #endif /* STL_CPP_COMPILER_HAS_RVALUE_REFERENCES */
    static inline Vector<char> Null();
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

#endif /* STL_VECTOR_CHAR_DECLARATION_INCLUDED */
