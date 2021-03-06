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

#ifndef CLASSES_CAPI_INCLUDED
#define CLASSES_CAPI_INCLUDED

#include <stddef.h>

#ifdef __cplusplus
    #define CLASSES_CAPI_PREFIX extern "C"
#else /* __cplusplus */
    #define CLASSES_CAPI_PREFIX
#endif /* __cplusplus */

#ifdef _WIN32
    #ifdef __GNUC__
        #define CLASSES_API CLASSES_CAPI_PREFIX __attribute__ ((dllimport))
        #define CLASSES_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define CLASSES_API CLASSES_CAPI_PREFIX __declspec(dllimport)
        #define CLASSES_API_CONVENTION __cdecl
    #endif
#elif __APPLE__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define CLASSES_API CLASSES_CAPI_PREFIX __attribute__ ((visibility ("default")))
    #else
        #define CLASSES_API CLASSES_CAPI_PREFIX
    #endif
    #ifdef __i386__
        #define CLASSES_API_CONVENTION __attribute__ ((cdecl))
    #else /* __i386__ */
        #define CLASSES_API_CONVENTION
    #endif /* __i386__ */
#elif __unix__ || __linux__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define CLASSES_API CLASSES_CAPI_PREFIX __attribute__ ((visibility ("default")))
    #else
        #define CLASSES_API CLASSES_CAPI_PREFIX
    #endif
    #ifdef __i386__
        #define CLASSES_API_CONVENTION __attribute__ ((cdecl))
    #else /* __i386__ */
        #define CLASSES_API_CONVENTION
    #endif /* __i386__ */
#else
    #error "Unknown platform"
#endif

#define CLASSES_MAJOR_VERSION 1
#define CLASSES_MINOR_VERSION 0
#define CLASSES_PATCH_VERSION 0

#ifdef __cplusplus
    #ifdef _MSC_VER
        #if _MSC_VER >= 1900
            #define CLASSES_NOEXCEPT noexcept
        #else /* _MSC_VER >= 1900 */
            #define CLASSES_NOEXCEPT
        #endif /* _MSC_VER >= 1900 */
        #if _MSC_VER >= 1600
            #define CLASSES_CPP_COMPILER_HAS_RVALUE_REFERENCES
        #endif /* _MSC_VER >= 1600 */
        #if _MSC_VER >= 1800
            #define CLASSES_CPP_COMPILER_HAS_MOVE_CONSTRUCTOR_DELETE
        #endif /* _MSC_VER >= 1800 */
    #else /* _MSC_VER */
        #if __cplusplus >= 201103L
            #define CLASSES_NOEXCEPT noexcept
            #define CLASSES_CPP_COMPILER_HAS_RVALUE_REFERENCES
            #define CLASSES_CPP_COMPILER_HAS_MOVE_CONSTRUCTOR_DELETE
        #else /* __cplusplus >= 201103L */
            #define CLASSES_NOEXCEPT
        #endif /* __cplusplus >= 201103L */
    #endif /* _MSC_VER */
#endif /* __cplusplus */

