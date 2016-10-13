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

#ifndef EXCEPTION_CAPI_INCLUDED
#define EXCEPTION_CAPI_INCLUDED

#ifndef BEAUTIFUL_CAPI_CALLBACK_EXCEPTION_INFO_DEFINED
#define BEAUTIFUL_CAPI_CALLBACK_EXCEPTION_INFO_DEFINED

struct beautiful_capi_callback_exception_info_t
{
    int code; /* value from beautiful_capi_callback_exception_code_t enumeration */
    void* object_pointer;
};

enum beautiful_capi_callback_exception_code_t
{
    no_exception = 0,
    exception_generic = 1,
    exception_bad_argument = 2,
    exception_null_argument = 3,
    exception_division_by_zero = 4,
    unknown_exception = -1
};

#endif /* BEAUTIFUL_CAPI_CALLBACK_EXCEPTION_INFO_DEFINED */

#ifdef __cplusplus
    #define EXCEPTION_CAPI_PREFIX extern "C"
#else /* __cplusplus */
    #define EXCEPTION_CAPI_PREFIX
#endif /* __cplusplus */

#ifdef _WIN32
    #ifdef __GNUC__
        #define EXCEPTION_API EXCEPTION_CAPI_PREFIX __attribute__ ((dllimport))
        #define EXCEPTION_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define EXCEPTION_API EXCEPTION_CAPI_PREFIX __declspec(dllimport)
        #define EXCEPTION_API_CONVENTION __cdecl
    #endif
#elif __APPLE__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define EXCEPTION_API EXCEPTION_CAPI_PREFIX __attribute__ ((visibility ("default")))
    #else
        #define EXCEPTION_API EXCEPTION_CAPI_PREFIX
    #endif
    #ifdef __i386__
        #define EXCEPTION_API_CONVENTION __attribute__ ((cdecl))
    #else /* __i386__ */
        #define EXCEPTION_API_CONVENTION
    #endif /* __i386__ */
#elif __unix__ || __linux__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define EXCEPTION_API EXCEPTION_CAPI_PREFIX __attribute__ ((visibility ("default")))
    #else
        #define EXCEPTION_API EXCEPTION_CAPI_PREFIX
    #endif
    #ifdef __i386__
        #define EXCEPTION_API_CONVENTION __attribute__ ((cdecl))
    #else /* __i386__ */
        #define EXCEPTION_API_CONVENTION
    #endif /* __i386__ */
#else
    #error "Unknown platform"
#endif

#define EXCEPTION_MAJOR_VERSION 1
#define EXCEPTION_MINOR_VERSION 0
#define EXCEPTION_PATCH_VERSION 0

#ifdef __cplusplus
    #ifdef _MSC_VER
        #if _MSC_VER >= 1900
            #define EXCEPTION_NOEXCEPT noexcept
        #else /* _MSC_VER >= 1900 */
            #define EXCEPTION_NOEXCEPT
        #endif /* _MSC_VER >= 1900 */
        #if _MSC_VER >= 1600
            #define EXCEPTION_CPP_COMPILER_HAS_RVALUE_REFERENCES
        #endif /* _MSC_VER >= 1600 */
        #if _MSC_VER >= 1800
            #define EXCEPTION_CPP_COMPILER_HAS_MOVE_CONSTRUCTOR_DELETE
        #endif /* _MSC_VER >= 1800 */
    #else /* _MSC_VER */
        #if __cplusplus >= 201103L
            #define EXCEPTION_NOEXCEPT noexcept
            #define EXCEPTION_CPP_COMPILER_HAS_RVALUE_REFERENCES
            #define EXCEPTION_CPP_COMPILER_HAS_MOVE_CONSTRUCTOR_DELETE
        #else /* __cplusplus >= 201103L */
            #define EXCEPTION_NOEXCEPT
        #endif /* __cplusplus >= 201103L */
    #endif /* _MSC_VER */
#endif /* __cplusplus */

