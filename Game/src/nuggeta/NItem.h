#ifndef _NITEM
#define _NITEM
#include "Storable.h"
#include <cstring>
#include "NItem.h"
#include "Utils.h"
#include "NUtils.h"

class NItem :public  Storable {
    public:
         static short serializerID;
    protected:
        const char* _storeId;
    protected:
        bool _storeIdSet;
    protected:
        const char* _Id;
    protected:
        bool _IdSet;
    protected:
        const char* _Name;
    protected:
        bool _NameSet;
    protected:
        int _Price;
    protected:
        bool _PriceSet;
    protected:
        bool _Bought;
    protected:
        bool _BoughtSet;
    protected:
        int _Count;
    protected:
        bool _CountSet;
    public:
        const char* getStoreId();
    public:
        void setStoreId(const char* value);
    public:
        bool isstoreIdSet();
    public:
        void unSetstoreId();
    public:
        const char* getId();
    public:
        void setId(const char* value);
    public:
        bool isIdSet();
    public:
        void unSetId();
    public:
        const char* getName();
    public:
        void setName(const char* value);
    public:
        bool isNameSet();
    public:
        void unSetName();
    public:
        int getPrice();
    public:
        void setPrice(int value);
    public:
        bool isPriceSet();
    public:
        void unSetPrice();
    public:
        bool isBought();
    public:
        void setBought(bool value);
    public:
        bool isBoughtSet();
    public:
        void unSetBought();
    public:
        int getCount();
    public:
        void setCount(int value);
    public:
        bool isCountSet();
    public:
        void unSetCount();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NItem();
    public:
        virtual ~NItem();
};
#endif // _NITEM