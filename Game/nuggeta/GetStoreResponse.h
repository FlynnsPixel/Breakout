#ifndef _GETSTORERESPONSE
#define _GETSTORERESPONSE
#include "Message.h"
#include <cstring>
#include "GetStoreStatus.h"
#include "NStore.h"
#include "GetStoreResponse.h"
#include "Utils.h"
#include "NUtils.h"

class GetStoreResponse :public  Message {
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
        GetStoreStatus* _GetStoreStatus;
    protected:
        bool _GetStoreStatusSet;
    protected:
        NStore* _Store;
    protected:
        bool _StoreSet;
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
        GetStoreStatus* getGetStoreStatus();
    public:
        void setGetStoreStatus(GetStoreStatus* value);
    public:
        bool isGetStoreStatusSet();
    public:
        void unSetGetStoreStatus();
    public:
        NStore* getStore();
    public:
        void setStore(NStore* value);
    public:
        bool isStoreSet();
    public:
        void unSetStore();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        GetStoreResponse();
    public:
        virtual ~GetStoreResponse();
};
#endif // _GETSTORERESPONSE