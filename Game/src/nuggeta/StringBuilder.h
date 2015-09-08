#ifndef _STRINGBUILDER
#define _STRINGBUILDER
#include <cstring>


class StringBuilder {
    public:
        StringBuilder(const char* str);
    public:
        const char* substring(int _position, int i);
    public:
        void appendString(const char* s);
    public:
        int length1();
    public:
        void replace(int i, int j, const char* str);
    public:
        void insert(int _position, unsigned char c);
    public:
        //@Override
        const char* toString();
};
#endif // _STRINGBUILDER
