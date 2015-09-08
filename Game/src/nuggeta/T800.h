#ifndef _T800
#define _T800
#include "T796.h"
#include <cstring>
#include <vector>
#include <algorithm>

class T800 :public  T796 {
    private:
        std::vector<const char*>* _y14689;
    public:
        T800(const char* name, const char* gameId);
    public:
        void _m16925(const char* gameId);
    public:
        void _m16956(const char* _e14690);
    public:
        bool _m16939(const char* _r14692);
    public:
        virtual ~T800();
};
#endif // _T800