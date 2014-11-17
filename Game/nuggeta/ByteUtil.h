#ifndef _BYTEUTIL
#define _BYTEUTIL
#include "CppByteArray.h"
#include <cstring>


class ByteUtil {
    public:
         static CppByteArray* getBytes(const char* str);
    public:
         static const char* getString(CppByteArray* strBytes);
    public:
        ByteUtil();
};
#endif // _BYTEUTIL
