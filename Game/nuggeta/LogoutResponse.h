#ifndef _LOGOUTRESPONSE
#define _LOGOUTRESPONSE
#include "Message.h"
#include <cstring>
#include "LogoutStatus.h"
#include "NPlayer.h"
#include "LogoutResponse.h"
#include "Utils.h"
#include "NUtils.h"

class LogoutResponse :public  Message {
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
        LogoutStatus* _LogoutStatus;
    protected:
        bool _LogoutStatusSet;
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
        LogoutStatus* getLogoutStatus();
    public:
        void setLogoutStatus(LogoutStatus* value);
    public:
        bool isLogoutStatusSet();
    public:
        void unSetLogoutStatus();
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
        LogoutResponse();
    public:
        virtual ~LogoutResponse();
};
#endif // _LOGOUTRESPONSE