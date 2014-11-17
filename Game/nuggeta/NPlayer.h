#ifndef _NPLAYER
#define _NPLAYER
#include "Storable.h"
#include <cstring>
#include "ThirdPartySource.h"
#include "NPlayer.h"
#include "Utils.h"
#include "NUtils.h"

class NPlayer :public  Storable {
    public:
         static short serializerID;
    protected:
        const char* _storeId;
    protected:
        bool _storeIdSet;
    protected:
        const char* _ID;
    protected:
        bool _IDSet;
    protected:
        const char* _AccessToken;
    protected:
        bool _AccessTokenSet;
    protected:
        const char* _Name;
    protected:
        bool _NameSet;
    protected:
        bool _Connected;
    protected:
        bool _ConnectedSet;
    protected:
        ThirdPartySource* _LoginSource;
    protected:
        bool _LoginSourceSet;
    protected:
        const char* _ThirdPartyId;
    protected:
        bool _ThirdPartyIdSet;
    protected:
        const char* _Lang;
    protected:
        bool _LangSet;
    public:
        const char* getStoreId();
    public:
        void setStoreId(const char* value);
    public:
        bool isstoreIdSet();
    public:
        void unSetstoreId();
    public:
        const char* getID();
    public:
        void setID(const char* value);
    public:
        bool isIDSet();
    public:
        void unSetID();
    public:
        const char* getAccessToken();
    public:
        void setAccessToken(const char* value);
    public:
        bool isAccessTokenSet();
    public:
        void unSetAccessToken();
    public:
        const char* getName();
    public:
        void setName(const char* value);
    public:
        bool isNameSet();
    public:
        void unSetName();
    public:
        bool isConnected();
    public:
        void setConnected(bool value);
    public:
        bool isConnectedSet();
    public:
        void unSetConnected();
    public:
        ThirdPartySource* getLoginSource();
    public:
        void setLoginSource(ThirdPartySource* value);
    public:
        bool isLoginSourceSet();
    public:
        void unSetLoginSource();
    public:
        const char* getThirdPartyId();
    public:
        void setThirdPartyId(const char* value);
    public:
        bool isThirdPartyIdSet();
    public:
        void unSetThirdPartyId();
    public:
        const char* getLang();
    public:
        void setLang(const char* value);
    public:
        bool isLangSet();
    public:
        void unSetLang();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NPlayer();
    public:
        virtual ~NPlayer();
};
#endif // _NPLAYER