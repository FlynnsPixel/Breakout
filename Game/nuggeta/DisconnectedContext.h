#ifndef _DISCONNECTEDCONTEXT
#define _DISCONNECTEDCONTEXT
#include "Message.h"
#include <cstring>
#include "NPlayer.h"
#include <vector>
#include "DisconnectedContext.h"
#include "Utils.h"
#include "NUtils.h"

class DisconnectedContext :public  Message {
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
        std::vector<NPlayer*>* _Participants;
    protected:
        bool _ParticipantsSet;
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
        std::vector<NPlayer*>* getParticipants();
    public:
        void setParticipants(std::vector<NPlayer*>* value);
    public:
        bool isParticipantsSet();
    public:
        void unSetParticipants();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        DisconnectedContext();
    public:
        virtual ~DisconnectedContext();
};
#endif // _DISCONNECTEDCONTEXT