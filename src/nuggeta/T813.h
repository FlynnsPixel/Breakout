#ifndef _T813
#define _T813
#include <cstring>
#include "T810.h"
#include "T808.h"
#include "T809.h"
#include "Serializable.h"
#include <vector>
#include "Utils.h"
#include "NDate.h"
#include "NMatrix2.h"

class T813 {
    public:
         static const char* _e15273;
    public:
         static bool _m16031(T810* _t15274, void* _m15275, short _d15276, T808* _y15277);
    public:
         static bool _m16037(T810* factory, void* _g15279, T808* stream);
    public:
         static bool _m16042(T810* _i15285, std::vector<int>* _o15286, int _e15287, T808* _n15288);
    public:
         static bool _m16043(T810* factory, std::vector<short>* _t15294, int property, T808* stream);
    public:
         static bool _m16044(T810* _o15293, std::vector<long long>* _m15302, int _z15295, T808* _v15296);
    public:
         static bool _m16045(T810* factory, std::vector<float>* _h15310, int property, T808* stream);
    public:
         static bool _m16046(T810* _h15301, std::vector<double>* _n15318, int _e15303, T808* _p15304);
    public:
         static bool _m16047(T810* factory, std::vector<bool>* _w15326, int property, T808* stream);
    public:
         static bool _m16041(T810* _d15333, std::vector<const char*>* _b15334, int _t15335, T808* _n15312);
    public:
         static bool _m16030(const char* stringValue, int propertyId, T808* stream);
    public:
         static bool _m17022(const char* _e15344, T808* stream);
    public:
         static bool _m16034(double doubleValue, int propertyId, T808* stream);
    public:
         static bool _m17020(double _x15349, T808* stream);
    public:
         static bool _m16039(int intValue, int propertyId, T808* _w15320);
    public:
         static bool _m16027(int _h15354, T808* stream);
    public:
         static bool _m17023(NDate* _v15356, int propertyId, T808* stream);
    public:
         static bool _m16040(long long longValue, int propertyId, T808* stream);
    public:
         static bool _m17018(long long _q15362, T808* stream);
    public:
         static bool _m17024(unsigned char _s15364, T808* _g15328);
    public:
         static bool _m17025(short shortValue, int propertyId, T808* stream);
    public:
         static bool _m17017(short _l15369, T808* stream);
    public:
         static bool _m17026(float floatValue, int propertyId, T808* stream);
    public:
         static bool _m17019(float _u15374, T808* stream);
    public:
         static bool _m16033(bool booleanValue, int _c15377, T808* _e15336);
    public:
         static bool _m17021(bool _w15379, T808* stream);
    public:
         static bool _m16048(T810* _q15381, NMatrix2* _c15382, int _j15383, T808* _x15384);
    public:
        T813();
    public:
        virtual ~T813();
};
#endif // _T813