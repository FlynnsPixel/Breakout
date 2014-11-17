#ifndef _LOADGAMERESPONSE
#define _LOADGAMERESPONSE
#include "Message.h"
#include <cstring>
#include "LoadGameStatus.h"
#include "NGame.h"
#include "LoadGameResponse.h"
#include "Utils.h"
#include "NUtils.h"

class LoadGameResponse :public  Message {
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
        LoadGameStatus* _LoadGameStatus;
    protected:
        bool _LoadGameStatusSet;
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
        LoadGameStatus* getLoadGameStatus();
    public:
        void setLoadGameStatus(LoadGameStatus* value);
    public:
        bool isLoadGameStatusSet();
    public:
        void unSetLoadGameStatus();
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
        LoadGameResponse();
    public:
        virtual ~LoadGameResponse();
};
#endif // _LOADGAMERESPONSE