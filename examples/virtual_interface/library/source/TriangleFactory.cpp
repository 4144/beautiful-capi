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

#include <iostream>
#include "TriangleFactory.h"

namespace Example
{
    namespace Details
    {
        class Triangle : public Example::IShape
        {
        public:
            Triangle()
            {
                std::cout << "Triangle ctor" << std::endl;
            }

            Triangle(const Triangle& other)
            {
                std::cout << "Triangle copy ctor" << std::endl;
            }

            virtual ~Triangle()
            {
                std::cout << "Triangle dtor" << std::endl;
            }

            virtual void Show() const
            {
                std::cout << "Triangle::Show()" << std::endl;
            }
        };
    }
}

Example::IShape* Example::Details::CreateTriangle()
{
    return new Example::Details::Triangle();
}
