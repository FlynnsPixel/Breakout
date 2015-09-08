#ifndef _PLAYERTURNNOTIFICATION
#define _PLAYERTURNNOTIFICATION
#include "Message.h"
#include <cstring>
#include "NPlayer.h"
#include "PlayerTurnNotification.h"
#include "Utils.h"
#include "NUtils.h"

class PlayerTurnNotification :public  Message {
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
        NPlayer* _CurrentPlayer;
    protected:
        bool _CurrentPlayerSet;
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
        NPlayer* getCurrentPlayer();
    public:
        void setCurrentPlayer(NPlayer* value);
    public:
        bool isCurrentPlayerSet();
    public:
        void unSetCurrentPlayer();
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
        PlayerTurnNotification();
    public:
        virtual ~PlayerTurnNotification();
};
#endif // _PLAYERTURNNOTIFICATION