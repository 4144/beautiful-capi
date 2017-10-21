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

#ifndef STL_COMMUNITY_DEFINITION_INCLUDED
#define STL_COMMUNITY_DEFINITION_INCLUDED

#include "STL/CommunityDecl.h"
#include "ImplementationCode/common/check_and_throw_exception.h"
#include "STL/VectorOfStructuresRawPtrSTLPerson.h"
#include "STL/String.h"
#include "STL/VectorOfStructuresSTLPerson.h"

#ifdef __cplusplus

inline STL::Community::Community()
{
    beautiful_capi_implementationcode_exception_info_t exception_info;
    STL::Community result(STL::Community::force_creating_from_raw_pointer, stl_community_default(&exception_info), false);
    beautiful_capi_ImplementationCode::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
    SetObject(result.Detach());
}

inline STL::VectorOfStructuresRawPtr<STL::Person> STL::Community::Members()
{
    beautiful_capi_implementationcode_exception_info_t exception_info;
    STL::VectorOfStructuresRawPtr<STL::Person> result(STL::VectorOfStructuresRawPtr<STL::Person>::force_creating_from_raw_pointer, stl_community_members(&exception_info, GetRawPointer()), false);
    beautiful_capi_ImplementationCode::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
    return result;
}

inline STL::String STL::Community::GetTitle() const
{
    beautiful_capi_implementationcode_exception_info_t exception_info;
    STL::String result(STL::String::force_creating_from_raw_pointer, stl_community_get_title_const(&exception_info, GetRawPointer()), false);
    beautiful_capi_ImplementationCode::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
    return result;
}

inline void STL::Community::SetTitle(const STL::String& title)
{
    beautiful_capi_implementationcode_exception_info_t exception_info;
    stl_community_set_title(&exception_info, GetRawPointer(), title.GetRawPointer());
    beautiful_capi_ImplementationCode::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
}

inline STL::VectorOfStructures<STL::Person> STL::Community::GetMembers() const
{
    beautiful_capi_implementationcode_exception_info_t exception_info;
    STL::VectorOfStructures<STL::Person> result(STL::VectorOfStructures<STL::Person>::force_creating_from_raw_pointer, stl_community_get_members_const(&exception_info, GetRawPointer()), false);
    beautiful_capi_ImplementationCode::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
    return result;
}

inline void STL::Community::SetMembers(const STL::VectorOfStructures<STL::Person>& members)
{
    beautiful_capi_implementationcode_exception_info_t exception_info;
    stl_community_set_members(&exception_info, GetRawPointer(), members.GetRawPointer());
    beautiful_capi_ImplementationCode::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
}

inline STL::Community::Community(const Community& other)
{
    if (other.GetRawPointer())
    {
        beautiful_capi_implementationcode_exception_info_t exception_info;
        void* result(stl_community_copy(&exception_info, other.GetRawPointer()));
        beautiful_capi_ImplementationCode::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
        SetObject(result);
    }
    else
    {
        SetObject(0);
    }
}

#ifdef STL_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline STL::Community::Community(Community&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* STL_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline STL::Community::Community(STL::Community::ECreateFromRawPointer, void *object_pointer, bool copy_object)
{
    if (object_pointer && copy_object)
    {
        beautiful_capi_implementationcode_exception_info_t exception_info;
        void* result(stl_community_copy(&exception_info, object_pointer));
        beautiful_capi_ImplementationCode::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
        SetObject(result);
    }
    else
    {
        SetObject(object_pointer);
    }
}

inline STL::Community::~Community()
{
    if (GetRawPointer())
    {
        stl_community_delete(GetRawPointer());
        SetObject(0);
    }
}

inline STL::Community& STL::Community::operator=(const STL::Community& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            stl_community_delete(GetRawPointer());
            SetObject(0);
        }
        if (other.GetRawPointer())
        {
            beautiful_capi_implementationcode_exception_info_t exception_info;
            void* result(stl_community_copy(&exception_info, other.mObject));
            beautiful_capi_ImplementationCode::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
            SetObject(result);
        }
        else
        {
            SetObject(0);
        }
    }
    return *this;
}

#ifdef STL_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline STL::Community& STL::Community::operator=(STL::Community&& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            stl_community_delete(GetRawPointer());
            SetObject(0);
        }
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* STL_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline STL::Community STL::Community::Null()
{
    return STL::Community(STL::Community::force_creating_from_raw_pointer, static_cast<void*>(0), false);
}

inline bool STL::Community::IsNull() const
{
    return !GetRawPointer();
}

inline bool STL::Community::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool STL::Community::operator!() const
{
    return !GetRawPointer();
}

inline void* STL::Community::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* STL::Community::GetRawPointer() const
{
    return STL::Community::mObject ? mObject: 0;
}

inline void STL::Community::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* STL_COMMUNITY_DEFINITION_INCLUDED */
