#ifndef _GETINVITATIONSREQUEST
#define _GETINVITATIONSREQUEST
#include "Message.h"
#include <cstring>
#include "NuggetaQuery.h"
#include "GetInvitationsRequest.h"
#include "Utils.h"
#include "NUtils.h"

class GetInvitationsRequest :public  Message {
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
        NuggetaQuery* _NuggetaQuery;
    protected:
        bool _NuggetaQuerySet;
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
        NuggetaQuery* getNuggetaQuery();
    public:
        void setNuggetaQuery(NuggetaQuery* value);
    public:
        bool isNuggetaQuerySet();
    public:
        void unSetNuggetaQuery();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        GetInvitationsRequest();
    public:
        virtual ~GetInvitationsRequest();
};
#endif // _GETINVITATIONSREQUEST