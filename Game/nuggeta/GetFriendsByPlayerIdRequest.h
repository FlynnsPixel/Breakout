#ifndef _GETFRIENDSBYPLAYERIDREQUEST
#define _GETFRIENDSBYPLAYERIDREQUEST
#include "Message.h"
#include <cstring>
#include "GetFriendsByPlayerIdRequest.h"
#include "Utils.h"
#include "NUtils.h"

class GetFriendsByPlayerIdRequest :public  Message {
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
        const char* _PlayerId;
    protected:
        bool _PlayerIdSet;
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
        const char* getPlayerId();
    public:
        void setPlayerId(const char* value);
    public:
        bool isPlayerIdSet();
    public:
        void unSetPlayerId();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        GetFriendsByPlayerIdRequest();
    public:
        virtual ~GetFriendsByPlayerIdRequest();
};
#endif // _GETFRIENDSBYPLAYERIDREQUEST