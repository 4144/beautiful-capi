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

#ifndef EXAMPLE_GEOMETRY_SPHERE_DEFINITION_INCLUDED
#define EXAMPLE_GEOMETRY_SPHERE_DEFINITION_INCLUDED

#include "Example/Geometry/SphereDecl.h"

#ifdef __cplusplus

inline Example::Geometry::Sphere::Sphere()
{
    SetObject(Example::Geometry::Sphere(Example::Geometry::Sphere::force_creating_from_raw_pointer, example_geometry_sphere_new(), false).Detach());
}

inline double Example::Geometry::Sphere::GetRadius()
{
    return example_geometry_sphere_get_radius(GetRawPointer());
}

inline void Example::Geometry::Sphere::SetRadius(double value)
{
    example_geometry_sphere_set_radius(GetRawPointer(), value);
}

inline Example::Geometry::Sphere::Sphere(const Sphere& other)
{
    if (other.GetRawPointer())
    {
        SetObject(example_geometry_sphere_copy(other.GetRawPointer()));
    }
    else
    {
        SetObject(0);
    }
}

#ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Example::Geometry::Sphere::Sphere(Sphere&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Example::Geometry::Sphere::Sphere(Example::Geometry::Sphere::ECreateFromRawPointer, void *object_pointer, bool copy_object)
{
    if (object_pointer && copy_object)
    {
        SetObject(example_geometry_sphere_copy(object_pointer));
    }
    else
    {
        SetObject(object_pointer);
    }
}

inline Example::Geometry::Sphere::~Sphere()
{
    if (GetRawPointer())
    {
        example_geometry_sphere_delete(GetRawPointer());
        SetObject(0);
    }
}

inline Example::Geometry::Sphere& Example::Geometry::Sphere::operator=(const Example::Geometry::Sphere& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            example_geometry_sphere_delete(GetRawPointer());
            SetObject(0);
        }
        if (other.GetRawPointer())
        {
            SetObject(example_geometry_sphere_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    return *this;
}

#ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Example::Geometry::Sphere& Example::Geometry::Sphere::operator=(Example::Geometry::Sphere&& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            example_geometry_sphere_delete(GetRawPointer());
            SetObject(0);
        }
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Example::Geometry::Sphere Example::Geometry::Sphere::Null()
{
    return Example::Geometry::Sphere(Example::Geometry::Sphere::force_creating_from_raw_pointer, static_cast<void*>(0), false);
}

inline bool Example::Geometry::Sphere::IsNull() const
{
    return !GetRawPointer();
}

inline bool Example::Geometry::Sphere::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool Example::Geometry::Sphere::operator!() const
{
    return !GetRawPointer();
}

inline void* Example::Geometry::Sphere::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* Example::Geometry::Sphere::GetRawPointer() const
{
    return Example::Geometry::Sphere::mObject ? mObject: 0;
}

inline void Example::Geometry::Sphere::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* EXAMPLE_GEOMETRY_SPHERE_DEFINITION_INCLUDED */

