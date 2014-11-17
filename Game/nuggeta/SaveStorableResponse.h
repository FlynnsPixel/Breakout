#ifndef _SAVESTORABLERESPONSE
#define _SAVESTORABLERESPONSE
#include "Message.h"
#include <cstring>
#include "SaveStorableStatus.h"
#include "SaveStorableResponse.h"
#include "Utils.h"
#include "NUtils.h"

class SaveStorableResponse :public  Message {
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
        SaveStorableStatus* _SaveStorableStatus;
    protected:
        bool _SaveStorableStatusSet;
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
        SaveStorableStatus* getSaveStorableStatus();
    public:
        void setSaveStorableStatus(SaveStorableStatus* value);
    public:
        bool isSaveStorableStatusSet();
    public:
        void unSetSaveStorableStatus();
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
        SaveStorableResponse();
    public:
        virtual ~SaveStorableResponse();
};
#endif // _SAVESTORABLERESPONSE