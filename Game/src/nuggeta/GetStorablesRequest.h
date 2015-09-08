#ifndef _GETSTORABLESREQUEST
#define _GETSTORABLESREQUEST
#include "Message.h"
#include <cstring>
#include "NuggetaQuery.h"
#include "GetStorablesRequest.h"
#include "Utils.h"
#include "NUtils.h"

class GetStorablesRequest :public  Message {
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
        NuggetaQuery* _DbQuery;
    protected:
        bool _DbQuerySet;
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
        NuggetaQuery* getDbQuery();
    public:
        void setDbQuery(NuggetaQuery* value);
    public:
        bool isDbQuerySet();
    public:
        void unSetDbQuery();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        GetStorablesRequest();
    public:
        virtual ~GetStorablesRequest();
};
#endif // _GETSTORABLESREQUEST