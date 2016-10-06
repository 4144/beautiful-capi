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

#ifndef EXAMPLE_PERSON_DECLARATION_INCLUDED
#define EXAMPLE_PERSON_DECLARATION_INCLUDED

#include "ExampleCapi.h"
#include "ExampleFwd.h"
#include "Example/PersonDecl.h"

#ifdef __cplusplus

namespace Example {

class Person
{
public:
    enum ESex
    {
        male,
        female
    };
    
    inline Person();
    inline void SetFirstName(const char* first_name);
    inline const char* GetFirstName() const;
    inline void SetSecondName(const char* second_name);
    inline const char* GetSecondName() const;
    inline void SetAge(unsigned int age);
    inline unsigned int GetAge() const;
    inline void SetSex(Example::Person::ESex sex);
    inline Example::Person::ESex GetSex() const;
    inline void Dump(const Example::PrinterPtr& printer) const;
    inline void Print(const Example::PrinterPtr& printer, const char* text) const;
    
    inline Person(const Person& other);
    #ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
    inline Person(Person&& other);
    #endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */
    enum ECreateFromRawPointer { force_creating_from_raw_pointer };
    inline Person(ECreateFromRawPointer, void *object_pointer, bool copy_object);
    inline ~Person();
    inline Person& operator=(const Person& other);
    #ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
    inline Person& operator=(Person&& other);
    #endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */
    static inline Person Null();
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

#endif /* EXAMPLE_PERSON_DECLARATION_INCLUDED */

