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

#ifndef HELLOWORLD_CAPI_INCLUDED
#define HELLOWORLD_CAPI_INCLUDED

#ifdef __cplusplus
    #define HELLOWORLD_CAPI_PREFIX extern "C"
#else
    #define HELLOWORLD_CAPI_PREFIX
#endif

#ifdef _WIN32
    #ifdef __GNUC__
        #define HELLOWORLD_API HELLOWORLD_CAPI_PREFIX __attribute__ ((dllimport))
        #define HELLOWORLD_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define HELLOWORLD_API HELLOWORLD_CAPI_PREFIX __declspec(dllimport)
        #define HELLOWORLD_API_CONVENTION __cdecl
    #endif
#elif __APPLE__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define HELLOWORLD_API HELLOWORLD_CAPI_PREFIX __attribute__ ((visibility ("default")))
    #else
        #define HELLOWORLD_API HELLOWORLD_CAPI_PREFIX
    #endif
    #if defined __i386__
        #define HELLOWORLD_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define HELLOWORLD_API_CONVENTION
    #endif
#elif __unix__ || __linux__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define HELLOWORLD_API HELLOWORLD_CAPI_PREFIX __attribute__ ((visibility ("default")))
    #else
        #define HELLOWORLD_API HELLOWORLD_CAPI_PREFIX
    #endif
    #if defined __i386__
        #define HELLOWORLD_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define HELLOWORLD_API_CONVENTION
    #endif
#else
    #error "Unknown platform"
#endif

HELLOWORLD_API void* HELLOWORLD_API_CONVENTION hello_world_printer_default();
HELLOWORLD_API void HELLOWORLD_API_CONVENTION hello_world_printer_show(void* object_pointer);
HELLOWORLD_API void* HELLOWORLD_API_CONVENTION hello_world_printer_copy(void* object_pointer);
HELLOWORLD_API void HELLOWORLD_API_CONVENTION hello_world_printer_delete(void* object_pointer);

#endif /* HELLOWORLD_CAPI_INCLUDED */

