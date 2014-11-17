#ifndef _PLATFORM
#define _PLATFORM
#include <cstring>

#if defined(__APPLE__)
#include "TargetConditionals.h"
#endif



class Platform {
    public:
         static const char* get();
    public:
         static bool isHTMLPlatform();
    public:
        Platform();
};
#endif // _PLATFORM
