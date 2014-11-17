#ifndef _STORABLE
#define _STORABLE
#include "Serializable.h"
#include <cstring>

class Storable :public  Serializable {
    public:
        virtual void setStoreId(const char* storeId)=0;
    public:
        virtual const char* getStoreId()=0;
    public:
        virtual ~Storable(){};
};
#endif // _STORABLE