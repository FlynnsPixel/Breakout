#ifndef _GETPLAYERSTORABLESRESPONSE
#define _GETPLAYERSTORABLESRESPONSE
#include "Message.h"
#include <cstring>
#include "GetPlayerStorablesStatus.h"
#include "Storable.h"
#include <vector>
#include "GetPlayerStorablesResponse.h"
#include "Utils.h"
#include "NUtils.h"

class GetPlayerStorablesResponse :public  Message {
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
        GetPlayerStorablesStatus* _GetPlayerStorablesStatus;
    protected:
        bool _GetPlayerStorablesStatusSet;
    protected:
        std::vector<Storable*>* _Storables;
    protected:
        bool _StorablesSet;
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
        GetPlayerStorablesStatus* getGetPlayerStorablesStatus();
    public:
        void setGetPlayerStorablesStatus(GetPlayerStorablesStatus* value);
    public:
        bool isGetPlayerStorablesStatusSet();
    public:
        void unSetGetPlayerStorablesStatus();
    public:
        std::vector<Storable*>* getStorables();
    public:
        void setStorables(std::vector<Storable*>* value);
    public:
        bool isStorablesSet();
    public:
        void unSetStorables();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        GetPlayerStorablesResponse();
    public:
        virtual ~GetPlayerStorablesResponse();
};
#endif // _GETPLAYERSTORABLESRESPONSE