#ifndef _T817
#define _T817
#include "T808.h"
#include "StringBuilder.h"
#include <cstring>
#include <sstream>
#include "NUtils.h"

class T817 :public  T808 {
    private:
        StringBuilder* _c14927;
    private:
        int _z14928;
    private:
        int _r14929;
    public:
        T817(const char* data);
    public:
        const char* _m16984(int _v14930);
    public:
        void _m16985(const char* _s14932);
    public:
        //@Override
        const char* toString();
    public:
        //@Override
        int _m16028();
    public:
        //@Override
        int _m16986();
    public:
        //@Override
        void _m16029(int _m14933);
    public:
        //@Override
        void _m16948();
    public:
        //@Override
        void _m16947(int length);
    public:
        //@Override
        void _m16032(int position, short _l14938);
    protected:
        void _m16987(int _p14939, const char* strValue);
    public:
        void _m16988(const char* _x14945);
    public:
        //@Override
        short _m16316();
    public:
        //@Override
        double _m16892();
    public:
        //@Override
        int _m16315();
    public:
        //@Override
        long long int _m16890();
    public:
        //@Override
        const char* _m16893();
    public:
        //@Override
        unsigned char _m16314();
    public:
        //@Override
        float _m16891();
    public:
        //@Override
        void _m16035(short _g14946);
    public:
        //@Override
        void _m16991(const char* _q14947);
    public:
        //@Override
        void _m16036(unsigned char _l14948);
    public:
        //@Override
        void _m16038(int _w14949, int intValue);
    public:
        //@Override
        void _m16992(double _c14951);
    public:
        //@Override
        void _m16993(int _i14952);
    public:
        //@Override
        void _m16994(long long _o14953);
    public:
        //@Override
        void _m16995(float _q14954);
    protected:
        void _m16989(int length);
    public:
        const char* _m16996(const char* _a14958, int _k14959);
    public:
        const char* _m16990();
    public:
        virtual ~T817();
};
#endif // _T817