#ifndef _CREATEGAMERESPONSE
#define _CREATEGAMERESPONSE
#include "Message.h"
#include <cstring>
#include "CreateGameStatus.h"
#include "CreateGameResponse.h"
#include "Utils.h"
#include "NUtils.h"

class CreateGameResponse :public  Message {
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
        CreateGameStatus* _CreateGameStatus;
    protected:
        bool _CreateGameStatusSet;
    protected:
        const char* _GameId;
    protected:
        bool _GameIdSet;
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
        CreateGameStatus* getCreateGameStatus();
    public:
        void setCreateGameStatus(CreateGameStatus* value);
    public:
        bool isCreateGameStatusSet();
    public:
        void unSetCreateGameStatus();
    public:
        const char* getGameId();
    public:
        void setGameId(const char* value);
    public:
        bool isGameIdSet();
    public:
        void unSetGameId();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        CreateGameResponse();
    public:
        virtual ~CreateGameResponse();
};
#endif // _CREATEGAMERESPONSE