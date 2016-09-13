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

#ifndef EXAMPLE_ISQUARE_INCLUDED
#define EXAMPLE_ISQUARE_INCLUDED

#include "ExampleCapi.h"
#include "ExampleFwd.h"
#include "Example/IPolygon.h"

#ifdef __cplusplus

namespace Example { 

class ISquarePtr : public Example::IPolygonPtr
{
protected:
    void* mObject;
    void SetObject(void* object_pointer)
    {
        mObject = object_pointer;
        if (mObject)
        {
            Example::IPolygonPtr::SetObject(example_isquare_cast_to_base(mObject));
        }
        else
        {
            Example::IPolygonPtr::SetObject(0);
        }
    }
public:
    ISquarePtr(const ISquarePtr& other) : Example::IPolygonPtr(0, false)
    {
        SetObject(other.mObject);
        if (mObject)
        {
            example_isquare_add_ref(mObject);
        }
    }
    ISquarePtr(void *object_pointer, bool add_ref) : Example::IPolygonPtr(0, false)
    {
        SetObject(object_pointer);
        if (add_ref && object_pointer)
        {
            example_isquare_add_ref(mObject);
        }
    }
    bool IsNull() const
    {
        return !mObject;
    }
    bool IsNotNull() const
    {
        return mObject != 0;
    }
    bool operator!() const
    {
        return !mObject;
    }
    ISquarePtr* operator->()
    {
        return this;
    }
    const ISquarePtr* operator->() const
    {
        return this;
    }
    void* Detach()
    {
        void* result = mObject;
        SetObject(0);
        return result;
    }
    ISquarePtr operator=(const ISquarePtr& other)
    {
        if (mObject != other.mObject)
        {
            if (mObject)
            {
                example_isquare_release(mObject);
                SetObject(0);
            }
            SetObject(other.mObject);
            if (mObject)
            {
                example_isquare_add_ref(mObject);
            }
        }
        return *this;
    }
    ~ISquarePtr()
    {
        if (mObject)
        {
            example_isquare_release(mObject);
            SetObject(0);
        }
    }
    void SetSize(double size)
    {
        example_isquare_setsize(mObject, size);
    }
};

}

#endif /* __cplusplus */

#endif /* EXAMPLE_ISQUARE_INCLUDED */
