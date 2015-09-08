#ifndef _GAMEMESSAGE
#define _GAMEMESSAGE
#include "Message.h"
#include <cstring>

class GameMessage :public  Message {
    public:
        virtual void setGameId(const char* gameId)=0;
    public:
        virtual const char* getGameId()=0;
    public:
        virtual void setSenderId(const char* senderId)=0;
    public:
        virtual const char* getSenderId()=0;
    public:
        virtual ~GameMessage(){};
};
#endif // _GAMEMESSAGE