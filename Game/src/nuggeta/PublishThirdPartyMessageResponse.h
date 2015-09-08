#ifndef _PUBLISHTHIRDPARTYMESSAGERESPONSE
#define _PUBLISHTHIRDPARTYMESSAGERESPONSE
#include "Message.h"
#include <cstring>
#include "PublishThirdPartyMessageStatus.h"
#include "PublishThirdPartyMessageResponse.h"
#include "Utils.h"
#include "NUtils.h"

class PublishThirdPartyMessageResponse :public  Message {
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
        PublishThirdPartyMessageStatus* _PublishThirdPartyMessageStatus;
    protected:
        bool _PublishThirdPartyMessageStatusSet;
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
        PublishThirdPartyMessageStatus* getPublishThirdPartyMessageStatus();
    public:
        void setPublishThirdPartyMessageStatus(PublishThirdPartyMessageStatus* value);
    public:
        bool isPublishThirdPartyMessageStatusSet();
    public:
        void unSetPublishThirdPartyMessageStatus();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        PublishThirdPartyMessageResponse();
    public:
        virtual ~PublishThirdPartyMessageResponse();
};
#endif // _PUBLISHTHIRDPARTYMESSAGERESPONSE