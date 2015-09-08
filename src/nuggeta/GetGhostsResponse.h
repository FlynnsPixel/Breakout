#ifndef _GETGHOSTSRESPONSE
#define _GETGHOSTSRESPONSE
#include "Message.h"
#include <cstring>
#include "GetGhostsStatus.h"
#include "NGame.h"
#include <vector>
#include "GetGhostsResponse.h"
#include "Utils.h"
#include "NUtils.h"

class GetGhostsResponse :public  Message {
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
        GetGhostsStatus* _GetGhostsStatus;
    protected:
        bool _GetGhostsStatusSet;
    protected:
        std::vector<NGame*>* _Ghosts;
    protected:
        bool _GhostsSet;
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
        GetGhostsStatus* getGetGhostsStatus();
    public:
        void setGetGhostsStatus(GetGhostsStatus* value);
    public:
        bool isGetGhostsStatusSet();
    public:
        void unSetGetGhostsStatus();
    public:
        std::vector<NGame*>* getGhosts();
    public:
        void setGhosts(std::vector<NGame*>* value);
    public:
        bool isGhostsSet();
    public:
        void unSetGhosts();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        GetGhostsResponse();
    public:
        virtual ~GetGhostsResponse();
};
#endif // _GETGHOSTSRESPONSE