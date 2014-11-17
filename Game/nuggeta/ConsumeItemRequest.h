#ifndef _CONSUMEITEMREQUEST
#define _CONSUMEITEMREQUEST
#include "Message.h"
#include <cstring>
#include "ConsumeItemRequest.h"
#include "Utils.h"
#include "NUtils.h"

class ConsumeItemRequest :public  Message {
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
        const char* _ItemId;
    protected:
        bool _ItemIdSet;
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
        const char* getItemId();
    public:
        void setItemId(const char* value);
    public:
        bool isItemIdSet();
    public:
        void unSetItemId();
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
        ConsumeItemRequest();
    public:
        virtual ~ConsumeItemRequest();
};
#endif // _CONSUMEITEMREQUEST