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

#ifndef CIRCULAR_CAPI_INCLUDED
#define CIRCULAR_CAPI_INCLUDED

#ifdef __cplusplus
    #define CIRCULAR_CAPI_PREFIX extern "C"
#else /* __cplusplus */
    #define CIRCULAR_CAPI_PREFIX
#endif /* __cplusplus */

#ifdef _WIN32
    #ifdef __GNUC__
        #define CIRCULAR_API CIRCULAR_CAPI_PREFIX __attribute__ ((dllimport))
        #define CIRCULAR_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define CIRCULAR_API CIRCULAR_CAPI_PREFIX __declspec(dllimport)
        #define CIRCULAR_API_CONVENTION __cdecl
    #endif
#elif __APPLE__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define CIRCULAR_API CIRCULAR_CAPI_PREFIX __attribute__ ((visibility ("default")))
    #else
        #define CIRCULAR_API CIRCULAR_CAPI_PREFIX
    #endif
    #ifdef __i386__
        #define CIRCULAR_API_CONVENTION __attribute__ ((cdecl))
    #else /* __i386__ */
        #define CIRCULAR_API_CONVENTION
    #endif /* __i386__ */
#elif __unix__ || __linux__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define CIRCULAR_API CIRCULAR_CAPI_PREFIX __attribute__ ((visibility ("default")))
    #else
        #define CIRCULAR_API CIRCULAR_CAPI_PREFIX
    #endif
    #ifdef __i386__
        #define CIRCULAR_API_CONVENTION __attribute__ ((cdecl))
    #else /* __i386__ */
        #define CIRCULAR_API_CONVENTION
    #endif /* __i386__ */
#else
    #error "Unknown platform"
#endif

#ifdef __cplusplus

    #ifdef _MSC_VER
        #if _MSC_VER >= 1900
            #define CIRCULAR_NOEXCEPT noexcept
        #else /* _MSC_VER >= 1900 */
            #define CIRCULAR_NOEXCEPT
        #endif /* _MSC_VER >= 1900 */
        #if _MSC_VER >= 1800
            #define CIRCULAR_CPP_COMPILER_HAS_RVALUE_REFERENCES
        #endif /* _MSC_VER >= 1800 */
    #else /* _MSC_VER */
        #if __cplusplus >= 201103L
            #define CIRCULAR_NOEXCEPT noexcept
            #define CIRCULAR_CPP_COMPILER_HAS_RVALUE_REFERENCES
        #else /* __cplusplus >= 201103L */
            #define CIRCULAR_NOEXCEPT
        #endif /* __cplusplus >= 201103L */
    #endif /* _MSC_VER */

#endif /* __cplusplus */

#ifndef CIRCULAR_CAPI_USE_DYNAMIC_LOADER
    
    CIRCULAR_API void* CIRCULAR_API_CONVENTION circular_class_a_default();
    CIRCULAR_API void CIRCULAR_API_CONVENTION circular_class_a_set_b(void* object_pointer, void* value);
    CIRCULAR_API void* CIRCULAR_API_CONVENTION circular_class_a_get_b(void* object_pointer);
    CIRCULAR_API void CIRCULAR_API_CONVENTION circular_class_a_delete(void* object_pointer);
    CIRCULAR_API void* CIRCULAR_API_CONVENTION circular_class_b_default();
    CIRCULAR_API void CIRCULAR_API_CONVENTION circular_class_b_set_a(void* object_pointer, void* value);
    CIRCULAR_API void* CIRCULAR_API_CONVENTION circular_class_b_get_a(void* object_pointer);
    CIRCULAR_API void CIRCULAR_API_CONVENTION circular_class_b_delete(void* object_pointer);
    
