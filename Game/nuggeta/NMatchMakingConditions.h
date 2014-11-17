#ifndef _NMATCHMAKINGCONDITIONS
#define _NMATCHMAKINGCONDITIONS
#include "Serializable.h"
#include <cstring>
#include "MatchMakingType.h"
#include "NMatchMakingConditions.h"
#include "Utils.h"
#include "NUtils.h"

class NMatchMakingConditions :public  Serializable {
    public:
         static short serializerID;
    protected:
        const char* _storeId;
    protected:
        bool _storeIdSet;
    protected:
        MatchMakingType* _MatchMakingType;
    protected:
        bool _MatchMakingTypeSet;
    public:
        const char* getStoreId();
    public:
        void setStoreId(const char* value);
    public:
        bool isstoreIdSet();
    public:
        void unSetstoreId();
    public:
        MatchMakingType* getMatchMakingType();
    public:
        void setMatchMakingType(MatchMakingType* value);
    public:
        bool isMatchMakingTypeSet();
    public:
        void unSetMatchMakingType();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NMatchMakingConditions();
    public:
        virtual ~NMatchMakingConditions();
};
#endif // _NMATCHMAKINGCONDITIONS