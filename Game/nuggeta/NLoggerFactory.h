#ifndef _NLOGGERFACTORY
#define _NLOGGERFACTORY
#include "NLogger.h"
#include <cstring>

#if defined(__ANDROID__)
#include "NLoggerImplAndroid.h"
#endif

#if defined(__APPLE__)
# include "TargetConditionals.h"
#endif

#if defined(TARGET_OS_IPHONE ) || defined(TARGET_IPHONE_SIMULATOR) || defined(WIN32)
# include "NLoggerImpl.h"
#endif



class  NLoggerFactory {
    public:
         static NLogger* getLogger(const char* className);
    public:
        NLoggerFactory();
};
#endif // _NLOGGERFACTORY
