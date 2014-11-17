#ifndef _STOPGAMERESPONSE
#define _STOPGAMERESPONSE
#include "Message.h"
#include <cstring>
#include "StopGameStatus.h"
#include "StopGameResponse.h"
#include "Utils.h"
#include "NUtils.h"

class StopGameResponse :public  Message {
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
        StopGameStatus* _StopGameStatus;
    protected:
        bool _StopGameStatusSet;
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
        StopGameStatus* getStopGameStatus();
    public:
        void setStopGameStatus(StopGameStatus* value);
    public:
        bool isStopGameStatusSet();
    public:
        void unSetStopGameStatus();
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
        StopGameResponse();
    public:
        virtual ~StopGameResponse();
};
#endif // _STOPGAMERESPONSE