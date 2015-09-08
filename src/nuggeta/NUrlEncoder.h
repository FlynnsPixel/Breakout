#ifndef _NURLENCODER
#define _NURLENCODER
#include <cstring>

class NUrlEncoder {
    public:
         static const char* encode(const char* url, const char* enc);
    public:
         static const char* decode(const char* url, const char* enc);
    public:
        NUrlEncoder();
};
#endif // _NURLENCODER
