#ifndef _ABSTRACTROOM
#define _ABSTRACTROOM
#include "Storable.h"
#include <cstring>
#include "NPlayer.h"
#include <vector>
#include "NUtils.h"
#include "Utils.h"

class AbstractRoom :public  Storable {
    public:
         static short serializerID;
    protected:
        const char* _storeId;
    protected:
        bool _storeIdSet;
    protected:
        const char* _Id;
    protected:
        bool _IdSet;
    protected:
        const char* _Name;
    protected:
        bool _NameSet;
    protected:
        std::vector<NPlayer*>* _Players;
    protected:
        bool _PlayersSet;
    public:
        const char* getStoreId();
    public:
        void setStoreId(const char* value);
    public:
        bool isstoreIdSet();
    public:
        void unSetstoreId();
    public:
        const char* getId();
    public:
        void setId(const char* value);
    public:
        bool isIdSet();
    public:
        void unSetId();
    public:
        const char* getName();
    public:
        void setName(const char* value);
    public:
        bool isNameSet();
    public:
        void unSetName();
    public:
        std::vector<NPlayer*>* getPlayers();
    public:
        void setPlayers(std::vector<NPlayer*>* value);
    public:
        bool isPlayersSet();
    public:
        void unSetPlayers();
    public:
        virtual //@Override
        short getSerializerID();
    public:
        virtual void* clone();
    public:
        virtual const char* toString();
    public:
        AbstractRoom();
    public:
        virtual ~AbstractRoom();
};
#endif // _ABSTRACTROOM