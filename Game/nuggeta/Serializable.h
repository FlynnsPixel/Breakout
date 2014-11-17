#ifndef _SERIALIZABLE
#define _SERIALIZABLE
#include <cstring>

class Serializable {
    public:
        virtual short getSerializerID()=0;
    public:
        virtual const char* toString()=0;
    public:
        virtual void* clone()=0;
    public:
        virtual ~Serializable(){};
};
#endif // _SERIALIZABLE