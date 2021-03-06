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

#ifndef DOXYGENDOC_ADDRESS_DECLARATION_INCLUDED
#define DOXYGENDOC_ADDRESS_DECLARATION_INCLUDED

#include "DoxygenDocCapi.h"
#include "DoxygenDocFwd.h"

#ifdef __cplusplus

namespace DoxygenDoc {

/**
 * @brief Represents an address.
 * 
 * 
 * 
 * 
 */
class AddressPtr
{
public:
    /**
     * @brief Creates a default address.
     * 
     * 
     * 
     * 
     */
    inline AddressPtr();
    /**
     * @brief Gets the street name.
     * 
     * 
     * 
     * 
     */
    inline const char* GetStreetName() const;
    /**
     * @brief Sets the street name.
     * 
     * 
     * 
     * 
     */
    inline void SetStreetName(const char* street_name);
    /**
     * @brief Gets the city.
     * 
     * 
     * 
     * 
     */
    inline const char* GetCity() const;
    /**
     * @brief Sets the city.
     * 
     * 
     * 
     * 
     */
    inline void SetCity(const char* city);
    /**
     * @brief Gets the state.
     * 
     * 
     * 
     * 
     */
    inline unsigned int GetState() const;
    /**
     * @brief Sets the state.
     * 
     * 
     * 
     * 
     */
    inline void SetState(unsigned int state);

    inline AddressPtr(const AddressPtr& other);
    #ifdef DOXYGENDOC_CPP_COMPILER_HAS_RVALUE_REFERENCES
    inline AddressPtr(AddressPtr&& other);
    #endif /* DOXYGENDOC_CPP_COMPILER_HAS_RVALUE_REFERENCES */
    enum ECreateFromRawPointer { force_creating_from_raw_pointer };
    inline AddressPtr(ECreateFromRawPointer, void *object_pointer, bool add_ref_object);
    inline ~AddressPtr();
    inline AddressPtr& operator=(const AddressPtr& other);
    #ifdef DOXYGENDOC_CPP_COMPILER_HAS_RVALUE_REFERENCES
    inline AddressPtr& operator=(AddressPtr&& other);
    #endif /* DOXYGENDOC_CPP_COMPILER_HAS_RVALUE_REFERENCES */
    static inline AddressPtr Null();
    inline bool IsNull() const;
    inline bool IsNotNull() const;
    inline bool operator!() const;
    inline void* Detach();
    inline void* GetRawPointer() const;
    inline AddressPtr* operator->();
    inline const AddressPtr* operator->() const;
protected:
    inline void SetObject(void* object_pointer);
    void* mObject;
};

}

#endif /* __cplusplus */

#endif /* DOXYGENDOC_ADDRESS_DECLARATION_INCLUDED */

