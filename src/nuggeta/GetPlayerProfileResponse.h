#ifndef _GETPLAYERPROFILERESPONSE
#define _GETPLAYERPROFILERESPONSE
#include "Message.h"
#include <cstring>
#include "GetPlayerProfileStatus.h"
#include "NPlayerProfile.h"
#include "GetPlayerProfileResponse.h"
#include "Utils.h"
#include "NUtils.h"

class GetPlayerProfileResponse :public  Message {
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
        GetPlayerProfileStatus* _GetPlayerProfileStatus;
    protected:
        bool _GetPlayerProfileStatusSet;
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
        GetPlayerProfileStatus* getGetPlayerProfileStatus();
    public:
        void setGetPlayerProfileStatus(GetPlayerProfileStatus* value);
    public:
        bool isGetPlayerProfileStatusSet();
    public:
        void unSetGetPlayerProfileStatus();
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
        GetPlayerProfileResponse();
    public:
        virtual ~GetPlayerProfileResponse();
};
#endif // _GETPLAYERPROFILERESPONSE