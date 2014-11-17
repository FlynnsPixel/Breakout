#ifndef _T811
#define _T811
#include "T808.h"
#include "ByteBuffer.h"
#include "CppByteArray.h"
#include <cstring>
#include "ByteUtil.h"
#include "MemoryManagement.h"

class T811 :public  T808 {
    private:
        ByteBuffer* _g7199;
    public:
        T811(ByteBuffer* _n15590);
    public:
        //@Override
        void _m16032(int _e15591, short _l15592);
    public:
        //@Override
        void _m16029(int _x15593);
    public:
        //@Override
        void _m16948();
    public:
        //@Override
        void _m16947(int length);
    public:
        //@Override
        int _m16986();
    public:
        //@Override
        int _m16028();
    public:
        //@Override
        short _m16316();
    public:
        CppByteArray* _m17032(int _s15594);
    public:
        double _m16892();
    public:
        //@Override
        const char* _m16893();
    public:
        int _m16315();
    public:
        long long int _m16890();
    public:
        unsigned char _m16314();
    public:
        float _m16891();
    public:
        void _m16035(short _r15599);
    public:
        void _m16036(unsigned char _b15600);
    public:
        void _m16038(int _b15601, int _q15602);
    public:
        //@Override
        void _m16991(const char* _f15603);
    public:
        void _m16992(double value);
    public:
        void _m16993(int value);
    public:
        void _m16994(long long value);
    public:
        void _m16995(float _o15609);
    public:
        ByteBuffer* _m17030();
    public:
        virtual ~T811();
};
#endif // _T811