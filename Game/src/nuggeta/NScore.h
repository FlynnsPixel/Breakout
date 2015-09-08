#ifndef _NSCORE
#define _NSCORE
#include "Storable.h"
#include <cstring>
#include "NScore.h"
#include "Utils.h"
#include "NUtils.h"

class NScore :public  Storable {
    public:
         static short serializerID;
    protected:
        const char* _storeId;
    protected:
        bool _storeIdSet;
    protected:
        double _Value;
    protected:
        bool _ValueSet;
    public:
        const char* getStoreId();
    public:
        void setStoreId(const char* value);
    public:
        bool isstoreIdSet();
    public:
        void unSetstoreId();
    public:
        double getValue();
    public:
        void setValue(double value);
    public:
        bool isValueSet();
    public:
        void unSetValue();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NScore();
    public:
        virtual ~NScore();
};
#endif // _NSCORE