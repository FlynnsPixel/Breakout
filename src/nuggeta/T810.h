#ifndef _T810
#define _T810
#include "Serializable.h"
#include "T808.h"

class T810 {
    public:
        virtual void _m15769(Serializable* _m14029, T808* buffer)=0;
    public:
        virtual Serializable* _m16049(T808* buffer)=0;
    public:
        virtual Serializable* _m16050(T808* _g14032, short _g14033)=0;
    public:
        virtual ~T810(){};
};
#endif // _T810