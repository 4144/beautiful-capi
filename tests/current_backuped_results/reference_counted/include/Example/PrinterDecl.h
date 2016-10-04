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

#ifndef EXAMPLE_PRINTER_DECLARATION_INCLUDED
#define EXAMPLE_PRINTER_DECLARATION_INCLUDED

#include "ExampleCapi.h"
#include "ExampleFwd.h"

#ifdef __cplusplus

namespace Example {

class PrinterPtr
{
public:
    inline PrinterPtr();
    inline void Show(const char* text) const;
    
    inline PrinterPtr(const PrinterPtr& other);
    enum ECreateFromRawPointer { force_creating_from_raw_pointer };
    inline PrinterPtr(ECreateFromRawPointer, void *object_pointer, bool add_ref_object);
    inline ~PrinterPtr();
    inline PrinterPtr& operator=(const PrinterPtr& other);
    inline bool IsNull() const;
    inline bool IsNotNull() const;
    inline bool operator!() const;
    inline void* Detach();
    inline void* get_raw_pointer() const;
    inline PrinterPtr* operator->();
    inline const PrinterPtr* operator->() const;
protected:
    inline void SetObject(void* object_pointer);
    void* mObject;
};

}

#endif /* __cplusplus */

#endif /* EXAMPLE_PRINTER_DECLARATION_INCLUDED */

