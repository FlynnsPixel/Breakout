#ifndef _REMOVESTORABLERESPONSE
#define _REMOVESTORABLERESPONSE
#include "Message.h"
#include <cstring>
#include "RemoveStorableStatus.h"
#include "RemoveStorableResponse.h"
#include "Utils.h"
#include "NUtils.h"

class RemoveStorableResponse :public  Message {
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
        RemoveStorableStatus* _RemoveStorableStatus;
    protected:
        bool _RemoveStorableStatusSet;
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
        RemoveStorableStatus* getRemoveStorableStatus();
    public:
        void setRemoveStorableStatus(RemoveStorableStatus* value);
    public:
        bool isRemoveStorableStatusSet();
    public:
        void unSetRemoveStorableStatus();
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
        RemoveStorableResponse();
    public:
        virtual ~RemoveStorableResponse();
};
#endif // _REMOVESTORABLERESPONSE