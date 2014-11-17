#ifndef _HANDSHAKERESPONSE
#define _HANDSHAKERESPONSE
#include "Message.h"
#include <cstring>
#include "ExecutionStatus.h"
#include "HandshakeState.h"
#include "PlayerSessionType.h"
#include "NPlayer.h"
#include "HandshakeResponse.h"
#include "Utils.h"
#include "NUtils.h"

class HandshakeResponse :public  Message {
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
        ExecutionStatus* _ExecutionStatus;
    protected:
        bool _ExecutionStatusSet;
    protected:
        HandshakeState* _Reason;
    protected:
        bool _ReasonSet;
    protected:
        const char* _playerIdsStored;
    protected:
        bool _playerIdsStoredSet;
    protected:
        const char* _sessionId;
    protected:
        bool _sessionIdSet;
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
        ExecutionStatus* getExecutionStatus();
    public:
        void setExecutionStatus(ExecutionStatus* value);
    public:
        bool isExecutionStatusSet();
    public:
        void unSetExecutionStatus();
    public:
        HandshakeState* getReason();
    public:
        void setReason(HandshakeState* value);
    public:
        bool isReasonSet();
    public:
        void unSetReason();
    public:
        const char* getPlayerIdsStored();
    public:
        void setPlayerIdsStored(const char* value);
    public:
        bool isplayerIdsStoredSet();
    public:
        void unSetplayerIdsStored();
    public:
        const char* getSessionId();
    public:
        void setSessionId(const char* value);
    public:
        bool issessionIdSet();
    public:
        void unSetsessionId();
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
        HandshakeResponse();
    public:
        virtual ~HandshakeResponse();
};
#endif // _HANDSHAKERESPONSE