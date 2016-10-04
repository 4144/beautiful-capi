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

#ifndef EXAMPLE_PRINTERCALLBACK_DEFINITION_INCLUDED
#define EXAMPLE_PRINTERCALLBACK_DEFINITION_INCLUDED

#include "Example/PrinterCallbackDecl.h"
#include "Example/Printer.h"
#include "Callback/common/check_and_throw_exception.h"

#ifdef __cplusplus

inline Example::PrinterCallbackPtr::PrinterCallbackPtr() : Example::PrinterPtr(Example::PrinterPtr::force_creating_from_raw_pointer, 0, false)
{
    beautiful_capi_callback_exception_info_t exception_info;
    void* result(example_printer_callback_default(&exception_info));
    beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
    SetObject(result);
}

inline void Example::PrinterCallbackPtr::SetCFunctionForCopy(example_printer_copy_callback_type c_function_pointer)
{
    example_printer_callback_set_c_function_for_copy(this->get_raw_pointer(), c_function_pointer);
}

inline void Example::PrinterCallbackPtr::SetCFunctionForDelete(example_printer_delete_callback_type c_function_pointer)
{
    example_printer_callback_set_c_function_for_delete(this->get_raw_pointer(), c_function_pointer);
}

inline void Example::PrinterCallbackPtr::SetObjectPointer(void* custom_object)
{
    example_printer_callback_set_object_pointer(this->get_raw_pointer(), custom_object);
}

inline void* Example::PrinterCallbackPtr::GetObjectPointer() const
{
    return example_printer_callback_get_object_pointer(this->get_raw_pointer());
}

inline void Example::PrinterCallbackPtr::SetCFunctionForPrint(example_printer_print_callback_type c_function_pointer)
{
    example_printer_callback_set_c_function_for_print(this->get_raw_pointer(), c_function_pointer);
}

inline void Example::PrinterCallbackPtr::SetCFunctionForSetPrintingQuality(example_printer_set_printing_quality_callback_type c_function_pointer)
{
    example_printer_callback_set_c_function_for_set_printing_quality(this->get_raw_pointer(), c_function_pointer);
}

inline void Example::PrinterCallbackPtr::SetCFunctionForGetPrintingQuality(example_printer_get_printing_quality_callback_type c_function_pointer)
{
    example_printer_callback_set_c_function_for_get_printing_quality(this->get_raw_pointer(), c_function_pointer);
}

inline void Example::PrinterCallbackPtr::SetCFunctionForGetDeviceType(example_printer_get_device_type_callback_type c_function_pointer)
{
    example_printer_callback_set_c_function_for_get_device_type(this->get_raw_pointer(), c_function_pointer);
}

inline Example::PrinterCallbackPtr::PrinterCallbackPtr(const PrinterCallbackPtr& other) : Example::PrinterPtr(Example::PrinterPtr::force_creating_from_raw_pointer, 0, false)
{
    SetObject(other.mObject);
    if (other.mObject)
    {
        example_printer_callback_add_ref(other.mObject);
    }
}

inline Example::PrinterCallbackPtr::PrinterCallbackPtr(Example::PrinterCallbackPtr::ECreateFromRawPointer, void *object_pointer, bool add_ref_object) : Example::PrinterPtr(Example::PrinterPtr::force_creating_from_raw_pointer, 0, false)
{
    SetObject(object_pointer);
    if (add_ref_object && object_pointer)
    {
        example_printer_callback_add_ref(object_pointer);
    }
}

inline Example::PrinterCallbackPtr::~PrinterCallbackPtr()
{
    if (mObject)
    {
        example_printer_callback_release(mObject);
        SetObject(0);
    }
}

inline Example::PrinterCallbackPtr& Example::PrinterCallbackPtr::operator=(const Example::PrinterCallbackPtr& other)
{
    if (mObject != other.mObject)
    {
        if (mObject)
        {
            example_printer_callback_release(mObject);
            SetObject(0);
        }
        SetObject(other.mObject);
        if (other.mObject)
        {
            example_printer_callback_add_ref(other.mObject);
        }
    }
    return *this;
}

inline bool Example::PrinterCallbackPtr::IsNull() const
{
    return !mObject;
}

inline bool Example::PrinterCallbackPtr::IsNotNull() const
{
    return mObject != 0;
}

inline bool Example::PrinterCallbackPtr::operator!() const
{
    return !mObject;
}

inline void* Example::PrinterCallbackPtr::Detach()
{
    void* result = mObject;
    SetObject(0);
    return result;
}

inline void* Example::PrinterCallbackPtr::get_raw_pointer() const
{
    return mObject;
}

inline Example::PrinterCallbackPtr* Example::PrinterCallbackPtr::operator->()
{
    return this;
}

inline const Example::PrinterCallbackPtr* Example::PrinterCallbackPtr::operator->() const
{
    return this;
}

