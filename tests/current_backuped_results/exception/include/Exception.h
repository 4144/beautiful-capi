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

#ifndef EXCEPTION_INCLUDED
#define EXCEPTION_INCLUDED

#include "ExceptionCapi.h"
#include "ExceptionFwd.h"
#include "Exception/Generic.h"
#include "Exception/BadArgument.h"
#include "Exception/NullArgument.h"
#include "Exception/DivisionByZero.h"
#include "Exception/common/check_and_throw_exception.h"
#include "Example.h"
#include "Exception.h"

#ifdef __cplusplus

namespace Exception { 

template<typename TargetType, typename SourceType>
TargetType down_cast(const SourceType&);

}

#endif /* __cplusplus */

#endif /* EXCEPTION_INCLUDED */

#ifndef EXCEPTION_H_INCLUDED
#define EXCEPTION_H_INCLUDED


#endif /* EXCEPTION_H_INCLUDED */
