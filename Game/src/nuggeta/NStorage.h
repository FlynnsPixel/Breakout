#ifndef _NSTORAGE
#define _NSTORAGE

#if defined(__ANDROID__)
#include "Java_com_nuggeta_cpp_android_NuggetaHelper.h"
#endif

#if defined(__APPLE__)
#include "TargetConditionals.h"
#endif


#if TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR
	//#warning "iphone detected"
	#include "NStorageImpl.h"
#elif TARGET_OS_MAC
	//#warning "mac detected"
	#include "NStorageImpl.h"
#endif

#if defined(WIN32)
#include "NStorageWin32.h"
#endif


#include <cstring>



class NStorage {
    public:
         static const char* getItem(const char* key);
    public:
         static void setItem(const char* key, const char* value);
    public:
        NStorage();
};
#endif // _NSTORAGE
