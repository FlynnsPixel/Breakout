#ifndef _CONSUMEITEMRESPONSE
#define _CONSUMEITEMRESPONSE
#include "Message.h"
#include <cstring>
#include "ConsumeItemStatus.h"
#include "NItem.h"
#include "ConsumeItemResponse.h"
#include "Utils.h"
#include "NUtils.h"

class ConsumeItemResponse :public  Message {
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
        ConsumeItemStatus* _ConsumeItemStatus;
    protected:
        bool _ConsumeItemStatusSet;
    protected:
        NItem* _ConsumedItem;
    protected:
        bool _ConsumedItemSet;
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
        ConsumeItemStatus* getConsumeItemStatus();
    public:
        void setConsumeItemStatus(ConsumeItemStatus* value);
    public:
        bool isConsumeItemStatusSet();
    public:
        void unSetConsumeItemStatus();
    public:
        NItem* getConsumedItem();
    public:
        void setConsumedItem(NItem* value);
    public:
        bool isConsumedItemSet();
    public:
        void unSetConsumedItem();
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
        ConsumeItemResponse();
    public:
        virtual ~ConsumeItemResponse();
};
#endif // _CONSUMEITEMRESPONSE