#ifndef EXCEPTION_CAPI_USE_DYNAMIC_LOADER
    
    EXCEPTION_API int EXCEPTION_API_CONVENTION exception_get_major_version();
    EXCEPTION_API int EXCEPTION_API_CONVENTION exception_get_minor_version();
    EXCEPTION_API int EXCEPTION_API_CONVENTION exception_get_patch_version();
    EXCEPTION_API void* EXCEPTION_API_CONVENTION exception_generic_new(beautiful_capi_callback_exception_info_t* exception_info);
    EXCEPTION_API const char* EXCEPTION_API_CONVENTION exception_generic_get_error_text(void* object_pointer);
    EXCEPTION_API void* EXCEPTION_API_CONVENTION exception_generic_copy(beautiful_capi_callback_exception_info_t* exception_info, void* object_pointer);
    EXCEPTION_API void EXCEPTION_API_CONVENTION exception_generic_delete(void* object_pointer);
    EXCEPTION_API void* EXCEPTION_API_CONVENTION exception_bad_argument_new(beautiful_capi_callback_exception_info_t* exception_info);
    EXCEPTION_API const char* EXCEPTION_API_CONVENTION exception_bad_argument_get_argument_name(void* object_pointer);
    EXCEPTION_API void* EXCEPTION_API_CONVENTION exception_bad_argument_copy(beautiful_capi_callback_exception_info_t* exception_info, void* object_pointer);
    EXCEPTION_API void EXCEPTION_API_CONVENTION exception_bad_argument_delete(void* object_pointer);
    EXCEPTION_API void* EXCEPTION_API_CONVENTION exception_bad_argument_cast_to_base(void* object_pointer);
    EXCEPTION_API void* EXCEPTION_API_CONVENTION exception_null_argument_new(beautiful_capi_callback_exception_info_t* exception_info);
    EXCEPTION_API void* EXCEPTION_API_CONVENTION exception_null_argument_copy(beautiful_capi_callback_exception_info_t* exception_info, void* object_pointer);
    EXCEPTION_API void EXCEPTION_API_CONVENTION exception_null_argument_delete(void* object_pointer);
    EXCEPTION_API void* EXCEPTION_API_CONVENTION exception_null_argument_cast_to_base(void* object_pointer);
    EXCEPTION_API void* EXCEPTION_API_CONVENTION exception_division_by_zero_new(beautiful_capi_callback_exception_info_t* exception_info);
    EXCEPTION_API void* EXCEPTION_API_CONVENTION exception_division_by_zero_copy(beautiful_capi_callback_exception_info_t* exception_info, void* object_pointer);
    EXCEPTION_API void EXCEPTION_API_CONVENTION exception_division_by_zero_delete(void* object_pointer);
    EXCEPTION_API void* EXCEPTION_API_CONVENTION exception_division_by_zero_cast_to_base(void* object_pointer);
    
    #ifdef __cplusplus
    
    #include <stdexcept>
    #include <sstream>
    
    namespace Exception
    {
        class Initialization
        {
        public:
            Initialization()
            {
                const int major_version = exception_get_major_version();
                const int minor_version = exception_get_minor_version();
                const int patch_version = exception_get_patch_version();
                if (major_version != EXCEPTION_MAJOR_VERSION || minor_version != EXCEPTION_MINOR_VERSION || patch_version != EXCEPTION_PATCH_VERSION)
                {
                    std::stringstream error_message;
                    error_message << "Incorrect version of library. ";
                    error_message << "Expected version is " << EXCEPTION_MAJOR_VERSION << "." << EXCEPTION_MINOR_VERSION << "." << EXCEPTION_PATCH_VERSION << ". ";
                    error_message << "Found version is " << major_version << "." << minor_version << "." << patch_version << ".";
                    throw std::runtime_error(error_message.str());
                }
            }
        };
    }
    
    #endif /* __cplusplus */
    
