#ifndef _NPLAYERPROFILE
#define _NPLAYERPROFILE
#include "Storable.h"
#include <cstring>
#include "NuggetaLevel.h"
#include "NPlayerProfile.h"
#include "Utils.h"
#include "NUtils.h"

class NPlayerProfile :public  Storable {
    public:
         static short serializerID;
    protected:
        const char* _storeId;
    protected:
        bool _storeIdSet;
    protected:
        const char* _Avatar;
    protected:
        bool _AvatarSet;
    protected:
        const char* _PlayerId;
    protected:
        bool _PlayerIdSet;
    protected:
        const char* _Country;
    protected:
        bool _CountrySet;
    protected:
        int _NXP;
    protected:
        bool _NXPSet;
    protected:
        int _NEnergy;
    protected:
        bool _NEnergySet;
    protected:
        NuggetaLevel* _NLevel;
    protected:
        bool _NLevelSet;
    public:
        const char* getStoreId();
    public:
        void setStoreId(const char* value);
    public:
        bool isstoreIdSet();
    public:
        void unSetstoreId();
    public:
        const char* getAvatar();
    public:
        void setAvatar(const char* value);
    public:
        bool isAvatarSet();
    public:
        void unSetAvatar();
    public:
        const char* getPlayerId();
    public:
        void setPlayerId(const char* value);
    public:
        bool isPlayerIdSet();
    public:
        void unSetPlayerId();
    public:
        const char* getCountry();
    public:
        void setCountry(const char* value);
    public:
        bool isCountrySet();
    public:
        void unSetCountry();
    public:
        int getNXP();
    public:
        void setNXP(int value);
    public:
        bool isNXPSet();
    public:
        void unSetNXP();
    public:
        int getNEnergy();
    public:
        void setNEnergy(int value);
    public:
        bool isNEnergySet();
    public:
        void unSetNEnergy();
    public:
        NuggetaLevel* getNLevel();
    public:
        void setNLevel(NuggetaLevel* value);
    public:
        bool isNLevelSet();
    public:
        void unSetNLevel();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NPlayerProfile();
    public:
        virtual ~NPlayerProfile();
};
#endif // _NPLAYERPROFILE