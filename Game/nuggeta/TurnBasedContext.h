#ifndef _TURNBASEDCONTEXT
#define _TURNBASEDCONTEXT
#include "Message.h"
#include <cstring>
#include "NPlayer.h"
#include "TurnBasedContext.h"
#include "Utils.h"
#include "NUtils.h"

class TurnBasedContext :public  Message {
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
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        TurnBasedContext();
    public:
        virtual ~TurnBasedContext();
};
#endif // _TURNBASEDCONTEXT