#ifndef _BUYITEMRESPONSE
#define _BUYITEMRESPONSE
#include "Message.h"
#include <cstring>
#include "BuyItemStatus.h"
#include "NItem.h"
#include "BuyItemResponse.h"
#include "Utils.h"
#include "NUtils.h"

class BuyItemResponse :public  Message {
    public:
         static short serializerID;
    protected:
        const char* _MessageId;
    protected:
        bool _MessageIdSet;
    protected:
        const char* _RequestId;
    protected:
        bool _RequestIdSet;
    protected:
        BuyItemStatus* _BuyItemStatus;
    protected:
        bool _BuyItemStatusSet;
    protected:
        NItem* _BoughtItem;
    protected:
        bool _BoughtItemSet;
    protected:
        int _Quantity;
    protected:
        bool _QuantitySet;
    public:
        const char* getMessageId();
    public:
        void setMessageId(const char* value);
    public:
        bool isMessageIdSet();
    public:
        void unSetMessageId();
    public:
        const char* getRequestId();
    public:
        void setRequestId(const char* value);
    public:
        bool isRequestIdSet();
    public:
        void unSetRequestId();
    public:
        BuyItemStatus* getBuyItemStatus();
    public:
        void setBuyItemStatus(BuyItemStatus* value);
    public:
        bool isBuyItemStatusSet();
    public:
        void unSetBuyItemStatus();
    public:
        NItem* getBoughtItem();
    public:
        void setBoughtItem(NItem* value);
    public:
        bool isBoughtItemSet();
    public:
        void unSetBoughtItem();
    public:
        int getQuantity();
    public:
        void setQuantity(int value);
    public:
        bool isQuantitySet();
    public:
        void unSetQuantity();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        BuyItemResponse();
    public:
        virtual ~BuyItemResponse();
};
#endif // _BUYITEMRESPONSE