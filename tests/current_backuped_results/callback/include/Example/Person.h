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

#ifndef EXAMPLE_PERSON_DEFINITION_INCLUDED
#define EXAMPLE_PERSON_DEFINITION_INCLUDED

#include "Example/PersonDecl.h"
#include "Callback/common/check_and_throw_exception.h"
#include "Example/Printer.h"

#ifdef __cplusplus

inline Example::Person::Person()
{
    beautiful_capi_callback_exception_info_t exception_info;
    Example::Person result(Example::Person::force_creating_from_raw_pointer, example_person_default(&exception_info), false);
    beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
    SetObject(result.Detach());
}

inline void Example::Person::SetFirstName(const char* first_name)
{
    beautiful_capi_callback_exception_info_t exception_info;
    example_person_set_first_name(&exception_info, GetRawPointer(), first_name);
    beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
}

inline const char* Example::Person::GetFirstName() const
{
    beautiful_capi_callback_exception_info_t exception_info;
    const char* result(example_person_get_first_name_const(&exception_info, GetRawPointer()));
    beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
    return result;
}

inline void Example::Person::SetSecondName(const char* second_name)
{
    beautiful_capi_callback_exception_info_t exception_info;
    example_person_set_second_name(&exception_info, GetRawPointer(), second_name);
    beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
}

inline const char* Example::Person::GetSecondName() const
{
    beautiful_capi_callback_exception_info_t exception_info;
    const char* result(example_person_get_second_name_const(&exception_info, GetRawPointer()));
    beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
    return result;
}

inline void Example::Person::SetAge(unsigned int age)
{
    beautiful_capi_callback_exception_info_t exception_info;
    example_person_set_age(&exception_info, GetRawPointer(), age);
    beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
}

inline unsigned int Example::Person::GetAge() const
{
    beautiful_capi_callback_exception_info_t exception_info;
    unsigned int result(example_person_get_age_const(&exception_info, GetRawPointer()));
    beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
    return result;
}

inline void Example::Person::SetSex(Example::Person::ESex sex)
{
    beautiful_capi_callback_exception_info_t exception_info;
    example_person_set_sex(&exception_info, GetRawPointer(), static_cast<char>(sex));
    beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
}

inline Example::Person::ESex Example::Person::GetSex() const
{
    beautiful_capi_callback_exception_info_t exception_info;
    Example::Person::ESex result(static_cast<Example::Person::ESex>(example_person_get_sex_const(&exception_info, GetRawPointer())));
    beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
    return result;
}

inline void Example::Person::Dump(const Example::PrinterPtr& printer) const
{
    beautiful_capi_callback_exception_info_t exception_info;
    example_person_dump_const(&exception_info, GetRawPointer(), printer.GetRawPointer());
    beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
}

inline void Example::Person::Print(const Example::PrinterPtr& printer, const char* text) const
{
    beautiful_capi_callback_exception_info_t exception_info;
    example_person_print_const(&exception_info, GetRawPointer(), printer.GetRawPointer(), text);
    beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
}

inline Example::Person::Person(const Person& other)
{
    if (other.GetRawPointer())
    {
        beautiful_capi_callback_exception_info_t exception_info;
        void* result(example_person_copy(&exception_info, other.GetRawPointer()));
        beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
        SetObject(result);
    }
    else
    {
        SetObject(0);
    }
}

#ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Example::Person::Person(Person&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Example::Person::Person(Example::Person::ECreateFromRawPointer, void *object_pointer, bool copy_object)
{
    if (object_pointer && copy_object)
    {
        beautiful_capi_callback_exception_info_t exception_info;
        void* result(example_person_copy(&exception_info, object_pointer));
        beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
        SetObject(result);
    }
    else
    {
        SetObject(object_pointer);
    }
}

inline Example::Person::~Person()
{
    if (GetRawPointer())
    {
        example_person_delete(GetRawPointer());
        SetObject(0);
    }
}

inline Example::Person& Example::Person::operator=(const Example::Person& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            example_person_delete(GetRawPointer());
            SetObject(0);
        }
        if (other.GetRawPointer())
        {
            beautiful_capi_callback_exception_info_t exception_info;
            void* result(example_person_copy(&exception_info, other.mObject));
            beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
            SetObject(result);
        }
        else
        {
            SetObject(0);
        }
    }
    return *this;
}

#ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Example::Person& Example::Person::operator=(Example::Person&& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            example_person_delete(GetRawPointer());
            SetObject(0);
        }
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Example::Person Example::Person::Null()
{
    return Example::Person(Example::Person::force_creating_from_raw_pointer, static_cast<void*>(0), false);
}

inline bool Example::Person::IsNull() const
{
    return !GetRawPointer();
}

inline bool Example::Person::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool Example::Person::operator!() const
{
    return !GetRawPointer();
}

inline void* Example::Person::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* Example::Person::GetRawPointer() const
{
    return Example::Person::mObject ? mObject: 0;
}

inline void Example::Person::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* EXAMPLE_PERSON_DEFINITION_INCLUDED */

