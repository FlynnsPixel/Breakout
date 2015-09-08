#ifndef _SAVEPLAYERSTORABLERESPONSE
#define _SAVEPLAYERSTORABLERESPONSE
#include "Message.h"
#include <cstring>
#include "SavePlayerStorableStatus.h"
#include "SavePlayerStorableResponse.h"
#include "Utils.h"
#include "NUtils.h"

class SavePlayerStorableResponse :public  Message {
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
        SavePlayerStorableStatus* _SavePlayerStorableStatus;
    protected:
        bool _SavePlayerStorableStatusSet;
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
        SavePlayerStorableStatus* getSavePlayerStorableStatus();
    public:
        void setSavePlayerStorableStatus(SavePlayerStorableStatus* value);
    public:
        bool isSavePlayerStorableStatusSet();
    public:
        void unSetSavePlayerStorableStatus();
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
        SavePlayerStorableResponse();
    public:
        virtual ~SavePlayerStorableResponse();
};
#endif // _SAVEPLAYERSTORABLERESPONSE