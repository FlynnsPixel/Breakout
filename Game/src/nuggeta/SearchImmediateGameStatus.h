#ifndef _SEARCHIMMEDIATEGAMESTATUS
#define _SEARCHIMMEDIATEGAMESTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "SearchImmediateGameStatus.h"
#include <vector>
#include <cstring>

class SearchImmediateGameStatus :public  Serializable {
    private:
         static std::vector<SearchImmediateGameStatus*>* _values;
    public:
         static SearchImmediateGameStatus* ACCEPTED;
    public:
         static SearchImmediateGameStatus* GAME_NOT_FOUND;
    public:
         static SearchImmediateGameStatus* ALREADY_IN_GAME;
    public:
         static SearchImmediateGameStatus* REJECTED;
    public:
         static SearchImmediateGameStatus* INTERNAL_ERROR;
    public:
         static SearchImmediateGameStatus* INVALID_QUERY;
    public:
         static std::vector<SearchImmediateGameStatus*>* values();
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
        SearchImmediateGameStatus(const char* name, int value);
    public:
         static SearchImmediateGameStatus* fromValue(int value);
    public:
         static SearchImmediateGameStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~SearchImmediateGameStatus();
};
#endif // _SEARCHIMMEDIATEGAMESTATUS