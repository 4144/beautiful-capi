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

#ifndef MIXEDSEMANTIC_NAME_DEFINITION_INCLUDED
#define MIXEDSEMANTIC_NAME_DEFINITION_INCLUDED

#include "MixedSemantic/NameDecl.h"

#ifdef __cplusplus

inline MixedSemantic::Name::Name(const char* FirstName, const char* FatherName, const char* LastName)
{
    SetObject(MixedSemantic::Name(MixedSemantic::Name::force_creating_from_raw_pointer, mixed_semantic_name_full_name(FirstName, FatherName, LastName), false).Detach());
}

inline const char* MixedSemantic::Name::GetFirstName() const
{
    return mixed_semantic_name_get_first_name_const(GetRawPointer());
}

inline void MixedSemantic::Name::SetFirstName(const char* first_name)
{
    mixed_semantic_name_set_first_name(GetRawPointer(), first_name);
}

inline const char* MixedSemantic::Name::GetLastName() const
{
    return mixed_semantic_name_get_last_name_const(GetRawPointer());
}

inline void MixedSemantic::Name::SetLastName(const char* last_name)
{
    mixed_semantic_name_set_last_name(GetRawPointer(), last_name);
}

inline MixedSemantic::Name::Name(const Name& other)
{
    if (other.GetRawPointer())
    {
        SetObject(mixed_semantic_name_copy(other.GetRawPointer()));
    }
    else
    {
        SetObject(0);
    }
}

#ifdef MIXEDSEMANTIC_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline MixedSemantic::Name::Name(Name&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* MIXEDSEMANTIC_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline MixedSemantic::Name::Name(MixedSemantic::Name::ECreateFromRawPointer, void *object_pointer, bool copy_object)
{
    if (object_pointer && copy_object)
    {
        SetObject(mixed_semantic_name_copy(object_pointer));
    }
    else
    {
        SetObject(object_pointer);
    }
}

inline MixedSemantic::Name::~Name()
{
    if (GetRawPointer())
    {
        mixed_semantic_name_delete(GetRawPointer());
        SetObject(0);
    }
}

inline MixedSemantic::Name& MixedSemantic::Name::operator=(const MixedSemantic::Name& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            mixed_semantic_name_delete(GetRawPointer());
            SetObject(0);
        }
        if (other.GetRawPointer())
        {
            SetObject(mixed_semantic_name_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    return *this;
}

#ifdef MIXEDSEMANTIC_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline MixedSemantic::Name& MixedSemantic::Name::operator=(MixedSemantic::Name&& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            mixed_semantic_name_delete(GetRawPointer());
            SetObject(0);
        }
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* MIXEDSEMANTIC_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline MixedSemantic::Name MixedSemantic::Name::Null()
{
    return MixedSemantic::Name(MixedSemantic::Name::force_creating_from_raw_pointer, static_cast<void*>(0), false);
}

inline bool MixedSemantic::Name::IsNull() const
{
    return !GetRawPointer();
}

inline bool MixedSemantic::Name::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool MixedSemantic::Name::operator!() const
{
    return !GetRawPointer();
}

inline void* MixedSemantic::Name::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* MixedSemantic::Name::GetRawPointer() const
{
    return MixedSemantic::Name::mObject ? mObject: 0;
}

inline void MixedSemantic::Name::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* MIXEDSEMANTIC_NAME_DEFINITION_INCLUDED */

