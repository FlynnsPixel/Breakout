#ifndef _NARRAYS
#define _NARRAYS
#include "CppByteArray.h"

#include <functional>
#include <memory>

class NArrays {
    public:
         static void arraycopy(CppByteArray* src, int srcPos, CppByteArray* dest, int destPos, int length);
    public:
        NArrays();
};
#endif //  _NARRAYS
