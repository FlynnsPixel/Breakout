#ifndef _GETSTOREREQUEST
#define _GETSTOREREQUEST
#include "Message.h"
#include <cstring>
#include "GetStoreRequest.h"
#include "Utils.h"
#include "NUtils.h"

class GetStoreRequest :public  Message {
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
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        GetStoreRequest();
    public:
        virtual ~GetStoreRequest();
};
#endif // _GETSTOREREQUEST