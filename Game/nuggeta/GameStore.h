#ifndef _GAMESTORE
#define _GAMESTORE
#include <cstring>

class GameStore {
    public:
         static const char* getSPId();
    public:
        GameStore();
    public:
        virtual ~GameStore();
};
#endif // _GAMESTORE
