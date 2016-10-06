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

#ifndef EXCEPTION_FWD_INCLUDED
#define EXCEPTION_FWD_INCLUDED

#ifdef __cplusplus

#include <utility>

#ifndef BEAUTIFUL_CAPI_CALLBACK_CHECK_AND_THROW_EXCEPTION_FORWARD_DECLARATION
#define BEAUTIFUL_CAPI_CALLBACK_CHECK_AND_THROW_EXCEPTION_FORWARD_DECLARATION

namespace beautiful_capi_Callback
{
    inline void check_and_throw_exception(int exception_code, void* exception_object);
}

#endif /* BEAUTIFUL_CAPI_CALLBACK_CHECK_AND_THROW_EXCEPTION_FORWARD_DECLARATION */

namespace Exception
{
    class Generic;
    class BadArgument;
    class NullArgument;
    class DivisionByZero;
}

#endif /* __cplusplus */

#endif /* EXCEPTION_FWD_INCLUDED */

