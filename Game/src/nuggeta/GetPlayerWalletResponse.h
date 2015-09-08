#ifndef _GETPLAYERWALLETRESPONSE
#define _GETPLAYERWALLETRESPONSE
#include "Message.h"
#include <cstring>
#include "GetPlayerWalletStatus.h"
#include "NPlayerWallet.h"
#include "GetPlayerWalletResponse.h"
#include "Utils.h"
#include "NUtils.h"

class GetPlayerWalletResponse :public  Message {
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
        GetPlayerWalletStatus* _GetPlayerWalletStatus;
    protected:
        bool _GetPlayerWalletStatusSet;
    protected:
        NPlayerWallet* _Wallet;
    protected:
        bool _WalletSet;
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
        GetPlayerWalletStatus* getGetPlayerWalletStatus();
    public:
        void setGetPlayerWalletStatus(GetPlayerWalletStatus* value);
    public:
        bool isGetPlayerWalletStatusSet();
    public:
        void unSetGetPlayerWalletStatus();
    public:
        NPlayerWallet* getWallet();
    public:
        void setWallet(NPlayerWallet* value);
    public:
        bool isWalletSet();
    public:
        void unSetWallet();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        GetPlayerWalletResponse();
    public:
        virtual ~GetPlayerWalletResponse();
};
#endif // _GETPLAYERWALLETRESPONSE