#ifndef _LOGINRESPONSE
#define _LOGINRESPONSE
#include "Message.h"
#include <cstring>
#include "LoginStatus.h"
#include "NPlayer.h"
#include "LoginResponse.h"
#include "Utils.h"
#include "NUtils.h"

class LoginResponse :public  Message {
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
        LoginStatus* _LoginStatus;
    protected:
        bool _LoginStatusSet;
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
        LoginStatus* getLoginStatus();
    public:
        void setLoginStatus(LoginStatus* value);
    public:
        bool isLoginStatusSet();
    public:
        void unSetLoginStatus();
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
        LoginResponse();
    public:
        virtual ~LoginResponse();
};
#endif // _LOGINRESPONSE