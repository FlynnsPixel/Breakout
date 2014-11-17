#ifndef _JOINGAMERESPONSE
#define _JOINGAMERESPONSE
#include "Message.h"
#include <cstring>
#include "JoinGameStatus.h"
#include "NGame.h"
#include "JoinGameResponse.h"
#include "Utils.h"
#include "NUtils.h"

class JoinGameResponse :public  Message {
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
        JoinGameStatus* _JoinGameStatus;
    protected:
        bool _JoinGameStatusSet;
    protected:
        NGame* _Game;
    protected:
        bool _GameSet;
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
        JoinGameStatus* getJoinGameStatus();
    public:
        void setJoinGameStatus(JoinGameStatus* value);
    public:
        bool isJoinGameStatusSet();
    public:
        void unSetJoinGameStatus();
    public:
        NGame* getGame();
    public:
        void setGame(NGame* value);
    public:
        bool isGameSet();
    public:
        void unSetGame();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        JoinGameResponse();
    public:
        virtual ~JoinGameResponse();
};
#endif // _JOINGAMERESPONSE