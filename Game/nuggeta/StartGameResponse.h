#ifndef _STARTGAMERESPONSE
#define _STARTGAMERESPONSE
#include "Message.h"
#include <cstring>
#include "StartGameStatus.h"
#include "StartGameResponse.h"
#include "Utils.h"
#include "NUtils.h"

class StartGameResponse :public  Message {
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
        StartGameStatus* _StartGameStatus;
    protected:
        bool _StartGameStatusSet;
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
        StartGameStatus* getStartGameStatus();
    public:
        void setStartGameStatus(StartGameStatus* value);
    public:
        bool isStartGameStatusSet();
    public:
        void unSetStartGameStatus();
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
        StartGameResponse();
    public:
        virtual ~StartGameResponse();
};
#endif // _STARTGAMERESPONSE