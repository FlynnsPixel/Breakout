#ifndef _GAMESTATECHANGE
#define _GAMESTATECHANGE
#include "Message.h"
#include <cstring>
#include "GameRunningState.h"
#include "GameStateChange.h"
#include "Utils.h"
#include "NUtils.h"

class GameStateChange :public  Message {
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
        const char* _GameId;
    protected:
        bool _GameIdSet;
    protected:
        GameRunningState* _GameRunningState;
    protected:
        bool _GameRunningStateSet;
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
        const char* getGameId();
    public:
        void setGameId(const char* value);
    public:
        bool isGameIdSet();
    public:
        void unSetGameId();
    public:
        GameRunningState* getGameRunningState();
    public:
        void setGameRunningState(GameRunningState* value);
    public:
        bool isGameRunningStateSet();
    public:
        void unSetGameRunningState();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        GameStateChange();
    public:
        virtual ~GameStateChange();
};
#endif // _GAMESTATECHANGE