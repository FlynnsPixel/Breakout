#ifndef _REMOVEPLAYERSTORABLERESPONSE
#define _REMOVEPLAYERSTORABLERESPONSE
#include "Message.h"
#include <cstring>
#include "RemovePlayerStorableStatus.h"
#include "RemovePlayerStorableResponse.h"
#include "Utils.h"
#include "NUtils.h"

class RemovePlayerStorableResponse :public  Message {
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
        RemovePlayerStorableStatus* _RemovePlayerStorableStatus;
    protected:
        bool _RemovePlayerStorableStatusSet;
    protected:
        const char* _StoreId;
    protected:
        bool _StoreIdSet;
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
        RemovePlayerStorableStatus* getRemovePlayerStorableStatus();
    public:
        void setRemovePlayerStorableStatus(RemovePlayerStorableStatus* value);
    public:
        bool isRemovePlayerStorableStatusSet();
    public:
        void unSetRemovePlayerStorableStatus();
    public:
        const char* getStoreId();
    public:
        void setStoreId(const char* value);
    public:
        bool isStoreIdSet();
    public:
        void unSetStoreId();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        RemovePlayerStorableResponse();
    public:
        virtual ~RemovePlayerStorableResponse();
};
#endif // _REMOVEPLAYERSTORABLERESPONSE