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

#ifndef STL_INCLUDED
#define STL_INCLUDED

#include "STLCapi.h"
#include "STLFwd.h"
#include "STL/Exception.h"
#include "STL/String.h"
#include "STL/Person.h"
#include "STL/Community.h"
#include "STL/Vectorint.h"
#include "STL/Vectorchar.h"
#include "STL/Vectordouble.h"
#include "STL/VectorOfStructuresSTLPerson.h"
#include "STL/PersonRawPtr.h"
#include "STL/VectorOfStructuresRawPtrSTLPerson.h"
#include "ImplementationCode/common/check_and_throw_exception.h"

#ifdef __cplusplus

namespace STL {

inline double SinDegree(double angle_in_degree)
{
    beautiful_capi_implementationcode_exception_info_t exception_info;
    double result(stl_sin_degree(&exception_info, angle_in_degree));
    beautiful_capi_ImplementationCode::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
    return result;
}
inline int GetMajorVersion()
{
    return stl_get_major_version();
}
inline int GetMinorVersion()
{
    return stl_get_minor_version();
}
inline int GetPatchVersion()
{
    return stl_get_patch_version();
}

}

#endif /* __cplusplus */

#endif /* STL_INCLUDED */

