#ifndef _PUBLISHFRIENDTHIRDPARTYMESSAGERESPONSE
#define _PUBLISHFRIENDTHIRDPARTYMESSAGERESPONSE
#include "Message.h"
#include <cstring>
#include "PublishFriendThirdPartyMessageStatus.h"
#include "PublishFriendThirdPartyMessageResponse.h"
#include "Utils.h"
#include "NUtils.h"

class PublishFriendThirdPartyMessageResponse :public  Message {
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
        PublishFriendThirdPartyMessageStatus* _PublishFriendThirdPartyMessageStatus;
    protected:
        bool _PublishFriendThirdPartyMessageStatusSet;
    protected:
        const char* _ThirdPartyId;
    protected:
        bool _ThirdPartyIdSet;
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
        PublishFriendThirdPartyMessageStatus* getPublishFriendThirdPartyMessageStatus();
    public:
        void setPublishFriendThirdPartyMessageStatus(PublishFriendThirdPartyMessageStatus* value);
    public:
        bool isPublishFriendThirdPartyMessageStatusSet();
    public:
        void unSetPublishFriendThirdPartyMessageStatus();
    public:
        const char* getThirdPartyId();
    public:
        void setThirdPartyId(const char* value);
    public:
        bool isThirdPartyIdSet();
    public:
        void unSetThirdPartyId();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        PublishFriendThirdPartyMessageResponse();
    public:
        virtual ~PublishFriendThirdPartyMessageResponse();
};
#endif // _PUBLISHFRIENDTHIRDPARTYMESSAGERESPONSE