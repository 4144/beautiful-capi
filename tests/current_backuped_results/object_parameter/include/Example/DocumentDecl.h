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

#ifndef EXAMPLE_DOCUMENT_DECLARATION_INCLUDED
#define EXAMPLE_DOCUMENT_DECLARATION_INCLUDED

#include "Example/ExampleCapi.h"
#include "Example/ExampleFwd.h"

#ifdef __cplusplus

namespace Example {

class DocumentPtr
{
public:
    inline DocumentPtr();
    inline void Show() const;
    inline Example::PagePtr GetPage() const;
    inline void SetPage(const Example::PagePtr& value);
    
    inline DocumentPtr(const DocumentPtr& other);
    #ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
    inline DocumentPtr(DocumentPtr&& other);
    #endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */
    enum ECreateFromRawPointer { force_creating_from_raw_pointer };
    inline DocumentPtr(ECreateFromRawPointer, void *object_pointer, bool add_ref_object);
    inline ~DocumentPtr();
    inline DocumentPtr& operator=(const DocumentPtr& other);
    #ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
    inline DocumentPtr& operator=(DocumentPtr&& other);
    #endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */
    static inline DocumentPtr Null();
    inline bool IsNull() const;
    inline bool IsNotNull() const;
    inline bool operator!() const;
    inline void* Detach();
    inline void* GetRawPointer() const;
    inline DocumentPtr* operator->();
    inline const DocumentPtr* operator->() const;
protected:
    inline void SetObject(void* object_pointer);
    void* mObject;
};

}

#endif /* __cplusplus */

#endif /* EXAMPLE_DOCUMENT_DECLARATION_INCLUDED */

