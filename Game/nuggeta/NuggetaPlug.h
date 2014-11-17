#ifndef _NUGGETAPLUG
#define _NUGGETAPLUG
#include "T801.h"
#include <cstring>
#include "NLoggerFactory.h"
#include "T798.h"

class NuggetaPlug :public  T801 {
    public:
        NuggetaPlug(const char* url);
    public:
        virtual ~NuggetaPlug();
};
#endif // _NUGGETAPLUG