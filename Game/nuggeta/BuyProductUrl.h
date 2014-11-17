#ifndef _BUYPRODUCTURL
#define _BUYPRODUCTURL
#include "Message.h"
#include <cstring>
#include "BuyProductUrl.h"
#include "Utils.h"
#include "NUtils.h"

class BuyProductUrl :public  Message {
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
        const char* _url;
    protected:
        bool _urlSet;
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
        const char* getUrl();
    public:
        void setUrl(const char* value);
    public:
        bool isurlSet();
    public:
        void unSeturl();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        BuyProductUrl();
    public:
        virtual ~BuyProductUrl();
};
#endif // _BUYPRODUCTURL