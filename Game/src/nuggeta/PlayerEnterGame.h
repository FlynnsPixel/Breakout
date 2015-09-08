#ifndef _PLAYERENTERGAME
#define _PLAYERENTERGAME
#include "Message.h"
#include <cstring>
#include "NPlayer.h"
#include "PlayerEnterGame.h"
#include "Utils.h"
#include "NUtils.h"

class PlayerEnterGame :public  Message {
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
        const char* getGameId();
    public:
        void setGameId(const char* value);
    public:
        bool isGameIdSet();
    public:
        void unSetGameId();
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
        PlayerEnterGame();
    public:
        virtual ~PlayerEnterGame();
};
#endif // _PLAYERENTERGAME