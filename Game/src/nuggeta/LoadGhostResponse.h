#ifndef _LOADGHOSTRESPONSE
#define _LOADGHOSTRESPONSE
#include "Message.h"
#include <cstring>
#include "LoadGhostStatus.h"
#include "NGame.h"
#include "LoadGhostResponse.h"
#include "Utils.h"
#include "NUtils.h"

class LoadGhostResponse :public  Message {
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
        LoadGhostStatus* _LoadGhostStatus;
    protected:
        bool _LoadGhostStatusSet;
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
        LoadGhostStatus* getLoadGhostStatus();
    public:
        void setLoadGhostStatus(LoadGhostStatus* value);
    public:
        bool isLoadGhostStatusSet();
    public:
        void unSetLoadGhostStatus();
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
        LoadGhostResponse();
    public:
        virtual ~LoadGhostResponse();
};
#endif // _LOADGHOSTRESPONSE