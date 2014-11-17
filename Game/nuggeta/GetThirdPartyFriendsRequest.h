#ifndef _GETTHIRDPARTYFRIENDSREQUEST
#define _GETTHIRDPARTYFRIENDSREQUEST
#include "Message.h"
#include <cstring>
#include "ThirdPartySource.h"
#include "GetThirdPartyFriendsRequest.h"
#include "Utils.h"
#include "NUtils.h"

class GetThirdPartyFriendsRequest :public  Message {
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
        ThirdPartySource* _ThirdPartySource;
    protected:
        bool _ThirdPartySourceSet;
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
        ThirdPartySource* getThirdPartySource();
    public:
        void setThirdPartySource(ThirdPartySource* value);
    public:
        bool isThirdPartySourceSet();
    public:
        void unSetThirdPartySource();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        GetThirdPartyFriendsRequest();
    public:
        virtual ~GetThirdPartyFriendsRequest();
};
#endif // _GETTHIRDPARTYFRIENDSREQUEST