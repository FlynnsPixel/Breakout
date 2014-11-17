#ifndef _NCOINPACKAGE
#define _NCOINPACKAGE
#include "Storable.h"
#include <cstring>
#include "NCoinPackage.h"
#include "Utils.h"
#include "NUtils.h"

class NCoinPackage :public  Storable {
    public:
         static short serializerID;
    protected:
        const char* _storeId;
    protected:
        bool _storeIdSet;
    protected:
        const char* _CoinPackageId;
    protected:
        bool _CoinPackageIdSet;
    protected:
        long long _VirtualValue;
    protected:
        bool _VirtualValueSet;
    protected:
        const char* _ProductId;
    protected:
        bool _ProductIdSet;
    public:
        const char* getStoreId();
    public:
        void setStoreId(const char* value);
    public:
        bool isstoreIdSet();
    public:
        void unSetstoreId();
    public:
        const char* getCoinPackageId();
    public:
        void setCoinPackageId(const char* value);
    public:
        bool isCoinPackageIdSet();
    public:
        void unSetCoinPackageId();
    public:
        long long getVirtualValue();
    public:
        void setVirtualValue(long long value);
    public:
        bool isVirtualValueSet();
    public:
        void unSetVirtualValue();
    public:
        const char* getProductId();
    public:
        void setProductId(const char* value);
    public:
        bool isProductIdSet();
    public:
        void unSetProductId();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NCoinPackage();
    public:
        virtual ~NCoinPackage();
};
#endif // _NCOINPACKAGE