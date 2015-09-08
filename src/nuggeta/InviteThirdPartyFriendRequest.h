#ifndef _INVITETHIRDPARTYFRIENDREQUEST
#define _INVITETHIRDPARTYFRIENDREQUEST
#include "Message.h"
#include <cstring>
#include "ThirdPartySource.h"
#include "InviteThirdPartyFriendRequest.h"
#include "Utils.h"
#include "NUtils.h"

class InviteThirdPartyFriendRequest :public  Message {
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
        const char* _ThirdPartyId;
    protected:
        bool _ThirdPartyIdSet;
    protected:
        const char* _Title;
    protected:
        bool _TitleSet;
    protected:
        const char* _InviteMessage;
    protected:
        bool _InviteMessageSet;
    protected:
        const char* _PictureUrl;
    protected:
        bool _PictureUrlSet;
    protected:
        const char* _Link;
    protected:
        bool _LinkSet;
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
        const char* getThirdPartyId();
    public:
        void setThirdPartyId(const char* value);
    public:
        bool isThirdPartyIdSet();
    public:
        void unSetThirdPartyId();
    public:
        const char* getTitle();
    public:
        void setTitle(const char* value);
    public:
        bool isTitleSet();
    public:
        void unSetTitle();
    public:
        const char* getInviteMessage();
    public:
        void setInviteMessage(const char* value);
    public:
        bool isInviteMessageSet();
    public:
        void unSetInviteMessage();
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
        InviteThirdPartyFriendRequest();
    public:
        virtual ~InviteThirdPartyFriendRequest();
};
#endif // _INVITETHIRDPARTYFRIENDREQUEST