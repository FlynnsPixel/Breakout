#ifndef _NFRIENDDEMAND
#define _NFRIENDDEMAND
#include "Storable.h"
#include <cstring>
#include "NPlayer.h"
#include "NFriendDemandStatus.h"
#include "NFriendDemand.h"
#include "Utils.h"
#include "NUtils.h"

class NFriendDemand :public  Storable {
    public:
         static short serializerID;
    protected:
        const char* _storeId;
    protected:
        bool _storeIdSet;
    protected:
        NPlayer* _Emitter;
    protected:
        bool _EmitterSet;
    protected:
        const char* _ReceiverId;
    protected:
        bool _ReceiverIdSet;
    protected:
        const char* _CustomMessage;
    protected:
        bool _CustomMessageSet;
    protected:
        NFriendDemandStatus* _FriendDemandStatus;
    protected:
        bool _FriendDemandStatusSet;
    protected:
        const char* _Id;
    protected:
        bool _IdSet;
    public:
        const char* getStoreId();
    public:
        void setStoreId(const char* value);
    public:
        bool isstoreIdSet();
    public:
        void unSetstoreId();
    public:
        NPlayer* getEmitter();
    public:
        void setEmitter(NPlayer* value);
    public:
        bool isEmitterSet();
    public:
        void unSetEmitter();
    public:
        const char* getReceiverId();
    public:
        void setReceiverId(const char* value);
    public:
        bool isReceiverIdSet();
    public:
        void unSetReceiverId();
    public:
        const char* getCustomMessage();
    public:
        void setCustomMessage(const char* value);
    public:
        bool isCustomMessageSet();
    public:
        void unSetCustomMessage();
    public:
        NFriendDemandStatus* getFriendDemandStatus();
    public:
        void setFriendDemandStatus(NFriendDemandStatus* value);
    public:
        bool isFriendDemandStatusSet();
    public:
        void unSetFriendDemandStatus();
    public:
        const char* getId();
    public:
        void setId(const char* value);
    public:
        bool isIdSet();
    public:
        void unSetId();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NFriendDemand();
    public:
        virtual ~NFriendDemand();
};
#endif // _NFRIENDDEMAND