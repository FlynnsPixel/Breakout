#ifndef _T812
#define _T812
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

class T812 {
    public:
         static Serializable* readObject(T810* factory, T808* stream);
    public:
         static std::vector<int>* _m16319(T810* _u13875, T808* _c13876);
    public:
         static std::vector<short>* _m16320(T810* factory, T808* stream);
    public:
         static std::vector<long long>* _m16321(T810* _e13882, T808* _p13883);
    public:
         static std::vector<float>* _m16322(T810* factory, T808* stream);
    public:
         static std::vector<double>* _m16323(T810* _w13889, T808* _o13890);
    public:
         static std::vector<const char*>* _m16318(T810* factory, T808* stream);
    public:
         static std::vector<bool>* _m16324(T810* factory, T808* stream);
    public:
         static NMatrix2* _m16325(T810* _s13923, T808* _w13897);
    public:
         static const char* _m16310(T808* stream);
    public:
         static NDate* _m16894(T808* stream);
    public:
         static double _m16313(T808* stream);
    public:
         static int _m16308(T808* stream);
    public:
         static long long _m16317(T808* _d13904);
    public:
         static unsigned char _m16895(T808* stream);
    public:
         static short _m16896(T808* stream);
    public:
         static float _m16897(T808* stream);
    public:
         static bool _m16312(T808* stream);
    public:
         static int _m16898(T808* _r13911);
    public:
         static long long _m16899(T808* stream);
    public:
         static short _m16309(T808* stream);
    public:
         static void _m16311(T808* _e13952);
    public:
        T812();
    public:
        virtual ~T812();
};
#endif // _T812