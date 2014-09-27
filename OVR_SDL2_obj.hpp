// Copyright (c) 2014 Robert Kooima
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.

#ifndef OVR_SDL2_OBJ_HPP
#define OVR_SDL2_OBJ_HPP

#include "OVR_SDL2_nav.hpp"
#include "obj.h"

//------------------------------------------------------------------------------

class OVR_SDL2_obj : public OVR_SDL2_nav
{
public:

    OVR_SDL2_obj(const char *);

    virtual ~OVR_SDL2_obj();

protected:

    virtual void draw();

private:

    obj   *object;
    GLuint program;

    GLint ProjectionMatrixLocation;
    GLint ModelViewMatrixLocation;
    GLint NormalMatrixLocation;
    GLint LightPositionLocation;
    GLint AmbientLightLocation;
};

//------------------------------------------------------------------------------

#endif
