#ifndef _NET
#define _NET
#if defined(__ANDROID__)
#include "Java_com_nuggeta_cpp_android_NuggetaHelper.h"
#endif

#if defined(__APPLE__)
#include "TargetConditionals.h"
#endif


#if TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR
	//#warning "iphone detected"
#include "NetImpl.h"
#elif TARGET_OS_MAC
	//#warning "mac detected"
#include "NetImpl.h"
#endif

#if defined(WIN32)
#include "NetWin32.h"
#endif



#include <cstring>


class Net {
    public:
         static void openURL(const char* url);
         static void openWebView(const char* url);
         static void closeWebView();
};
#endif // _NET
