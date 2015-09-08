#ifndef _SETPLAYERNAMEREQUEST
#define _SETPLAYERNAMEREQUEST
#include "Message.h"
#include <cstring>
#include "SetPlayerNameRequest.h"
#include "Utils.h"
#include "NUtils.h"

class SetPlayerNameRequest :public  Message {
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
        const char* _Name;
    protected:
        bool _NameSet;
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
        const char* getName();
    public:
        void setName(const char* value);
    public:
        bool isNameSet();
    public:
        void unSetName();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        SetPlayerNameRequest();
    public:
        virtual ~SetPlayerNameRequest();
};
#endif // _SETPLAYERNAMEREQUEST