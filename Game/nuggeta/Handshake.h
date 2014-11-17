#ifndef _HANDSHAKE
#define _HANDSHAKE
#include "Message.h"
#include <cstring>
#include "HandshakeState.h"
#include "Handshake.h"
#include "Utils.h"
#include "NUtils.h"

class Handshake :public  Message {
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
        const char* _Version;
    protected:
        bool _VersionSet;
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
        const char* _platform;
    protected:
        bool _platformSet;
    protected:
        const char* _spId;
    protected:
        bool _spIdSet;
    protected:
        const char* _debugSpId;
    protected:
        bool _debugSpIdSet;
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
        const char* getVersion();
    public:
        void setVersion(const char* value);
    public:
        bool isVersionSet();
    public:
        void unSetVersion();
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
        const char* getPlatform();
    public:
        void setPlatform(const char* value);
    public:
        bool isplatformSet();
    public:
        void unSetplatform();
    public:
        const char* getSpId();
    public:
        void setSpId(const char* value);
    public:
        bool isspIdSet();
    public:
        void unSetspId();
    public:
        const char* getDebugSpId();
    public:
        void setDebugSpId(const char* value);
    public:
        bool isdebugSpIdSet();
    public:
        void unSetdebugSpId();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        Handshake();
    public:
        virtual ~Handshake();
};
#endif // _HANDSHAKE