#ifndef CLASSES_CAPI_USE_DYNAMIC_LOADER

    CLASSES_API int CLASSES_API_CONVENTION classes_get_major_version();
    CLASSES_API int CLASSES_API_CONVENTION classes_get_minor_version();
    CLASSES_API int CLASSES_API_CONVENTION classes_get_patch_version();
    CLASSES_API void* CLASSES_API_CONVENTION classes_class_a_default();
    CLASSES_API int CLASSES_API_CONVENTION classes_class_a_get_value_const(void* object_pointer);
    CLASSES_API void CLASSES_API_CONVENTION classes_class_a_set_value(void* object_pointer, int value);
    CLASSES_API void* CLASSES_API_CONVENTION classes_class_a_copy(void* object_pointer);
    CLASSES_API void CLASSES_API_CONVENTION classes_class_a_delete(void* object_pointer);
    CLASSES_API void* CLASSES_API_CONVENTION classes_class_b_default();
    CLASSES_API const char* CLASSES_API_CONVENTION classes_class_b_get_value_const(void* object_pointer);
    CLASSES_API void CLASSES_API_CONVENTION classes_class_b_set_value(void* object_pointer, const char* value);
    CLASSES_API void CLASSES_API_CONVENTION classes_class_b_delete(void* object_pointer);
    CLASSES_API void* CLASSES_API_CONVENTION classes_class_c_default();
    CLASSES_API double CLASSES_API_CONVENTION classes_class_c_get_value_const(void* object_pointer);
    CLASSES_API void CLASSES_API_CONVENTION classes_class_c_set_value(void* object_pointer, double value);
    CLASSES_API void CLASSES_API_CONVENTION classes_class_c_add_ref(void* object_pointer);
    CLASSES_API void CLASSES_API_CONVENTION classes_class_c_release(void* object_pointer);

    #ifdef __cplusplus

    #include <stdexcept>
    #include <sstream>

    namespace Classes
    {
        class Initialization
        {
        public:
            Initialization()
            {
                const int major_version = classes_get_major_version();
                const int minor_version = classes_get_minor_version();
                const int patch_version = classes_get_patch_version();
                if (major_version != CLASSES_MAJOR_VERSION || minor_version != CLASSES_MINOR_VERSION || patch_version != CLASSES_PATCH_VERSION)
                {
                    std::stringstream error_message;
                    error_message << "Incorrect version of library. ";
                    error_message << "Expected version is " << CLASSES_MAJOR_VERSION << "." << CLASSES_MINOR_VERSION << "." << CLASSES_PATCH_VERSION << ". ";
                    error_message << "Found version is " << major_version << "." << minor_version << "." << patch_version << ".";
                    throw std::runtime_error(error_message.str());
                }
            }
        };
    }

    #endif /* __cplusplus */