inline void Example::PrinterCallbackPtr::SetObject(void* object_pointer)
{
    mObject = object_pointer;
    if (mObject)
    {
        Example::PrinterPtr::SetObject(example_printer_callback_cast_to_base(mObject));
    }
    else
    {
        Example::PrinterPtr::SetObject(0);
    }
}

namespace Example {

template<>
inline Example::PrinterCallbackPtr down_cast<Example::PrinterCallbackPtr>(const Example::PrinterPtr& source_object)
{
    return Example::PrinterCallbackPtr(Example::PrinterCallbackPtr::force_creating_from_raw_pointer, example_printer_cast_to_example_printer_callback(source_object.get_raw_pointer()), true);
}

}

namespace Example {

template<typename ImplementationClass>
void* EXAMPLE_API_CONVENTION printer_copy_callback(beautiful_capi_callback_exception_info_t* exception_info, void* object_pointer);

template<typename ImplementationClass>
void EXAMPLE_API_CONVENTION printer_delete_callback(void* object_pointer);

template<typename ImplementationClass>
void EXAMPLE_API_CONVENTION printer_print_callback(beautiful_capi_callback_exception_info_t* exception_info, void* object_pointer, const char* text);

template<typename ImplementationClass>
void EXAMPLE_API_CONVENTION printer_set_printing_quality_callback(beautiful_capi_callback_exception_info_t* exception_info, void* object_pointer, int quality);

template<typename ImplementationClass>
int EXAMPLE_API_CONVENTION printer_get_printing_quality_callback(beautiful_capi_callback_exception_info_t* exception_info, void* object_pointer);

template<typename ImplementationClass>
int EXAMPLE_API_CONVENTION printer_get_device_type_callback(beautiful_capi_callback_exception_info_t* exception_info, void* object_pointer);

template<typename ImplementationClass>
Example::PrinterCallbackPtr create_callback_for_printer(ImplementationClass* implementation_class)
{
    Example::PrinterCallbackPtr result;
    result.SetCFunctionForCopy(printer_copy_callback<ImplementationClass>);
    result.SetCFunctionForDelete(printer_delete_callback<ImplementationClass>);
    result.SetCFunctionForPrint(printer_print_callback<ImplementationClass>);
    result.SetCFunctionForSetPrintingQuality(printer_set_printing_quality_callback<ImplementationClass>);
    result.SetCFunctionForGetPrintingQuality(printer_get_printing_quality_callback<ImplementationClass>);
    result.SetCFunctionForGetDeviceType(printer_get_device_type_callback<ImplementationClass>);
    result.SetObjectPointer(implementation_class);
    return result;
}

template<typename ImplementationClass>
inline Example::PrinterCallbackPtr create_callback_for_printer(ImplementationClass& implementation_class)
{
    return create_callback_for_printer(&implementation_class);
}

template<typename ImplementationClass>
void* EXAMPLE_API_CONVENTION printer_copy_callback(beautiful_capi_callback_exception_info_t* exception_info, void* object_pointer)
{
    try
    {
        if (exception_info)
        {
            exception_info->code = 0;
            exception_info->object_pointer = 0;
        }
        ImplementationClass* self = static_cast<ImplementationClass*>(object_pointer);
        return new ImplementationClass(*self);
    }
    catch (Exception::NullArgument& exception_object)
    {
        if (exception_info)
        {
            exception_info->code = 3;
            exception_info->object_pointer = exception_object.Detach();
        }
    }
    catch (Exception::BadArgument& exception_object)
    {
        if (exception_info)
        {
            exception_info->code = 2;
            exception_info->object_pointer = exception_object.Detach();
        }
    }
    catch (Exception::DivisionByZero& exception_object)
    {
        if (exception_info)
        {
            exception_info->code = 4;
            exception_info->object_pointer = exception_object.Detach();
        }
    }
    catch (Exception::Generic& exception_object)
    {
        if (exception_info)
        {
            exception_info->code = 1;
            exception_info->object_pointer = exception_object.Detach();
        }
    }
    catch (...)
    {
        if (exception_info)
        {
            exception_info->code = -1;
        }
    }
    return static_cast<void*>(0);
}

template<typename ImplementationClass>
void EXAMPLE_API_CONVENTION printer_delete_callback(void* object_pointer)
{
    ImplementationClass* self = static_cast<ImplementationClass*>(object_pointer);
    delete self;
}

template<typename ImplementationClass>
void EXAMPLE_API_CONVENTION printer_print_callback(beautiful_capi_callback_exception_info_t* exception_info, void* object_pointer, const char* text)
{
    const ImplementationClass* self = static_cast<ImplementationClass*>(object_pointer);
    try
    {
        if (exception_info)
        {
            exception_info->code = 0;
            exception_info->object_pointer = 0;
        }
        self->Print(text);
    }
    catch (Exception::NullArgument& exception_object)
    {
        if (exception_info)
        {
            exception_info->code = 3;
            exception_info->object_pointer = exception_object.Detach();
        }
    }
    catch (Exception::BadArgument& exception_object)
    {
        if (exception_info)
        {
            exception_info->code = 2;
            exception_info->object_pointer = exception_object.Detach();
        }
    }
    catch (Exception::DivisionByZero& exception_object)
    {
        if (exception_info)
        {
            exception_info->code = 4;
            exception_info->object_pointer = exception_object.Detach();
        }
    }
    catch (Exception::Generic& exception_object)
    {
        if (exception_info)
        {
            exception_info->code = 1;
            exception_info->object_pointer = exception_object.Detach();
        }
    }
    catch (...)
    {
        if (exception_info)
        {
            exception_info->code = -1;
        }
    }
}

template<typename ImplementationClass>
void EXAMPLE_API_CONVENTION printer_set_printing_quality_callback(beautiful_capi_callback_exception_info_t* exception_info, void* object_pointer, int quality)
{
    ImplementationClass* self = static_cast<ImplementationClass*>(object_pointer);
    try
    {
        if (exception_info)
        {
            exception_info->code = 0;
            exception_info->object_pointer = 0;
        }
        self->SetPrintingQuality(Example::PrinterPtr::EQuality(static_cast<Example::PrinterPtr::EQuality>(quality)));
    }
    catch (Exception::NullArgument& exception_object)
    {
        if (exception_info)
        {
            exception_info->code = 3;
            exception_info->object_pointer = exception_object.Detach();
        }
    }
    catch (Exception::BadArgument& exception_object)
    {
        if (exception_info)
        {
            exception_info->code = 2;
            exception_info->object_pointer = exception_object.Detach();
        }
    }
    catch (Exception::DivisionByZero& exception_object)
    {
        if (exception_info)
        {
            exception_info->code = 4;
            exception_info->object_pointer = exception_object.Detach();
        }
    }
    catch (Exception::Generic& exception_object)
    {
        if (exception_info)
        {
            exception_info->code = 1;
            exception_info->object_pointer = exception_object.Detach();
        }
    }
    catch (...)
    {
        if (exception_info)
        {
            exception_info->code = -1;
        }
    }
}

template<typename ImplementationClass>
int EXAMPLE_API_CONVENTION printer_get_printing_quality_callback(beautiful_capi_callback_exception_info_t* exception_info, void* object_pointer)
{
    const ImplementationClass* self = static_cast<ImplementationClass*>(object_pointer);
    try
    {
        if (exception_info)
        {
            exception_info->code = 0;
            exception_info->object_pointer = 0;
        }
        return static_cast<int>(self->GetPrintingQuality());
    }
    catch (Exception::NullArgument& exception_object)
    {
        if (exception_info)
        {
            exception_info->code = 3;
            exception_info->object_pointer = exception_object.Detach();
        }
    }
    catch (Exception::BadArgument& exception_object)
    {
        if (exception_info)
        {
            exception_info->code = 2;
            exception_info->object_pointer = exception_object.Detach();
        }
    }
    catch (Exception::DivisionByZero& exception_object)
    {
        if (exception_info)
        {
            exception_info->code = 4;
            exception_info->object_pointer = exception_object.Detach();
        }
    }
    catch (Exception::Generic& exception_object)
    {
        if (exception_info)
        {
            exception_info->code = 1;
            exception_info->object_pointer = exception_object.Detach();
        }
    }
    catch (...)
    {
        if (exception_info)
        {
            exception_info->code = -1;
        }
    }
    return static_cast<int>(0);
}

template<typename ImplementationClass>
int EXAMPLE_API_CONVENTION printer_get_device_type_callback(beautiful_capi_callback_exception_info_t* exception_info, void* object_pointer)
{
    const ImplementationClass* self = static_cast<ImplementationClass*>(object_pointer);
    try
    {
        if (exception_info)
        {
            exception_info->code = 0;
            exception_info->object_pointer = 0;
        }
        return static_cast<int>(self->GetDeviceType());
    }
    catch (Exception::NullArgument& exception_object)
    {
        if (exception_info)
        {
            exception_info->code = 3;
            exception_info->object_pointer = exception_object.Detach();
        }
    }
    catch (Exception::BadArgument& exception_object)
    {
        if (exception_info)
        {
            exception_info->code = 2;
            exception_info->object_pointer = exception_object.Detach();
        }
    }
    catch (Exception::DivisionByZero& exception_object)
    {
        if (exception_info)
        {
            exception_info->code = 4;
            exception_info->object_pointer = exception_object.Detach();
        }
    }
    catch (Exception::Generic& exception_object)
    {
        if (exception_info)
        {
            exception_info->code = 1;
            exception_info->object_pointer = exception_object.Detach();
        }
    }
    catch (...)
    {
        if (exception_info)
        {
            exception_info->code = -1;
        }
    }
    return static_cast<int>(0);
}

}

#endif /* __cplusplus */

#endif /* EXAMPLE_PRINTERCALLBACK_DEFINITION_INCLUDED */

