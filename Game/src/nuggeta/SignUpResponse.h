#ifndef _SIGNUPRESPONSE
#define _SIGNUPRESPONSE
#include "Message.h"
#include <cstring>
#include "SignUpStatus.h"
#include "NPlayer.h"
#include "SignUpResponse.h"
#include "Utils.h"
#include "NUtils.h"

class SignUpResponse :public  Message {
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
        SignUpStatus* _SignUpStatus;
    protected:
        bool _SignUpStatusSet;
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
        SignUpStatus* getSignUpStatus();
    public:
        void setSignUpStatus(SignUpStatus* value);
    public:
        bool isSignUpStatusSet();
    public:
        void unSetSignUpStatus();
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
        SignUpResponse();
    public:
        virtual ~SignUpResponse();
};
#endif // _SIGNUPRESPONSE