#ifndef _PLAYERMESSAGE
#define _PLAYERMESSAGE
#include "Message.h"
#include <cstring>
#include "PlayerMessage.h"
#include "Utils.h"
#include "NUtils.h"

class PlayerMessage :public  Message {
    public:
         static short serializerID;
    protected:
        const char* _MessageId;
    protected:
        bool _MessageIdSet;
    protected:
        const char* _storeId;
    protected:
        bool _storeIdSet;
    protected:
        const char* _RequestId;
    protected:
        bool _RequestIdSet;
    protected:
        const char* _playerId;
    protected:
        bool _playerIdSet;
    protected:
        Message* _message;
    protected:
        bool _messageSet;
    public:
        const char* getMessageId();
    public:
        void setMessageId(const char* value);
    public:
        bool isMessageIdSet();
    public:
        void unSetMessageId();
    public:
        const char* getStoreId();
    public:
        void setStoreId(const char* value);
    public:
        bool isstoreIdSet();
    public:
        void unSetstoreId();
    public:
        const char* getRequestId();
    public:
        void setRequestId(const char* value);
    public:
        bool isRequestIdSet();
    public:
        void unSetRequestId();
    public:
        const char* getPlayerId();
    public:
        void setPlayerId(const char* value);
    public:
        bool isplayerIdSet();
    public:
        void unSetplayerId();
    public:
        Message* getMessage();
    public:
        void setMessage(Message* value);
    public:
        bool ismessageSet();
    public:
        void unSetmessage();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        PlayerMessage();
    public:
        virtual ~PlayerMessage();
};
#endif // _PLAYERMESSAGE