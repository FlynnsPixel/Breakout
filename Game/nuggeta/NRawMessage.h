#ifndef _NRAWMESSAGE
#define _NRAWMESSAGE
#include "GameMessage.h"
#include <cstring>
#include "NRawMessage.h"
#include "Utils.h"
#include "NUtils.h"

class NRawMessage :public  GameMessage {
    public:
         static short serializerID;
    protected:
        const char* _MessageId;
    protected:
        bool _MessageIdSet;
    protected:
        const char* _SenderId;
    protected:
        bool _SenderIdSet;
    protected:
        const char* _storeId;
    protected:
        bool _storeIdSet;
    protected:
        const char* _RequestId;
    protected:
        bool _RequestIdSet;
    protected:
        const char* _gameId;
    protected:
        bool _gameIdSet;
    protected:
        const char* _content;
    protected:
        bool _contentSet;
    public:
        const char* getMessageId();
    public:
        void setMessageId(const char* value);
    public:
        bool isMessageIdSet();
    public:
        void unSetMessageId();
    public:
        const char* getSenderId();
    public:
        void setSenderId(const char* value);
    public:
        bool isSenderIdSet();
    public:
        void unSetSenderId();
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
        const char* getGameId();
    public:
        void setGameId(const char* value);
    public:
        bool isgameIdSet();
    public:
        void unSetgameId();
    public:
        const char* getContent();
    public:
        void setContent(const char* value);
    public:
        bool iscontentSet();
    public:
        void unSetcontent();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NRawMessage();
    public:
        virtual ~NRawMessage();
};
#endif // _NRAWMESSAGE