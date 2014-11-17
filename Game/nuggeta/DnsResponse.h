#ifndef _DNSRESPONSE
#define _DNSRESPONSE
#include "Message.h"
#include <cstring>
#include "DnsStatus.h"
#include "StartDetails.h"
#include "DnsResponse.h"
#include "Utils.h"
#include "NUtils.h"

class DnsResponse :public  Message {
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
        const char* _IpAddress;
    protected:
        bool _IpAddressSet;
    protected:
        int _TcpPort;
    protected:
        bool _TcpPortSet;
    protected:
        DnsStatus* _DnsStatus;
    protected:
        bool _DnsStatusSet;
    protected:
        StartDetails* _StartDetails;
    protected:
        bool _StartDetailsSet;
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
        const char* getIpAddress();
    public:
        void setIpAddress(const char* value);
    public:
        bool isIpAddressSet();
    public:
        void unSetIpAddress();
    public:
        int getTcpPort();
    public:
        void setTcpPort(int value);
    public:
        bool isTcpPortSet();
    public:
        void unSetTcpPort();
    public:
        DnsStatus* getDnsStatus();
    public:
        void setDnsStatus(DnsStatus* value);
    public:
        bool isDnsStatusSet();
    public:
        void unSetDnsStatus();
    public:
        StartDetails* getStartDetails();
    public:
        void setStartDetails(StartDetails* value);
    public:
        bool isStartDetailsSet();
    public:
        void unSetStartDetails();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        DnsResponse();
    public:
        virtual ~DnsResponse();
};
#endif // _DNSRESPONSE