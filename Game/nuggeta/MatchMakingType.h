#ifndef _MATCHMAKINGTYPE
#define _MATCHMAKINGTYPE
#include "NUtils.h"
#include "Serializable.h"
#include "MatchMakingType.h"
#include <vector>
#include <cstring>

class MatchMakingType :public  Serializable {
    private:
         static std::vector<MatchMakingType*>* _values;
    public:
         static MatchMakingType* CHALLENGE;
    public:
         static MatchMakingType* SEARCH_GAME;
    public:
         static std::vector<MatchMakingType*>* values();
    private:
        int _value;
    private:
        const char* _name;
    public:
        int getValue();
    public:
        const char* name();
    public:
        int ordinal();
    private:
        MatchMakingType(const char* name, int value);
    public:
         static MatchMakingType* fromValue(int value);
    public:
         static MatchMakingType* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~MatchMakingType();
};
#endif // _MATCHMAKINGTYPE