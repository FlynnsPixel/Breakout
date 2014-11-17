#ifndef _NPLAYERWALLET
#define _NPLAYERWALLET
#include "Storable.h"
#include <cstring>
#include "NPlayerWallet.h"
#include "Utils.h"
#include "NUtils.h"

class NPlayerWallet :public  Storable {
    public:
         static short serializerID;
    protected:
        const char* _storeId;
    protected:
        bool _storeIdSet;
    protected:
        int _NbCoins;
    protected:
        bool _NbCoinsSet;
    public:
        const char* getStoreId();
    public:
        void setStoreId(const char* value);
    public:
        bool isstoreIdSet();
    public:
        void unSetstoreId();
    public:
        int getNbCoins();
    public:
        void setNbCoins(int value);
    public:
        bool isNbCoinsSet();
    public:
        void unSetNbCoins();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NPlayerWallet();
    public:
        virtual ~NPlayerWallet();
};
#endif // _NPLAYERWALLET