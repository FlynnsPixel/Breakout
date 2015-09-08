#ifndef _GAMEMESSAGEADAPTER
#define _GAMEMESSAGEADAPTER
#include "GameMessageListener.h"

class GameMessageAdapter :public  GameMessageListener {
    public:
        GameMessageAdapter();
    public:
        virtual ~GameMessageAdapter();
};
#endif // _GAMEMESSAGEADAPTER