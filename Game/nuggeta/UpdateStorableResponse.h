#ifndef _UPDATESTORABLERESPONSE
#define _UPDATESTORABLERESPONSE
#include "Message.h"
#include <cstring>
#include "UpdateStorableStatus.h"
#include "UpdateStorableResponse.h"
#include "Utils.h"
#include "NUtils.h"

class UpdateStorableResponse :public  Message {
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
        UpdateStorableStatus* _UpdateStorableStatus;
    protected:
        bool _UpdateStorableStatusSet;
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
        UpdateStorableStatus* getUpdateStorableStatus();
    public:
        void setUpdateStorableStatus(UpdateStorableStatus* value);
    public:
        bool isUpdateStorableStatusSet();
    public:
        void unSetUpdateStorableStatus();
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
        UpdateStorableResponse();
    public:
        virtual ~UpdateStorableResponse();
};
#endif // _UPDATESTORABLERESPONSE