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

#ifndef PRINTERNS_PRINTER_DEFINITION_INCLUDED
#define PRINTERNS_PRINTER_DEFINITION_INCLUDED

#include "PrinterNS/PrinterDecl.h"
#include "Components/ComponentA.h"
#include "Components/ComponentB.h"
#include "CompC.h"

#ifdef __cplusplus

inline PrinterNS::Printer::Printer()
{
    SetObject(PrinterNS::Printer(PrinterNS::Printer::force_creating_from_raw_pointer, printer_ns_printer_default(), false).Detach());
}

inline void PrinterNS::Printer::Show(const Components::ComponentA& name)
{
    printer_ns_printer_show(GetRawPointer(), name.GetRawPointer());
}

inline void PrinterNS::Printer::Show(const Components::ComponentBRawPtr& person)
{
    printer_ns_printer_show_1(GetRawPointer(), person.GetRawPointer());
}

inline void PrinterNS::Printer::Show(const CompC::ComponentCPtr& address)
{
    printer_ns_printer_show_2(GetRawPointer(), address.GetPtr());
}

inline CompC::ComponentCPtr PrinterNS::Printer::GetCompC() const
{
    return CompC::ComponentCPtr(CompC::ComponentCPtr::force_creating_from_raw_pointer, printer_ns_printer_get_comp_c_const(GetRawPointer()), false);
}

inline PrinterNS::Printer::Printer(const Printer& other)
{
    if (other.GetRawPointer())
    {
        SetObject(printer_ns_printer_copy(other.GetRawPointer()));
    }
    else
    {
        SetObject(0);
    }
}

#ifdef PRINTERNS_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline PrinterNS::Printer::Printer(Printer&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* PRINTERNS_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline PrinterNS::Printer::Printer(PrinterNS::Printer::ECreateFromRawPointer, void *object_pointer, bool copy_object)
{
    if (object_pointer && copy_object)
    {
        SetObject(printer_ns_printer_copy(object_pointer));
    }
    else
    {
        SetObject(object_pointer);
    }
}

inline PrinterNS::Printer::~Printer()
{
    if (GetRawPointer())
    {
        printer_ns_printer_delete(GetRawPointer());
        SetObject(0);
    }
}

inline PrinterNS::Printer& PrinterNS::Printer::operator=(const PrinterNS::Printer& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            printer_ns_printer_delete(GetRawPointer());
            SetObject(0);
        }
        if (other.GetRawPointer())
        {
            SetObject(printer_ns_printer_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    return *this;
}

#ifdef PRINTERNS_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline PrinterNS::Printer& PrinterNS::Printer::operator=(PrinterNS::Printer&& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            printer_ns_printer_delete(GetRawPointer());
            SetObject(0);
        }
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* PRINTERNS_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline PrinterNS::Printer PrinterNS::Printer::Null()
{
    return PrinterNS::Printer(PrinterNS::Printer::force_creating_from_raw_pointer, static_cast<void*>(0), false);
}

inline bool PrinterNS::Printer::IsNull() const
{
    return !GetRawPointer();
}

inline bool PrinterNS::Printer::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool PrinterNS::Printer::operator!() const
{
    return !GetRawPointer();
}

inline void* PrinterNS::Printer::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* PrinterNS::Printer::GetRawPointer() const
{
    return PrinterNS::Printer::mObject ? mObject: 0;
}

inline void PrinterNS::Printer::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* PRINTERNS_PRINTER_DEFINITION_INCLUDED */

