#ifndef _UPDATEPLAYERSTORABLERESPONSE
#define _UPDATEPLAYERSTORABLERESPONSE
#include "Message.h"
#include <cstring>
#include "UpdatePlayerStorableStatus.h"
#include "UpdatePlayerStorableResponse.h"
#include "Utils.h"
#include "NUtils.h"

class UpdatePlayerStorableResponse :public  Message {
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
        UpdatePlayerStorableStatus* _UpdatePlayerStorableStatus;
    protected:
        bool _UpdatePlayerStorableStatusSet;
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
        UpdatePlayerStorableStatus* getUpdatePlayerStorableStatus();
    public:
        void setUpdatePlayerStorableStatus(UpdatePlayerStorableStatus* value);
    public:
        bool isUpdatePlayerStorableStatusSet();
    public:
        void unSetUpdatePlayerStorableStatus();
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
        UpdatePlayerStorableResponse();
    public:
        virtual ~UpdatePlayerStorableResponse();
};
#endif // _UPDATEPLAYERSTORABLERESPONSE