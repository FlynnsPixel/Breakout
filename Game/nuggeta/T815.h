#ifndef _T815
#define _T815
#include "Serializable.h"
#include "T810.h"
#include "T808.h"
#include "T809.h"
#include <exception>
#include <vector>
#include "Utils.h"
#include <cstring>
#include "NMatrix2.h"
#include "NDate.h"

class T815 {
    public:
         static Serializable* _m16617(T810* _l14237, T808* _e14238);
    public:
         static std::vector<int>* _m16883(T810* _w14242, T808* _v14243);
    public:
         static std::vector<short>* _m16884(T810* factory, T808* stream);
    public:
         static std::vector<long long>* _m16885(T810* _y14249, T808* _x14250);
    public:
         static std::vector<float>* _m16886(T810* factory, T808* stream);
    public:
         static std::vector<double>* _m16887(T810* _g14256, T808* _l14257);
    public:
         static std::vector<const char*>* _m16882(T810* factory, T808* stream);
    public:
         static std::vector<bool>* _m16888(T810* factory, T808* stream);
    public:
         static NMatrix2* _m16889(T810* _b14290, T808* _o14264);
    public:
         static const char* _m16877(T808* stream);
    public:
         static NDate* _m16941(T808* stream);
    public:
         static double _m16880(T808* stream);
    public:
         static int _m16875(T808* stream);
    public:
         static long long _m16881(T808* _s14271);
    public:
         static unsigned char _m16942(T808* stream);
    public:
         static short _m16943(T808* stream);
    public:
         static float _m16944(T808* stream);
    public:
         static bool _m16879(T808* stream);
    public:
         static int _m16945(T808* _u14278);
    public:
         static long long int _m16946(T808* stream);
    public:
         static short _m16876(T808* stream);
    public:
         static void _m16878(T808* _l14319);
    public:
        T815();
    public:
        virtual ~T815();
};
#endif // _T815