#else /* EXCEPTION_CAPI_USE_DYNAMIC_LOADER */
    
    typedef int (EXCEPTION_API_CONVENTION *exception_get_major_version_function_type)();
    typedef int (EXCEPTION_API_CONVENTION *exception_get_minor_version_function_type)();
    typedef int (EXCEPTION_API_CONVENTION *exception_get_patch_version_function_type)();
    typedef void* (EXCEPTION_API_CONVENTION *exception_generic_new_function_type)(beautiful_capi_callback_exception_info_t* exception_info);
    typedef const char* (EXCEPTION_API_CONVENTION *exception_generic_get_error_text_function_type)(void* object_pointer);
    typedef void* (EXCEPTION_API_CONVENTION *exception_generic_copy_function_type)(beautiful_capi_callback_exception_info_t* exception_info, void* object_pointer);
    typedef void (EXCEPTION_API_CONVENTION *exception_generic_delete_function_type)(void* object_pointer);
    typedef void* (EXCEPTION_API_CONVENTION *exception_bad_argument_new_function_type)(beautiful_capi_callback_exception_info_t* exception_info);
    typedef const char* (EXCEPTION_API_CONVENTION *exception_bad_argument_get_argument_name_function_type)(void* object_pointer);
    typedef void* (EXCEPTION_API_CONVENTION *exception_bad_argument_copy_function_type)(beautiful_capi_callback_exception_info_t* exception_info, void* object_pointer);
    typedef void (EXCEPTION_API_CONVENTION *exception_bad_argument_delete_function_type)(void* object_pointer);
    typedef void* (EXCEPTION_API_CONVENTION *exception_bad_argument_cast_to_base_function_type)(void* object_pointer);
    typedef void* (EXCEPTION_API_CONVENTION *exception_null_argument_new_function_type)(beautiful_capi_callback_exception_info_t* exception_info);
    typedef void* (EXCEPTION_API_CONVENTION *exception_null_argument_copy_function_type)(beautiful_capi_callback_exception_info_t* exception_info, void* object_pointer);
    typedef void (EXCEPTION_API_CONVENTION *exception_null_argument_delete_function_type)(void* object_pointer);
    typedef void* (EXCEPTION_API_CONVENTION *exception_null_argument_cast_to_base_function_type)(void* object_pointer);
    typedef void* (EXCEPTION_API_CONVENTION *exception_division_by_zero_new_function_type)(beautiful_capi_callback_exception_info_t* exception_info);
    typedef void* (EXCEPTION_API_CONVENTION *exception_division_by_zero_copy_function_type)(beautiful_capi_callback_exception_info_t* exception_info, void* object_pointer);
    typedef void (EXCEPTION_API_CONVENTION *exception_division_by_zero_delete_function_type)(void* object_pointer);
    typedef void* (EXCEPTION_API_CONVENTION *exception_division_by_zero_cast_to_base_function_type)(void* object_pointer);
    
    #ifdef EXCEPTION_CAPI_DEFINE_FUNCTION_POINTERS
        
        #ifdef exception_get_major_version_define_function_pointer_var
            exception_get_major_version_define_function_pointer_var
        #else
            extern exception_get_major_version_function_type exception_get_major_version = 0;
        #endif
        #ifdef exception_get_minor_version_define_function_pointer_var
            exception_get_minor_version_define_function_pointer_var
        #else
            extern exception_get_minor_version_function_type exception_get_minor_version = 0;
        #endif
        #ifdef exception_get_patch_version_define_function_pointer_var
            exception_get_patch_version_define_function_pointer_var
        #else
            extern exception_get_patch_version_function_type exception_get_patch_version = 0;
        #endif
        #ifdef exception_generic_new_define_function_pointer_var
            exception_generic_new_define_function_pointer_var
        #else
            extern exception_generic_new_function_type exception_generic_new = 0;
        #endif
        #ifdef exception_generic_get_error_text_define_function_pointer_var
            exception_generic_get_error_text_define_function_pointer_var
        #else
            extern exception_generic_get_error_text_function_type exception_generic_get_error_text = 0;
        #endif
        #ifdef exception_generic_copy_define_function_pointer_var
            exception_generic_copy_define_function_pointer_var
        #else
            extern exception_generic_copy_function_type exception_generic_copy = 0;
        #endif
        #ifdef exception_generic_delete_define_function_pointer_var
            exception_generic_delete_define_function_pointer_var
        #else
            extern exception_generic_delete_function_type exception_generic_delete = 0;
        #endif
        #ifdef exception_bad_argument_new_define_function_pointer_var
            exception_bad_argument_new_define_function_pointer_var
        #else
            extern exception_bad_argument_new_function_type exception_bad_argument_new = 0;
        #endif
        #ifdef exception_bad_argument_get_argument_name_define_function_pointer_var
            exception_bad_argument_get_argument_name_define_function_pointer_var
        #else
            extern exception_bad_argument_get_argument_name_function_type exception_bad_argument_get_argument_name = 0;
        #endif
        #ifdef exception_bad_argument_copy_define_function_pointer_var
            exception_bad_argument_copy_define_function_pointer_var
        #else
            extern exception_bad_argument_copy_function_type exception_bad_argument_copy = 0;
        #endif
        #ifdef exception_bad_argument_delete_define_function_pointer_var
            exception_bad_argument_delete_define_function_pointer_var
        #else
            extern exception_bad_argument_delete_function_type exception_bad_argument_delete = 0;
        #endif
        #ifdef exception_bad_argument_cast_to_base_define_function_pointer_var
            exception_bad_argument_cast_to_base_define_function_pointer_var
        #else
            extern exception_bad_argument_cast_to_base_function_type exception_bad_argument_cast_to_base = 0;
        #endif
        #ifdef exception_null_argument_new_define_function_pointer_var
            exception_null_argument_new_define_function_pointer_var
        #else
            extern exception_null_argument_new_function_type exception_null_argument_new = 0;
        #endif
        #ifdef exception_null_argument_copy_define_function_pointer_var
            exception_null_argument_copy_define_function_pointer_var
        #else
            extern exception_null_argument_copy_function_type exception_null_argument_copy = 0;
        #endif
        #ifdef exception_null_argument_delete_define_function_pointer_var
            exception_null_argument_delete_define_function_pointer_var
        #else
            extern exception_null_argument_delete_function_type exception_null_argument_delete = 0;
        #endif
        #ifdef exception_null_argument_cast_to_base_define_function_pointer_var
            exception_null_argument_cast_to_base_define_function_pointer_var
        #else
            extern exception_null_argument_cast_to_base_function_type exception_null_argument_cast_to_base = 0;
        #endif
        #ifdef exception_division_by_zero_new_define_function_pointer_var
            exception_division_by_zero_new_define_function_pointer_var
        #else
            extern exception_division_by_zero_new_function_type exception_division_by_zero_new = 0;
        #endif
        #ifdef exception_division_by_zero_copy_define_function_pointer_var
            exception_division_by_zero_copy_define_function_pointer_var
        #else
            extern exception_division_by_zero_copy_function_type exception_division_by_zero_copy = 0;
        #endif
        #ifdef exception_division_by_zero_delete_define_function_pointer_var
            exception_division_by_zero_delete_define_function_pointer_var
        #else
            extern exception_division_by_zero_delete_function_type exception_division_by_zero_delete = 0;
        #endif
        #ifdef exception_division_by_zero_cast_to_base_define_function_pointer_var
            exception_division_by_zero_cast_to_base_define_function_pointer_var
        #else
            extern exception_division_by_zero_cast_to_base_function_type exception_division_by_zero_cast_to_base = 0;
        #endif
        
    #else /* EXCEPTION_CAPI_DEFINE_FUNCTION_POINTERS */
        
        extern exception_get_major_version_function_type exception_get_major_version;
        extern exception_get_minor_version_function_type exception_get_minor_version;
        extern exception_get_patch_version_function_type exception_get_patch_version;
        extern exception_generic_new_function_type exception_generic_new;
        extern exception_generic_get_error_text_function_type exception_generic_get_error_text;
        extern exception_generic_copy_function_type exception_generic_copy;
        extern exception_generic_delete_function_type exception_generic_delete;
        extern exception_bad_argument_new_function_type exception_bad_argument_new;
        extern exception_bad_argument_get_argument_name_function_type exception_bad_argument_get_argument_name;
        extern exception_bad_argument_copy_function_type exception_bad_argument_copy;
        extern exception_bad_argument_delete_function_type exception_bad_argument_delete;
        extern exception_bad_argument_cast_to_base_function_type exception_bad_argument_cast_to_base;
        extern exception_null_argument_new_function_type exception_null_argument_new;
        extern exception_null_argument_copy_function_type exception_null_argument_copy;
        extern exception_null_argument_delete_function_type exception_null_argument_delete;
        extern exception_null_argument_cast_to_base_function_type exception_null_argument_cast_to_base;
        extern exception_division_by_zero_new_function_type exception_division_by_zero_new;
        extern exception_division_by_zero_copy_function_type exception_division_by_zero_copy;
        extern exception_division_by_zero_delete_function_type exception_division_by_zero_delete;
        extern exception_division_by_zero_cast_to_base_function_type exception_division_by_zero_cast_to_base;
        
    #endif /* EXCEPTION_CAPI_DEFINE_FUNCTION_POINTERS */
    
    #ifdef __cplusplus
    
    #include <stdexcept>
    #include <sstream>
    
    #ifdef _WIN32
        #include <Windows.h>
    #else /* _WIN32 */
        #include <dlfcn.h>
    #endif /* _WIN32 */
    
    namespace Exception
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
                #ifdef exception_get_major_version_load_function_call
                    exception_get_major_version_load_function_call
                #else /* exception_get_major_version_load_function_call */
                    load_function<exception_get_major_version_function_type>(exception_get_major_version, "exception_get_major_version");
                #endif /* exception_get_major_version_load_function_call */
                #ifdef exception_get_minor_version_load_function_call
                    exception_get_minor_version_load_function_call
                #else /* exception_get_minor_version_load_function_call */
                    load_function<exception_get_minor_version_function_type>(exception_get_minor_version, "exception_get_minor_version");
                #endif /* exception_get_minor_version_load_function_call */
                #ifdef exception_get_patch_version_load_function_call
                    exception_get_patch_version_load_function_call
                #else /* exception_get_patch_version_load_function_call */
                    load_function<exception_get_patch_version_function_type>(exception_get_patch_version, "exception_get_patch_version");
                #endif /* exception_get_patch_version_load_function_call */
                #ifdef exception_generic_new_load_function_call
                    exception_generic_new_load_function_call
                #else /* exception_generic_new_load_function_call */
                    load_function<exception_generic_new_function_type>(exception_generic_new, "exception_generic_new");
                #endif /* exception_generic_new_load_function_call */
                #ifdef exception_generic_get_error_text_load_function_call
                    exception_generic_get_error_text_load_function_call
                #else /* exception_generic_get_error_text_load_function_call */
                    load_function<exception_generic_get_error_text_function_type>(exception_generic_get_error_text, "exception_generic_get_error_text");
                #endif /* exception_generic_get_error_text_load_function_call */
                #ifdef exception_generic_copy_load_function_call
                    exception_generic_copy_load_function_call
                #else /* exception_generic_copy_load_function_call */
                    load_function<exception_generic_copy_function_type>(exception_generic_copy, "exception_generic_copy");
                #endif /* exception_generic_copy_load_function_call */
                #ifdef exception_generic_delete_load_function_call
                    exception_generic_delete_load_function_call
                #else /* exception_generic_delete_load_function_call */
                    load_function<exception_generic_delete_function_type>(exception_generic_delete, "exception_generic_delete");
                #endif /* exception_generic_delete_load_function_call */
                #ifdef exception_bad_argument_new_load_function_call
                    exception_bad_argument_new_load_function_call
                #else /* exception_bad_argument_new_load_function_call */
                    load_function<exception_bad_argument_new_function_type>(exception_bad_argument_new, "exception_bad_argument_new");
                #endif /* exception_bad_argument_new_load_function_call */
                #ifdef exception_bad_argument_get_argument_name_load_function_call
                    exception_bad_argument_get_argument_name_load_function_call
                #else /* exception_bad_argument_get_argument_name_load_function_call */
                    load_function<exception_bad_argument_get_argument_name_function_type>(exception_bad_argument_get_argument_name, "exception_bad_argument_get_argument_name");
                #endif /* exception_bad_argument_get_argument_name_load_function_call */
                #ifdef exception_bad_argument_copy_load_function_call
                    exception_bad_argument_copy_load_function_call
                #else /* exception_bad_argument_copy_load_function_call */
                    load_function<exception_bad_argument_copy_function_type>(exception_bad_argument_copy, "exception_bad_argument_copy");
                #endif /* exception_bad_argument_copy_load_function_call */
                #ifdef exception_bad_argument_delete_load_function_call
                    exception_bad_argument_delete_load_function_call
                #else /* exception_bad_argument_delete_load_function_call */
                    load_function<exception_bad_argument_delete_function_type>(exception_bad_argument_delete, "exception_bad_argument_delete");
                #endif /* exception_bad_argument_delete_load_function_call */
                #ifdef exception_bad_argument_cast_to_base_load_function_call
                    exception_bad_argument_cast_to_base_load_function_call
                #else /* exception_bad_argument_cast_to_base_load_function_call */
                    load_function<exception_bad_argument_cast_to_base_function_type>(exception_bad_argument_cast_to_base, "exception_bad_argument_cast_to_base");
                #endif /* exception_bad_argument_cast_to_base_load_function_call */
                #ifdef exception_null_argument_new_load_function_call
                    exception_null_argument_new_load_function_call
                #else /* exception_null_argument_new_load_function_call */
                    load_function<exception_null_argument_new_function_type>(exception_null_argument_new, "exception_null_argument_new");
                #endif /* exception_null_argument_new_load_function_call */
                #ifdef exception_null_argument_copy_load_function_call
                    exception_null_argument_copy_load_function_call
                #else /* exception_null_argument_copy_load_function_call */
                    load_function<exception_null_argument_copy_function_type>(exception_null_argument_copy, "exception_null_argument_copy");
                #endif /* exception_null_argument_copy_load_function_call */
                #ifdef exception_null_argument_delete_load_function_call
                    exception_null_argument_delete_load_function_call
                #else /* exception_null_argument_delete_load_function_call */
                    load_function<exception_null_argument_delete_function_type>(exception_null_argument_delete, "exception_null_argument_delete");
                #endif /* exception_null_argument_delete_load_function_call */
                #ifdef exception_null_argument_cast_to_base_load_function_call
                    exception_null_argument_cast_to_base_load_function_call
                #else /* exception_null_argument_cast_to_base_load_function_call */
                    load_function<exception_null_argument_cast_to_base_function_type>(exception_null_argument_cast_to_base, "exception_null_argument_cast_to_base");
                #endif /* exception_null_argument_cast_to_base_load_function_call */
                #ifdef exception_division_by_zero_new_load_function_call
                    exception_division_by_zero_new_load_function_call
                #else /* exception_division_by_zero_new_load_function_call */
                    load_function<exception_division_by_zero_new_function_type>(exception_division_by_zero_new, "exception_division_by_zero_new");
                #endif /* exception_division_by_zero_new_load_function_call */
                #ifdef exception_division_by_zero_copy_load_function_call
                    exception_division_by_zero_copy_load_function_call
                #else /* exception_division_by_zero_copy_load_function_call */
                    load_function<exception_division_by_zero_copy_function_type>(exception_division_by_zero_copy, "exception_division_by_zero_copy");
                #endif /* exception_division_by_zero_copy_load_function_call */
                #ifdef exception_division_by_zero_delete_load_function_call
                    exception_division_by_zero_delete_load_function_call
                #else /* exception_division_by_zero_delete_load_function_call */
                    load_function<exception_division_by_zero_delete_function_type>(exception_division_by_zero_delete, "exception_division_by_zero_delete");
                #endif /* exception_division_by_zero_delete_load_function_call */
                #ifdef exception_division_by_zero_cast_to_base_load_function_call
                    exception_division_by_zero_cast_to_base_load_function_call
                #else /* exception_division_by_zero_cast_to_base_load_function_call */
                    load_function<exception_division_by_zero_cast_to_base_function_type>(exception_division_by_zero_cast_to_base, "exception_division_by_zero_cast_to_base");
                #endif /* exception_division_by_zero_cast_to_base_load_function_call */
                const int major_version = exception_get_major_version();
                const int minor_version = exception_get_minor_version();
                const int patch_version = exception_get_patch_version();
                if (major_version != EXCEPTION_MAJOR_VERSION || minor_version != EXCEPTION_MINOR_VERSION || patch_version != EXCEPTION_PATCH_VERSION)
                {
                    std::stringstream error_message;
                    error_message << "Incorrect version of " << shared_library_name << " library. ";
                    error_message << "Expected version is " << EXCEPTION_MAJOR_VERSION << "." << EXCEPTION_MINOR_VERSION << "." << EXCEPTION_PATCH_VERSION << ". ";
                    error_message << "Found version is " << major_version << "." << minor_version << "." << patch_version << ".";
                    throw std::runtime_error(error_message.str());
                }
            }
            
            Initialization();
            Initialization(const Initialization&);
            #ifdef EXCEPTION_CPP_COMPILER_HAS_MOVE_CONSTRUCTOR_DELETE
                Initialization(Initialization &&) = delete;
            #endif /* EXCEPTION_CPP_COMPILER_HAS_MOVE_CONSTRUCTOR_DELETE */
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
                #ifdef exception_get_major_version_zero_function_pointer
                    exception_get_major_version_zero_function_pointer
                #else /* exception_get_major_version_zero_function_pointer */
                    exception_get_major_version = 0;
                #endif /* exception_get_major_version_zero_function_pointer */
                #ifdef exception_get_minor_version_zero_function_pointer
                    exception_get_minor_version_zero_function_pointer
                #else /* exception_get_minor_version_zero_function_pointer */
                    exception_get_minor_version = 0;
                #endif /* exception_get_minor_version_zero_function_pointer */
                #ifdef exception_get_patch_version_zero_function_pointer
                    exception_get_patch_version_zero_function_pointer
                #else /* exception_get_patch_version_zero_function_pointer */
                    exception_get_patch_version = 0;
                #endif /* exception_get_patch_version_zero_function_pointer */
                #ifdef exception_generic_new_zero_function_pointer
                    exception_generic_new_zero_function_pointer
                #else /* exception_generic_new_zero_function_pointer */
                    exception_generic_new = 0;
                #endif /* exception_generic_new_zero_function_pointer */
                #ifdef exception_generic_get_error_text_zero_function_pointer
                    exception_generic_get_error_text_zero_function_pointer
                #else /* exception_generic_get_error_text_zero_function_pointer */
                    exception_generic_get_error_text = 0;
                #endif /* exception_generic_get_error_text_zero_function_pointer */
                #ifdef exception_generic_copy_zero_function_pointer
                    exception_generic_copy_zero_function_pointer
                #else /* exception_generic_copy_zero_function_pointer */
                    exception_generic_copy = 0;
                #endif /* exception_generic_copy_zero_function_pointer */
                #ifdef exception_generic_delete_zero_function_pointer
                    exception_generic_delete_zero_function_pointer
                #else /* exception_generic_delete_zero_function_pointer */
                    exception_generic_delete = 0;
                #endif /* exception_generic_delete_zero_function_pointer */
                #ifdef exception_bad_argument_new_zero_function_pointer
                    exception_bad_argument_new_zero_function_pointer
                #else /* exception_bad_argument_new_zero_function_pointer */
                    exception_bad_argument_new = 0;
                #endif /* exception_bad_argument_new_zero_function_pointer */
                #ifdef exception_bad_argument_get_argument_name_zero_function_pointer
                    exception_bad_argument_get_argument_name_zero_function_pointer
                #else /* exception_bad_argument_get_argument_name_zero_function_pointer */
                    exception_bad_argument_get_argument_name = 0;
                #endif /* exception_bad_argument_get_argument_name_zero_function_pointer */
                #ifdef exception_bad_argument_copy_zero_function_pointer
                    exception_bad_argument_copy_zero_function_pointer
                #else /* exception_bad_argument_copy_zero_function_pointer */
                    exception_bad_argument_copy = 0;
                #endif /* exception_bad_argument_copy_zero_function_pointer */
                #ifdef exception_bad_argument_delete_zero_function_pointer
                    exception_bad_argument_delete_zero_function_pointer
                #else /* exception_bad_argument_delete_zero_function_pointer */
                    exception_bad_argument_delete = 0;
                #endif /* exception_bad_argument_delete_zero_function_pointer */
                #ifdef exception_bad_argument_cast_to_base_zero_function_pointer
                    exception_bad_argument_cast_to_base_zero_function_pointer
                #else /* exception_bad_argument_cast_to_base_zero_function_pointer */
                    exception_bad_argument_cast_to_base = 0;
                #endif /* exception_bad_argument_cast_to_base_zero_function_pointer */
                #ifdef exception_null_argument_new_zero_function_pointer
                    exception_null_argument_new_zero_function_pointer
                #else /* exception_null_argument_new_zero_function_pointer */
                    exception_null_argument_new = 0;
                #endif /* exception_null_argument_new_zero_function_pointer */
                #ifdef exception_null_argument_copy_zero_function_pointer
                    exception_null_argument_copy_zero_function_pointer
                #else /* exception_null_argument_copy_zero_function_pointer */
                    exception_null_argument_copy = 0;
                #endif /* exception_null_argument_copy_zero_function_pointer */
                #ifdef exception_null_argument_delete_zero_function_pointer
                    exception_null_argument_delete_zero_function_pointer
                #else /* exception_null_argument_delete_zero_function_pointer */
                    exception_null_argument_delete = 0;
                #endif /* exception_null_argument_delete_zero_function_pointer */
                #ifdef exception_null_argument_cast_to_base_zero_function_pointer
                    exception_null_argument_cast_to_base_zero_function_pointer
                #else /* exception_null_argument_cast_to_base_zero_function_pointer */
                    exception_null_argument_cast_to_base = 0;
                #endif /* exception_null_argument_cast_to_base_zero_function_pointer */
                #ifdef exception_division_by_zero_new_zero_function_pointer
                    exception_division_by_zero_new_zero_function_pointer
                #else /* exception_division_by_zero_new_zero_function_pointer */
                    exception_division_by_zero_new = 0;
                #endif /* exception_division_by_zero_new_zero_function_pointer */
                #ifdef exception_division_by_zero_copy_zero_function_pointer
                    exception_division_by_zero_copy_zero_function_pointer
                #else /* exception_division_by_zero_copy_zero_function_pointer */
                    exception_division_by_zero_copy = 0;
                #endif /* exception_division_by_zero_copy_zero_function_pointer */
                #ifdef exception_division_by_zero_delete_zero_function_pointer
                    exception_division_by_zero_delete_zero_function_pointer
                #else /* exception_division_by_zero_delete_zero_function_pointer */
                    exception_division_by_zero_delete = 0;
                #endif /* exception_division_by_zero_delete_zero_function_pointer */
                #ifdef exception_division_by_zero_cast_to_base_zero_function_pointer
                    exception_division_by_zero_cast_to_base_zero_function_pointer
                #else /* exception_division_by_zero_cast_to_base_zero_function_pointer */
                    exception_division_by_zero_cast_to_base = 0;
                #endif /* exception_division_by_zero_cast_to_base_zero_function_pointer */
            }
        };
    }
    
    #endif /* __cplusplus */
    
#endif /* EXCEPTION_CAPI_USE_DYNAMIC_LOADER */

#endif /* EXCEPTION_CAPI_INCLUDED */

