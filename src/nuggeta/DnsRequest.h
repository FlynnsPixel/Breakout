#ifndef _DNSREQUEST
#define _DNSREQUEST
#include "Message.h"
#include <cstring>
#include "DnsRequest.h"
#include "Utils.h"
#include "NUtils.h"

class DnsRequest :public  Message {
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
        const char* _GameId;
    protected:
        bool _GameIdSet;
    protected:
        int _GameVersion;
    protected:
        bool _GameVersionSet;
    protected:
        int _GameDeployedVersion;
    protected:
        bool _GameDeployedVersionSet;
    protected:
        const char* _Platform;
    protected:
        bool _PlatformSet;
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
        const char* getGameId();
    public:
        void setGameId(const char* value);
    public:
        bool isGameIdSet();
    public:
        void unSetGameId();
    public:
        int getGameVersion();
    public:
        void setGameVersion(int value);
    public:
        bool isGameVersionSet();
    public:
        void unSetGameVersion();
    public:
        int getGameDeployedVersion();
    public:
        void setGameDeployedVersion(int value);
    public:
        bool isGameDeployedVersionSet();
    public:
        void unSetGameDeployedVersion();
    public:
        const char* getPlatform();
    public:
        void setPlatform(const char* value);
    public:
        bool isPlatformSet();
    public:
        void unSetPlatform();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        DnsRequest();
    public:
        virtual ~DnsRequest();
};
#endif // _DNSREQUEST