#ifndef _ASKFORFRIENDBYLOGINREQUEST
#define _ASKFORFRIENDBYLOGINREQUEST
#include "Message.h"
#include <cstring>
#include "AskForFriendByLoginRequest.h"
#include "Utils.h"
#include "NUtils.h"

class AskForFriendByLoginRequest :public  Message {
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
        const char* _Login;
    protected:
        bool _LoginSet;
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
        const char* getLogin();
    public:
        void setLogin(const char* value);
    public:
        bool isLoginSet();
    public:
        void unSetLogin();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        AskForFriendByLoginRequest();
    public:
        virtual ~AskForFriendByLoginRequest();
};
#endif // _ASKFORFRIENDBYLOGINREQUEST