#else /* CIRCULAR_CAPI_USE_DYNAMIC_LOADER */
    
    typedef void* (CIRCULAR_API_CONVENTION *circular_class_a_default_function_type)();
    typedef void (CIRCULAR_API_CONVENTION *circular_class_a_set_b_function_type)(void* object_pointer, void* value);
    typedef void* (CIRCULAR_API_CONVENTION *circular_class_a_get_b_function_type)(void* object_pointer);
    typedef void (CIRCULAR_API_CONVENTION *circular_class_a_delete_function_type)(void* object_pointer);
    typedef void* (CIRCULAR_API_CONVENTION *circular_class_b_default_function_type)();
    typedef void (CIRCULAR_API_CONVENTION *circular_class_b_set_a_function_type)(void* object_pointer, void* value);
    typedef void* (CIRCULAR_API_CONVENTION *circular_class_b_get_a_function_type)(void* object_pointer);
    typedef void (CIRCULAR_API_CONVENTION *circular_class_b_delete_function_type)(void* object_pointer);
    
    #ifdef CIRCULAR_CAPI_DEFINE_FUNCTION_POINTERS
        
        extern circular_class_a_default_function_type circular_class_a_default = 0;
        extern circular_class_a_set_b_function_type circular_class_a_set_b = 0;
        extern circular_class_a_get_b_function_type circular_class_a_get_b = 0;
        extern circular_class_a_delete_function_type circular_class_a_delete = 0;
        extern circular_class_b_default_function_type circular_class_b_default = 0;
        extern circular_class_b_set_a_function_type circular_class_b_set_a = 0;
        extern circular_class_b_get_a_function_type circular_class_b_get_a = 0;
        extern circular_class_b_delete_function_type circular_class_b_delete = 0;
        
    #else /* CIRCULAR_CAPI_DEFINE_FUNCTION_POINTERS */
        
        extern circular_class_a_default_function_type circular_class_a_default;
        extern circular_class_a_set_b_function_type circular_class_a_set_b;
        extern circular_class_a_get_b_function_type circular_class_a_get_b;
        extern circular_class_a_delete_function_type circular_class_a_delete;
        extern circular_class_b_default_function_type circular_class_b_default;
        extern circular_class_b_set_a_function_type circular_class_b_set_a;
        extern circular_class_b_get_a_function_type circular_class_b_get_a;
        extern circular_class_b_delete_function_type circular_class_b_delete;
        
    #endif /* CIRCULAR_CAPI_DEFINE_FUNCTION_POINTERS */
    
    #ifdef __cplusplus
    
    #include <stdexcept>
    #include <sstream>
    
    #ifdef _WIN32
        #include <Windows.h>
    #else /* _WIN32 */
        #include <dlfcn.h>
    #endif /* _WIN32 */
    
    namespace Circular
    {
        class Initialization
        {
            #ifdef _WIN32
                HINSTANCE handle;
            #else /* _WIN32 */
                void* handle;
            #endif /* _WIN32 */
            
            template<class FunctionPointerType>
            void load_function(FunctionPointerType& to_init, const char* name)
            {
                #ifdef _WIN32
                    to_init = reinterpret_cast<FunctionPointerType>(GetProcAddress(handle, name));
                #else /* _WIN32 */
                    to_init = reinterpret_cast<FunctionPointerType>(dlsym(handle, name));
                #endif /* _WIN32 */
                if (!to_init)
                {
                    std::stringstream error_message;
                    error_message << "Can't obtain function " << name;
                    throw std::runtime_error(error_message.str());
                }
            }
            
            void load_module(const char* shared_library_name)
            {
                if (!shared_library_name) throw std::runtime_error("Null library name was passed");
                #ifdef _WIN32
                    handle = LoadLibraryA(shared_library_name);
                #else /* _WIN32 */
                    handle = dlopen(shared_library_name, RTLD_NOW);
                #endif /* _WIN32 */
                if (!handle)
                {
                    std::stringstream error_message;
                    error_message << "Can't load shared library " << shared_library_name;
                    throw std::runtime_error(error_message.str());
                }
                load_function<circular_class_a_default_function_type>(circular_class_a_default, "circular_class_a_default");
                load_function<circular_class_a_set_b_function_type>(circular_class_a_set_b, "circular_class_a_set_b");
                load_function<circular_class_a_get_b_function_type>(circular_class_a_get_b, "circular_class_a_get_b");
                load_function<circular_class_a_delete_function_type>(circular_class_a_delete, "circular_class_a_delete");
                load_function<circular_class_b_default_function_type>(circular_class_b_default, "circular_class_b_default");
                load_function<circular_class_b_set_a_function_type>(circular_class_b_set_a, "circular_class_b_set_a");
                load_function<circular_class_b_get_a_function_type>(circular_class_b_get_a, "circular_class_b_get_a");
                load_function<circular_class_b_delete_function_type>(circular_class_b_delete, "circular_class_b_delete");
            }
            
            Initialization();
            Initialization(const Initialization&);
            #ifdef CIRCULAR_CPP_COMPILER_HAS_RVALUE_REFERENCES
                Initialization(Initialization &&) = delete;
            #endif /* CIRCULAR_CPP_COMPILER_HAS_RVALUE_REFERENCES */
        public:
            Initialization(const char* shared_library_name)
            {
                load_module(shared_library_name);
            }
            ~Initialization()
            {
                #ifdef _WIN32
                    FreeLibrary(handle);
                #else /* _WIN32 */
                    dlclose(handle);
                #endif /* _WIN32 */
                circular_class_a_default = 0;
                circular_class_a_set_b = 0;
                circular_class_a_get_b = 0;
                circular_class_a_delete = 0;
                circular_class_b_default = 0;
                circular_class_b_set_a = 0;
                circular_class_b_get_a = 0;
                circular_class_b_delete = 0;
            }
        };
    }
    
    #endif /* __cplusplus */
    
#endif /* CIRCULAR_CAPI_USE_DYNAMIC_LOADER */

#endif /* CIRCULAR_CAPI_INCLUDED */

