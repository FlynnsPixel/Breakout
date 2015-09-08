#ifndef _PUBLISHFRIENDTHIRDPARTYMESSAGEREQUEST
#define _PUBLISHFRIENDTHIRDPARTYMESSAGEREQUEST
#include "Message.h"
#include <cstring>
#include "ThirdPartySource.h"
#include "PublishFriendThirdPartyMessageRequest.h"
#include "Utils.h"
#include "NUtils.h"

class PublishFriendThirdPartyMessageRequest :public  Message {
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
        const char* _Title;
    protected:
        bool _TitleSet;
    protected:
        const char* _Message;
    protected:
        bool _MessageSet;
    protected:
        const char* _PictureUrl;
    protected:
        bool _PictureUrlSet;
    protected:
        const char* _Link;
    protected:
        bool _LinkSet;
    protected:
        const char* _ThirdPartyId;
    protected:
        bool _ThirdPartyIdSet;
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
        const char* getTitle();
    public:
        void setTitle(const char* value);
    public:
        bool isTitleSet();
    public:
        void unSetTitle();
    public:
        const char* getMessage();
    public:
        void setMessage(const char* value);
    public:
        bool isMessageSet();
    public:
        void unSetMessage();
    public:
        const char* getPictureUrl();
    public:
        void setPictureUrl(const char* value);
    public:
        bool isPictureUrlSet();
    public:
        void unSetPictureUrl();
    public:
        const char* getLink();
    public:
        void setLink(const char* value);
    public:
        bool isLinkSet();
    public:
        void unSetLink();
    public:
        const char* getThirdPartyId();
    public:
        void setThirdPartyId(const char* value);
    public:
        bool isThirdPartyIdSet();
    public:
        void unSetThirdPartyId();
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
        PublishFriendThirdPartyMessageRequest();
    public:
        virtual ~PublishFriendThirdPartyMessageRequest();
};
#endif // _PUBLISHFRIENDTHIRDPARTYMESSAGEREQUEST