#ifndef _T792
#define _T792
#include "T793.h"
#include "CppIntArray.h"
#include "CppByteArray.h"
#include <cmath>
#include <vector>

class T792 {
    private:
        int _t15019;
    private:
        int _b15020;
    private:
        int _b15021;
    private:
        T793* _b15022;
    private:
        CppIntArray* _c15023;
    private:
        CppIntArray* _j15024;
    private:
        CppIntArray* _r15025;
    private:
        CppByteArray* _m16997(CppByteArray* _b15026, CppByteArray* _h15027);
    private:
        T793* _m16998(CppByteArray* _l15030);
    private:
        CppByteArray* _m16999(CppByteArray* _r15035);
    private:
        CppByteArray* _m17000(CppByteArray* _f15038);
    private:
        T793* _m17001(T793* state, T793* _c15041, int _v15042);
    private:
        T793* _m17002(T793* state);
    private:
        T793* _m17003(T793* state);
    private:
        T793* _m17004(T793* state);
    private:
        T793* _m17005(T793* _i15046);
    private:
        T793* _m17006(T793* s);
    private:
        T793* _m17008(T793* _o15071);
    public:
        unsigned char _m17007(unsigned char _f15077, unsigned char _j15078);
    public:
        CppByteArray* _m17009(CppByteArray* _in);
    public:
        CppByteArray* _m17010(CppByteArray* _in);
    public:
        CppByteArray* _m17011(CppByteArray* _in, CppByteArray* key);
    public:
        CppByteArray* _m17013(CppByteArray* _v15104, CppByteArray* _v15105);
    private:
         static CppByteArray* _m17014(CppByteArray* _u15110);
    public:
         static void _m17012(CppByteArray* _l15114, int _p15115, CppByteArray* _i15116, int _h15117, int _j15118);
    public:
        void _m17015();
    public:
        T792();
    public:
        virtual ~T792();
};
#endif // _T792