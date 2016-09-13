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
        #define EXAMPLE_API extern "C" __attribute__ ((dllexport))
        #define EXAMPLE_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define EXAMPLE_API extern "C" __declspec(dllexport)
        #define EXAMPLE_API_CONVENTION __cdecl
    #endif
#elif __APPLE__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define EXAMPLE_API extern "C" __attribute__ ((visibility ("default")))
    #else
        #define EXAMPLE_API extern "C"
    #endif
    #if defined __i386__
        #define EXAMPLE_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define EXAMPLE_API_CONVENTION
    #endif
#elif __unix__ || __linux__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define EXAMPLE_API extern "C" __attribute__ ((visibility ("default")))
    #else
        #define EXAMPLE_API extern "C"
    #endif
    #if defined __i386__
        #define EXAMPLE_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define EXAMPLE_API_CONVENTION
    #endif
#else
    #error "Unknown platform"
#endif

EXAMPLE_API void* EXAMPLE_API_CONVENTION example_printersharedptr_copy(void* object_pointer)
{
    return new Example::PrinterSharedPtr(*static_cast<Example::PrinterSharedPtr*>(object_pointer));
}

EXAMPLE_API void* EXAMPLE_API_CONVENTION example_printersharedptr_default()
{
    return new Example::PrinterSharedPtr();
}

EXAMPLE_API void EXAMPLE_API_CONVENTION example_printersharedptr_delete(void* object_pointer)
{
    delete static_cast<Example::PrinterSharedPtr*>(object_pointer);
}

EXAMPLE_API void EXAMPLE_API_CONVENTION example_printersharedptr_show(void* object_pointer, const char* text)
{
    const Example::PrinterSharedPtr* self = static_cast<Example::PrinterSharedPtr*>(object_pointer);
    (*self)->Show(text);
}
