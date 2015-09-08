#ifndef _T816
#define _T816
#include <cstring>
#include "T809.h"
#include "T810.h"
#include "T808.h"
#include "Serializable.h"
#include <vector>
#include "Utils.h"
#include "NDate.h"
#include "NMatrix2.h"

class T816 {
    public:
         static const char* _x15624;
    private:
        T809 _m15625;
    public:
         static bool _m16603(T810* _d15626, void* _h15627, short _m15628, T808* _b15629);
    public:
         static bool _m16606(T810* factory, void* _d15631, T808* stream);
    public:
         static bool _m16610(T810* _q15637, std::vector<int>* _t15638, int _w15639, T808* _a15640);
    public:
         static bool _m16611(T810* factory, std::vector<short>* _x15646, int property, T808* stream);
    public:
         static bool _m16612(T810* _m15645, std::vector<long long>* _n15654, int _f15647, T808* _a15648);
    public:
         static bool _m16613(T810* factory, std::vector<float>* _j15662, int property, T808* stream);
    public:
         static bool _m16614(T810* _z15653, std::vector<double>* _m15670, int _u15655, T808* _b15656);
    public:
         static bool _m16615(T810* factory, std::vector<bool>* _s15678, int property, T808* stream);
    public:
         static bool _m16609(T810* _m15685, std::vector<const char*>* _n15686, int _u15687, T808* _j15664);
    public:
         static bool _m16602(const char* stringValue, int propertyId, T808* stream);
    public:
         static bool _m17038(const char* _k15696, T808* stream);
    public:
         static bool _m16605(double doubleValue, int propertyId, T808* stream);
    public:
         static bool _m17036(double _a15701, T808* stream);
    public:
         static bool _m16607(int intValue, int propertyId, T808* _l15672);
    public:
         static bool _m16601(int _f15706, T808* stream);
    public:
         static bool _m17039(NDate* _f15708, int propertyId, T808* stream);
    public:
         static bool _m16608(long long longValue, int propertyId, T808* stream);
    public:
         static bool _m17034(long long _i15714, T808* stream);
    public:
         static bool _m17040(unsigned char _p15716, T808* _x15680);
    public:
         static bool _m17041(short shortValue, int propertyId, T808* stream);
    public:
         static bool _m17033(short _y15721, T808* stream);
    public:
         static bool _m17042(float floatValue, int propertyId, T808* stream);
    public:
         static bool _m17035(float _l15726, T808* stream);
    public:
         static bool _m16604(bool booleanValue, int _b15729, T808* _r15688);
    public:
         static bool _m17037(bool _y15731, T808* stream);
    public:
         static bool _m16616(T810* _e15733, NMatrix2* _u15734, int _p15735, T808* _g15736);
    public:
        T816();
    public:
        virtual ~T816();
};
#endif // _T816