#else /* CLASSES_CAPI_USE_DYNAMIC_LOADER */

    typedef int (CLASSES_API_CONVENTION *classes_get_major_version_function_type)();
    typedef int (CLASSES_API_CONVENTION *classes_get_minor_version_function_type)();
    typedef int (CLASSES_API_CONVENTION *classes_get_patch_version_function_type)();
    typedef void* (CLASSES_API_CONVENTION *classes_class_a_default_function_type)();
    typedef int (CLASSES_API_CONVENTION *classes_class_a_get_value_const_function_type)(void* object_pointer);
    typedef void (CLASSES_API_CONVENTION *classes_class_a_set_value_function_type)(void* object_pointer, int value);
    typedef void* (CLASSES_API_CONVENTION *classes_class_a_copy_function_type)(void* object_pointer);
    typedef void (CLASSES_API_CONVENTION *classes_class_a_delete_function_type)(void* object_pointer);
    typedef void* (CLASSES_API_CONVENTION *classes_class_b_default_function_type)();
    typedef const char* (CLASSES_API_CONVENTION *classes_class_b_get_value_const_function_type)(void* object_pointer);
    typedef void (CLASSES_API_CONVENTION *classes_class_b_set_value_function_type)(void* object_pointer, const char* value);
    typedef void (CLASSES_API_CONVENTION *classes_class_b_delete_function_type)(void* object_pointer);
    typedef void* (CLASSES_API_CONVENTION *classes_class_c_default_function_type)();
    typedef double (CLASSES_API_CONVENTION *classes_class_c_get_value_const_function_type)(void* object_pointer);
    typedef void (CLASSES_API_CONVENTION *classes_class_c_set_value_function_type)(void* object_pointer, double value);
    typedef void (CLASSES_API_CONVENTION *classes_class_c_add_ref_function_type)(void* object_pointer);
    typedef void (CLASSES_API_CONVENTION *classes_class_c_release_function_type)(void* object_pointer);

    #ifdef CLASSES_CAPI_DEFINE_FUNCTION_POINTERS

        #ifdef classes_get_major_version_define_function_pointer_var
            classes_get_major_version_define_function_pointer_var
        #else
            classes_get_major_version_function_type classes_get_major_version = 0;
        #endif
        #ifdef classes_get_minor_version_define_function_pointer_var
            classes_get_minor_version_define_function_pointer_var
        #else
            classes_get_minor_version_function_type classes_get_minor_version = 0;
        #endif
        #ifdef classes_get_patch_version_define_function_pointer_var
            classes_get_patch_version_define_function_pointer_var
        #else
            classes_get_patch_version_function_type classes_get_patch_version = 0;
        #endif
        #ifdef classes_class_a_default_define_function_pointer_var
            classes_class_a_default_define_function_pointer_var
        #else
            classes_class_a_default_function_type classes_class_a_default = 0;
        #endif
        #ifdef classes_class_a_get_value_const_define_function_pointer_var
            classes_class_a_get_value_const_define_function_pointer_var
        #else
            classes_class_a_get_value_const_function_type classes_class_a_get_value_const = 0;
        #endif
        #ifdef classes_class_a_set_value_define_function_pointer_var
            classes_class_a_set_value_define_function_pointer_var
        #else
            classes_class_a_set_value_function_type classes_class_a_set_value = 0;
        #endif
        #ifdef classes_class_a_copy_define_function_pointer_var
            classes_class_a_copy_define_function_pointer_var
        #else
            classes_class_a_copy_function_type classes_class_a_copy = 0;
        #endif
        #ifdef classes_class_a_delete_define_function_pointer_var
            classes_class_a_delete_define_function_pointer_var
        #else
            classes_class_a_delete_function_type classes_class_a_delete = 0;
        #endif
        #ifdef classes_class_b_default_define_function_pointer_var
            classes_class_b_default_define_function_pointer_var
        #else
            classes_class_b_default_function_type classes_class_b_default = 0;
        #endif
        #ifdef classes_class_b_get_value_const_define_function_pointer_var
            classes_class_b_get_value_const_define_function_pointer_var
        #else
            classes_class_b_get_value_const_function_type classes_class_b_get_value_const = 0;
        #endif
        #ifdef classes_class_b_set_value_define_function_pointer_var
            classes_class_b_set_value_define_function_pointer_var
        #else
            classes_class_b_set_value_function_type classes_class_b_set_value = 0;
        #endif
        #ifdef classes_class_b_delete_define_function_pointer_var
            classes_class_b_delete_define_function_pointer_var
        #else
            classes_class_b_delete_function_type classes_class_b_delete = 0;
        #endif
        #ifdef classes_class_c_default_define_function_pointer_var
            classes_class_c_default_define_function_pointer_var
        #else
            classes_class_c_default_function_type classes_class_c_default = 0;
        #endif
        #ifdef classes_class_c_get_value_const_define_function_pointer_var
            classes_class_c_get_value_const_define_function_pointer_var
        #else
            classes_class_c_get_value_const_function_type classes_class_c_get_value_const = 0;
        #endif
        #ifdef classes_class_c_set_value_define_function_pointer_var
            classes_class_c_set_value_define_function_pointer_var
        #else
            classes_class_c_set_value_function_type classes_class_c_set_value = 0;
        #endif
        #ifdef classes_class_c_add_ref_define_function_pointer_var
            classes_class_c_add_ref_define_function_pointer_var
        #else
            classes_class_c_add_ref_function_type classes_class_c_add_ref = 0;
        #endif
        #ifdef classes_class_c_release_define_function_pointer_var
            classes_class_c_release_define_function_pointer_var
        #else
            classes_class_c_release_function_type classes_class_c_release = 0;
        #endif

    #else /* CLASSES_CAPI_DEFINE_FUNCTION_POINTERS */

        extern classes_get_major_version_function_type classes_get_major_version;
        extern classes_get_minor_version_function_type classes_get_minor_version;
        extern classes_get_patch_version_function_type classes_get_patch_version;
        extern classes_class_a_default_function_type classes_class_a_default;
        extern classes_class_a_get_value_const_function_type classes_class_a_get_value_const;
        extern classes_class_a_set_value_function_type classes_class_a_set_value;
        extern classes_class_a_copy_function_type classes_class_a_copy;
        extern classes_class_a_delete_function_type classes_class_a_delete;
        extern classes_class_b_default_function_type classes_class_b_default;
        extern classes_class_b_get_value_const_function_type classes_class_b_get_value_const;
        extern classes_class_b_set_value_function_type classes_class_b_set_value;
        extern classes_class_b_delete_function_type classes_class_b_delete;
        extern classes_class_c_default_function_type classes_class_c_default;
        extern classes_class_c_get_value_const_function_type classes_class_c_get_value_const;
        extern classes_class_c_set_value_function_type classes_class_c_set_value;
        extern classes_class_c_add_ref_function_type classes_class_c_add_ref;
        extern classes_class_c_release_function_type classes_class_c_release;

    #endif /* CLASSES_CAPI_DEFINE_FUNCTION_POINTERS */

    #ifdef __cplusplus

    #include <stdexcept>
    #include <sstream>

    #ifdef _WIN32
        #include <Windows.h>
    #else /* _WIN32 */
        #include <dlfcn.h>
    #endif /* _WIN32 */

    namespace Classes
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
                #ifdef classes_get_major_version_load_function_call
                    classes_get_major_version_load_function_call
                #else /* classes_get_major_version_load_function_call */
                    load_function<classes_get_major_version_function_type>(classes_get_major_version, "classes_get_major_version");
                #endif /* classes_get_major_version_load_function_call */
                #ifdef classes_get_minor_version_load_function_call
                    classes_get_minor_version_load_function_call
                #else /* classes_get_minor_version_load_function_call */
                    load_function<classes_get_minor_version_function_type>(classes_get_minor_version, "classes_get_minor_version");
                #endif /* classes_get_minor_version_load_function_call */
                #ifdef classes_get_patch_version_load_function_call
                    classes_get_patch_version_load_function_call
                #else /* classes_get_patch_version_load_function_call */
                    load_function<classes_get_patch_version_function_type>(classes_get_patch_version, "classes_get_patch_version");
                #endif /* classes_get_patch_version_load_function_call */
                #ifdef classes_class_a_default_load_function_call
                    classes_class_a_default_load_function_call
                #else /* classes_class_a_default_load_function_call */
                    load_function<classes_class_a_default_function_type>(classes_class_a_default, "classes_class_a_default");
                #endif /* classes_class_a_default_load_function_call */
                #ifdef classes_class_a_get_value_const_load_function_call
                    classes_class_a_get_value_const_load_function_call
                #else /* classes_class_a_get_value_const_load_function_call */
                    load_function<classes_class_a_get_value_const_function_type>(classes_class_a_get_value_const, "classes_class_a_get_value_const");
                #endif /* classes_class_a_get_value_const_load_function_call */
                #ifdef classes_class_a_set_value_load_function_call
                    classes_class_a_set_value_load_function_call
                #else /* classes_class_a_set_value_load_function_call */
                    load_function<classes_class_a_set_value_function_type>(classes_class_a_set_value, "classes_class_a_set_value");
                #endif /* classes_class_a_set_value_load_function_call */
                #ifdef classes_class_a_copy_load_function_call
                    classes_class_a_copy_load_function_call
                #else /* classes_class_a_copy_load_function_call */
                    load_function<classes_class_a_copy_function_type>(classes_class_a_copy, "classes_class_a_copy");
                #endif /* classes_class_a_copy_load_function_call */
                #ifdef classes_class_a_delete_load_function_call
                    classes_class_a_delete_load_function_call
                #else /* classes_class_a_delete_load_function_call */
                    load_function<classes_class_a_delete_function_type>(classes_class_a_delete, "classes_class_a_delete");
                #endif /* classes_class_a_delete_load_function_call */
                #ifdef classes_class_b_default_load_function_call
                    classes_class_b_default_load_function_call
                #else /* classes_class_b_default_load_function_call */
                    load_function<classes_class_b_default_function_type>(classes_class_b_default, "classes_class_b_default");
                #endif /* classes_class_b_default_load_function_call */
                #ifdef classes_class_b_get_value_const_load_function_call
                    classes_class_b_get_value_const_load_function_call
                #else /* classes_class_b_get_value_const_load_function_call */
                    load_function<classes_class_b_get_value_const_function_type>(classes_class_b_get_value_const, "classes_class_b_get_value_const");
                #endif /* classes_class_b_get_value_const_load_function_call */
                #ifdef classes_class_b_set_value_load_function_call
                    classes_class_b_set_value_load_function_call
                #else /* classes_class_b_set_value_load_function_call */
                    load_function<classes_class_b_set_value_function_type>(classes_class_b_set_value, "classes_class_b_set_value");
                #endif /* classes_class_b_set_value_load_function_call */
                #ifdef classes_class_b_delete_load_function_call
                    classes_class_b_delete_load_function_call
                #else /* classes_class_b_delete_load_function_call */
                    load_function<classes_class_b_delete_function_type>(classes_class_b_delete, "classes_class_b_delete");
                #endif /* classes_class_b_delete_load_function_call */
                #ifdef classes_class_c_default_load_function_call
                    classes_class_c_default_load_function_call
                #else /* classes_class_c_default_load_function_call */
                    load_function<classes_class_c_default_function_type>(classes_class_c_default, "classes_class_c_default");
                #endif /* classes_class_c_default_load_function_call */
                #ifdef classes_class_c_get_value_const_load_function_call
                    classes_class_c_get_value_const_load_function_call
                #else /* classes_class_c_get_value_const_load_function_call */
                    load_function<classes_class_c_get_value_const_function_type>(classes_class_c_get_value_const, "classes_class_c_get_value_const");
                #endif /* classes_class_c_get_value_const_load_function_call */
                #ifdef classes_class_c_set_value_load_function_call
                    classes_class_c_set_value_load_function_call
                #else /* classes_class_c_set_value_load_function_call */
                    load_function<classes_class_c_set_value_function_type>(classes_class_c_set_value, "classes_class_c_set_value");
                #endif /* classes_class_c_set_value_load_function_call */
                #ifdef classes_class_c_add_ref_load_function_call
                    classes_class_c_add_ref_load_function_call
                #else /* classes_class_c_add_ref_load_function_call */
                    load_function<classes_class_c_add_ref_function_type>(classes_class_c_add_ref, "classes_class_c_add_ref");
                #endif /* classes_class_c_add_ref_load_function_call */
                #ifdef classes_class_c_release_load_function_call
                    classes_class_c_release_load_function_call
                #else /* classes_class_c_release_load_function_call */
                    load_function<classes_class_c_release_function_type>(classes_class_c_release, "classes_class_c_release");
                #endif /* classes_class_c_release_load_function_call */
                const int major_version = classes_get_major_version();
                const int minor_version = classes_get_minor_version();
                const int patch_version = classes_get_patch_version();
                if (major_version != CLASSES_MAJOR_VERSION || minor_version != CLASSES_MINOR_VERSION || patch_version != CLASSES_PATCH_VERSION)
                {
                    std::stringstream error_message;
                    error_message << "Incorrect version of " << shared_library_name << " library. ";
                    error_message << "Expected version is " << CLASSES_MAJOR_VERSION << "." << CLASSES_MINOR_VERSION << "." << CLASSES_PATCH_VERSION << ". ";
                    error_message << "Found version is " << major_version << "." << minor_version << "." << patch_version << ".";
                    throw std::runtime_error(error_message.str());
                }
            }

            Initialization();
            Initialization(const Initialization&);
            #ifdef CLASSES_CPP_COMPILER_HAS_MOVE_CONSTRUCTOR_DELETE
                Initialization(Initialization &&) = delete;
            #endif /* CLASSES_CPP_COMPILER_HAS_MOVE_CONSTRUCTOR_DELETE */
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
                #ifdef classes_get_major_version_zero_function_pointer
                    classes_get_major_version_zero_function_pointer
                #else /* classes_get_major_version_zero_function_pointer */
                    classes_get_major_version = 0;
                #endif /* classes_get_major_version_zero_function_pointer */
                #ifdef classes_get_minor_version_zero_function_pointer
                    classes_get_minor_version_zero_function_pointer
                #else /* classes_get_minor_version_zero_function_pointer */
                    classes_get_minor_version = 0;
                #endif /* classes_get_minor_version_zero_function_pointer */
                #ifdef classes_get_patch_version_zero_function_pointer
                    classes_get_patch_version_zero_function_pointer
                #else /* classes_get_patch_version_zero_function_pointer */
                    classes_get_patch_version = 0;
                #endif /* classes_get_patch_version_zero_function_pointer */
                #ifdef classes_class_a_default_zero_function_pointer
                    classes_class_a_default_zero_function_pointer
                #else /* classes_class_a_default_zero_function_pointer */
                    classes_class_a_default = 0;
                #endif /* classes_class_a_default_zero_function_pointer */
                #ifdef classes_class_a_get_value_const_zero_function_pointer
                    classes_class_a_get_value_const_zero_function_pointer
                #else /* classes_class_a_get_value_const_zero_function_pointer */
                    classes_class_a_get_value_const = 0;
                #endif /* classes_class_a_get_value_const_zero_function_pointer */
                #ifdef classes_class_a_set_value_zero_function_pointer
                    classes_class_a_set_value_zero_function_pointer
                #else /* classes_class_a_set_value_zero_function_pointer */
                    classes_class_a_set_value = 0;
                #endif /* classes_class_a_set_value_zero_function_pointer */
                #ifdef classes_class_a_copy_zero_function_pointer
                    classes_class_a_copy_zero_function_pointer
                #else /* classes_class_a_copy_zero_function_pointer */
                    classes_class_a_copy = 0;
                #endif /* classes_class_a_copy_zero_function_pointer */
                #ifdef classes_class_a_delete_zero_function_pointer
                    classes_class_a_delete_zero_function_pointer
                #else /* classes_class_a_delete_zero_function_pointer */
                    classes_class_a_delete = 0;
                #endif /* classes_class_a_delete_zero_function_pointer */
                #ifdef classes_class_b_default_zero_function_pointer
                    classes_class_b_default_zero_function_pointer
                #else /* classes_class_b_default_zero_function_pointer */
                    classes_class_b_default = 0;
                #endif /* classes_class_b_default_zero_function_pointer */
                #ifdef classes_class_b_get_value_const_zero_function_pointer
                    classes_class_b_get_value_const_zero_function_pointer
                #else /* classes_class_b_get_value_const_zero_function_pointer */
                    classes_class_b_get_value_const = 0;
                #endif /* classes_class_b_get_value_const_zero_function_pointer */
                #ifdef classes_class_b_set_value_zero_function_pointer
                    classes_class_b_set_value_zero_function_pointer
                #else /* classes_class_b_set_value_zero_function_pointer */
                    classes_class_b_set_value = 0;
                #endif /* classes_class_b_set_value_zero_function_pointer */
                #ifdef classes_class_b_delete_zero_function_pointer
                    classes_class_b_delete_zero_function_pointer
                #else /* classes_class_b_delete_zero_function_pointer */
                    classes_class_b_delete = 0;
                #endif /* classes_class_b_delete_zero_function_pointer */
                #ifdef classes_class_c_default_zero_function_pointer
                    classes_class_c_default_zero_function_pointer
                #else /* classes_class_c_default_zero_function_pointer */
                    classes_class_c_default = 0;
                #endif /* classes_class_c_default_zero_function_pointer */
                #ifdef classes_class_c_get_value_const_zero_function_pointer
                    classes_class_c_get_value_const_zero_function_pointer
                #else /* classes_class_c_get_value_const_zero_function_pointer */
                    classes_class_c_get_value_const = 0;
                #endif /* classes_class_c_get_value_const_zero_function_pointer */
                #ifdef classes_class_c_set_value_zero_function_pointer
                    classes_class_c_set_value_zero_function_pointer
                #else /* classes_class_c_set_value_zero_function_pointer */
                    classes_class_c_set_value = 0;
                #endif /* classes_class_c_set_value_zero_function_pointer */
                #ifdef classes_class_c_add_ref_zero_function_pointer
                    classes_class_c_add_ref_zero_function_pointer
                #else /* classes_class_c_add_ref_zero_function_pointer */
                    classes_class_c_add_ref = 0;
                #endif /* classes_class_c_add_ref_zero_function_pointer */
                #ifdef classes_class_c_release_zero_function_pointer
                    classes_class_c_release_zero_function_pointer
                #else /* classes_class_c_release_zero_function_pointer */
                    classes_class_c_release = 0;
                #endif /* classes_class_c_release_zero_function_pointer */
            }
        };
    }

    #endif /* __cplusplus */

#endif /* CLASSES_CAPI_USE_DYNAMIC_LOADER */

#endif /* CLASSES_CAPI_INCLUDED */

