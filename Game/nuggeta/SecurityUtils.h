#ifndef _SECURITYUTILS
#define _SECURITYUTILS
#include <cstring>

class SecurityUtils {
    public:
         static const char* SHA1(const char* text);
    public:
        SecurityUtils();
};
#endif // _SECURITYUTILS
