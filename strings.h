/*
 * All text/strings primitives.
 *
 * This file is part of PjS Project.
 * All rights reserved , distributed under GPLv3+ ,
 * if not explicitly stated otherwise (see www.gnu.org for details).
 */


#ifdef MODULES
module;
#include <string>           // for string
export module pjs.primitives.strings;
#endif

#ifndef PJS__PRIMITIVES__STRINGS_H
#define PJS__PRIMITIVES__STRINGS_H
#ifndef MODULES
#include <string>           // for string
#endif


namespace pjs {
#ifdef MODULES
export{
#endif


//
using CHAR = char;


// Universal RW string
using STRING = std::string;


// Read-only string
using RO_STRING = const std::string;


#ifdef MODULES
}
#endif
}
#endif