#ifndef _SAVEPLAYERPROFILEREQUEST
#define _SAVEPLAYERPROFILEREQUEST
#include "Message.h"
#include <cstring>
#include "NPlayerProfile.h"
#include "SavePlayerProfileRequest.h"
#include "Utils.h"
#include "NUtils.h"

class SavePlayerProfileRequest :public  Message {
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
        NPlayerProfile* _Profile;
    protected:
        bool _ProfileSet;
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
        NPlayerProfile* getProfile();
    public:
        void setProfile(NPlayerProfile* value);
    public:
        bool isProfileSet();
    public:
        void unSetProfile();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        SavePlayerProfileRequest();
    public:
        virtual ~SavePlayerProfileRequest();
};
#endif // _SAVEPLAYERPROFILEREQUEST