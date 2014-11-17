#ifndef _BUYITEMSTATUS
#define _BUYITEMSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "BuyItemStatus.h"
#include <vector>
#include <cstring>

class BuyItemStatus :public  Serializable {
    private:
         static std::vector<BuyItemStatus*>* _values;
    public:
         static BuyItemStatus* SUCCESS;
    public:
         static BuyItemStatus* NOT_ENOUGH_COINS;
    public:
         static BuyItemStatus* UNKNOWN_ITEM;
    public:
         static BuyItemStatus* INVALID_CALL;
    public:
         static BuyItemStatus* INTERNAL_ERROR;
    public:
         static std::vector<BuyItemStatus*>* values();
    private:
        int _value;
    private:
        const char* _name;
    public:
        int getValue();
    public:
        const char* name();
    public:
        int ordinal();
    private:
        BuyItemStatus(const char* name, int value);
    public:
         static BuyItemStatus* fromValue(int value);
    public:
         static BuyItemStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~BuyItemStatus();
};
#endif // _BUYITEMSTATUS