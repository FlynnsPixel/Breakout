#ifndef _UTILS
#define _UTILS
#include "NDate.h"

class Utils {
    public:
         static int NULL_INTEGER;
    public:
         static short NULL_SHORT;
    public:
         static long long NULL_LONG;
    public:
         static float NULL_FLOAT;
    public:
         static double NULL_DOUBLE;
    public:
         static bool NULL_BOOLEAN;
    public:
         static unsigned char NULL_BYTE;
    public:
         static NDate* NULL_DATE;
    public:
         static bool isNull(void* o);
    public:
         static bool isNullInteger(int i);
    public:
         static bool isNullShort(short s);
    public:
         static bool isNullLong(long long lng);
    public:
         static bool isNullFloat(float f);
    public:
         static bool isNullDouble(double d);
    public:
         static bool isNullBoolean(bool b);
    public:
         static bool isNullByte(unsigned char by);
    public:
         static bool isNullDate(NDate* dt);
		 static bool isNull(const char* o);
    public:
        Utils();
};
#endif // _UTILS
