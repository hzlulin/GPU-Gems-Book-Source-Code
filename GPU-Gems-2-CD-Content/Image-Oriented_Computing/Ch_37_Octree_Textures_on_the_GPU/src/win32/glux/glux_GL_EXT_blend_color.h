
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:33 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_EXT_blend_color__
#define __GLUX_GL_EXT_blend_color__

GLUX_NEW_PLUGIN(GL_EXT_blend_color);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_CONSTANT_COLOR_EXT
#  define GL_CONSTANT_COLOR_EXT 0x8001
#endif
#ifndef GL_ONE_MINUS_CONSTANT_COLOR_EXT
#  define GL_ONE_MINUS_CONSTANT_COLOR_EXT 0x8002
#endif
#ifndef GL_CONSTANT_ALPHA_EXT
#  define GL_CONSTANT_ALPHA_EXT 0x8003
#endif
#ifndef GL_ONE_MINUS_CONSTANT_ALPHA_EXT
#  define GL_ONE_MINUS_CONSTANT_ALPHA_EXT 0x8004
#endif
#ifndef GL_BLEND_COLOR_EXT
#  define GL_BLEND_COLOR_EXT 0x8005
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glBlendColorEXT
typedef void (APIENTRYP PFNGLUXBLENDCOLOREXTPROC) (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glBlendColorEXT
extern PFNGLUXBLENDCOLOREXTPROC glBlendColorEXT;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------