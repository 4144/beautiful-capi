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

#include <stdexcept>
#include <cassert>
#include "PrinterImpl.h"

#ifdef _WIN32
    #ifdef __GNUC__
        #define OVERLOADSUFFIX_API extern "C" __attribute__ ((dllexport))
        #define OVERLOADSUFFIX_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define OVERLOADSUFFIX_API extern "C" __declspec(dllexport)
        #define OVERLOADSUFFIX_API_CONVENTION __cdecl
    #endif
#elif __APPLE__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define OVERLOADSUFFIX_API extern "C" __attribute__ ((visibility ("default")))
    #else
        #define OVERLOADSUFFIX_API extern "C"
    #endif
    #ifdef __i386__
        #define OVERLOADSUFFIX_API_CONVENTION __attribute__ ((cdecl))
    #else /* __i386__ */
        #define OVERLOADSUFFIX_API_CONVENTION
    #endif /* __i386__ */
#elif __unix__ || __linux__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define OVERLOADSUFFIX_API extern "C" __attribute__ ((visibility ("default")))
    #else
        #define OVERLOADSUFFIX_API extern "C"
    #endif
    #ifdef __i386__
        #define OVERLOADSUFFIX_API_CONVENTION __attribute__ ((cdecl))
    #else /* __i386__ */
        #define OVERLOADSUFFIX_API_CONVENTION
    #endif /* __i386__ */
#else
    #error "Unknown platform"
#endif

int AutoGen_Internal_OverloadSuffix_OverloadSuffixGetMajorVersionImpl()
{
    return 1;
}

int AutoGen_Internal_OverloadSuffix_OverloadSuffixGetMinorVersionImpl()
{
    return 0;
}

int AutoGen_Internal_OverloadSuffix_OverloadSuffixGetPatchVersionImpl()
{
    return 0;
}

OVERLOADSUFFIX_API void OVERLOADSUFFIX_API_CONVENTION overload_suffix_show()
{
    OverloadSuffix::Show();
}

OVERLOADSUFFIX_API void OVERLOADSUFFIX_API_CONVENTION overload_suffix_show_int(int a)
{
    OverloadSuffix::Show(a);
}

OVERLOADSUFFIX_API void OVERLOADSUFFIX_API_CONVENTION overload_suffix_show_1(double a)
{
    OverloadSuffix::Show(a);
}

OVERLOADSUFFIX_API int OVERLOADSUFFIX_API_CONVENTION overload_suffix_get_major_version()
{
    return AutoGen_Internal_OverloadSuffix_OverloadSuffixGetMajorVersionImpl();
}

OVERLOADSUFFIX_API int OVERLOADSUFFIX_API_CONVENTION overload_suffix_get_minor_version()
{
    return AutoGen_Internal_OverloadSuffix_OverloadSuffixGetMinorVersionImpl();
}

OVERLOADSUFFIX_API int OVERLOADSUFFIX_API_CONVENTION overload_suffix_get_patch_version()
{
    return AutoGen_Internal_OverloadSuffix_OverloadSuffixGetPatchVersionImpl();
}

OVERLOADSUFFIX_API void* OVERLOADSUFFIX_API_CONVENTION overload_suffix_printer_default()
{
    return new OverloadSuffix::PrinterImpl();
}

OVERLOADSUFFIX_API void OVERLOADSUFFIX_API_CONVENTION overload_suffix_printer_show(void* object_pointer)
{
    OverloadSuffix::PrinterImpl* self = static_cast<OverloadSuffix::PrinterImpl*>(object_pointer);
    self->Show();
}

OVERLOADSUFFIX_API void OVERLOADSUFFIX_API_CONVENTION overload_suffix_printer_show_const(void* object_pointer)
{
    const OverloadSuffix::PrinterImpl* self = static_cast<OverloadSuffix::PrinterImpl*>(object_pointer);
    self->Show();
}

OVERLOADSUFFIX_API void OVERLOADSUFFIX_API_CONVENTION overload_suffix_printer_show_int(void* object_pointer, int a)
{
    OverloadSuffix::PrinterImpl* self = static_cast<OverloadSuffix::PrinterImpl*>(object_pointer);
    self->Show(a);
}

OVERLOADSUFFIX_API void OVERLOADSUFFIX_API_CONVENTION overload_suffix_printer_show_1(void* object_pointer, double a)
{
    OverloadSuffix::PrinterImpl* self = static_cast<OverloadSuffix::PrinterImpl*>(object_pointer);
    self->Show(a);
}

OVERLOADSUFFIX_API void* OVERLOADSUFFIX_API_CONVENTION overload_suffix_printer_copy(void* object_pointer)
{
    return new OverloadSuffix::PrinterImpl(*static_cast<OverloadSuffix::PrinterImpl*>(object_pointer));
}

OVERLOADSUFFIX_API void OVERLOADSUFFIX_API_CONVENTION overload_suffix_printer_delete(void* object_pointer)
{
    delete static_cast<OverloadSuffix::PrinterImpl*>(object_pointer);
}
