#ifndef _THIRDPARTYLOGINRESPONSE
#define _THIRDPARTYLOGINRESPONSE
#include "Message.h"
#include <cstring>
#include "ThirdPartyLoginStatus.h"
#include "NPlayer.h"
#include "ThirdPartyLoginResponse.h"
#include "Utils.h"
#include "NUtils.h"

class ThirdPartyLoginResponse :public  Message {
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
        ThirdPartyLoginStatus* _ThirdPartyLoginStatus;
    protected:
        bool _ThirdPartyLoginStatusSet;
    protected:
        NPlayer* _Player;
    protected:
        bool _PlayerSet;
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
        ThirdPartyLoginStatus* getThirdPartyLoginStatus();
    public:
        void setThirdPartyLoginStatus(ThirdPartyLoginStatus* value);
    public:
        bool isThirdPartyLoginStatusSet();
    public:
        void unSetThirdPartyLoginStatus();
    public:
        NPlayer* getPlayer();
    public:
        void setPlayer(NPlayer* value);
    public:
        bool isPlayerSet();
    public:
        void unSetPlayer();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        ThirdPartyLoginResponse();
    public:
        virtual ~ThirdPartyLoginResponse();
};
#endif // _THIRDPARTYLOGINRESPONSE