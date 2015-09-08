#ifndef _STARTRESPONSE
#define _STARTRESPONSE
#include "Message.h"
#include <cstring>
#include "StartStatus.h"
#include "StartDetails.h"
#include "PlayerSessionType.h"
#include "NPlayer.h"
#include "StartResponse.h"
#include "Utils.h"
#include "NUtils.h"

class StartResponse :public  Message {
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
        StartStatus* _StartStatus;
    protected:
        bool _StartStatusSet;
    protected:
        StartDetails* _StartDetails;
    protected:
        bool _StartDetailsSet;
    protected:
        PlayerSessionType* _PlayerSessionType;
    protected:
        bool _PlayerSessionTypeSet;
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
        StartStatus* getStartStatus();
    public:
        void setStartStatus(StartStatus* value);
    public:
        bool isStartStatusSet();
    public:
        void unSetStartStatus();
    public:
        StartDetails* getStartDetails();
    public:
        void setStartDetails(StartDetails* value);
    public:
        bool isStartDetailsSet();
    public:
        void unSetStartDetails();
    public:
        PlayerSessionType* getPlayerSessionType();
    public:
        void setPlayerSessionType(PlayerSessionType* value);
    public:
        bool isPlayerSessionTypeSet();
    public:
        void unSetPlayerSessionType();
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
        StartResponse();
    public:
        virtual ~StartResponse();
};
#endif // _STARTRESPONSE