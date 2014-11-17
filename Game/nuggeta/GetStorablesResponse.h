#ifndef _GETSTORABLESRESPONSE
#define _GETSTORABLESRESPONSE
#include "Message.h"
#include <cstring>
#include "GetStorablesStatus.h"
#include "Storable.h"
#include <vector>
#include "GetStorablesResponse.h"
#include "Utils.h"
#include "NUtils.h"

class GetStorablesResponse :public  Message {
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
        GetStorablesStatus* _GetStorablesStatus;
    protected:
        bool _GetStorablesStatusSet;
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
        GetStorablesStatus* getGetStorablesStatus();
    public:
        void setGetStorablesStatus(GetStorablesStatus* value);
    public:
        bool isGetStorablesStatusSet();
    public:
        void unSetGetStorablesStatus();
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
        GetStorablesResponse();
    public:
        virtual ~GetStorablesResponse();
};
#endif // _GETSTORABLESRESPONSE