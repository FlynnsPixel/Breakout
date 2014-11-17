#if defined(WIN32)

#ifndef _NET_WIN32
#define _NET_WIN32

#include <windows.h>

class NetWin32 {
    public:
         static void openURL(const char* url);
         static void openWebView(const char* url);
         static void closeWebView();
};
#endif // _NET_WIN32

#endif