#ifndef _SAVEPLAYERPROFILERESPONSE
#define _SAVEPLAYERPROFILERESPONSE
#include "Message.h"
#include <cstring>
#include "SavePlayerProfileStatus.h"
#include "SavePlayerProfileResponse.h"
#include "Utils.h"
#include "NUtils.h"

class SavePlayerProfileResponse :public  Message {
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
        SavePlayerProfileStatus* _SavePlayerProfileStatus;
    protected:
        bool _SavePlayerProfileStatusSet;
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
        SavePlayerProfileStatus* getSavePlayerProfileStatus();
    public:
        void setSavePlayerProfileStatus(SavePlayerProfileStatus* value);
    public:
        bool isSavePlayerProfileStatusSet();
    public:
        void unSetSavePlayerProfileStatus();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        SavePlayerProfileResponse();
    public:
        virtual ~SavePlayerProfileResponse();
};
#endif // _SAVEPLAYERPROFILERESPONSE