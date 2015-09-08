#ifndef _GAMEDISPATCHER
#define _GAMEDISPATCHER
#include "Dispatcher.h"
#include "GameMessageListener.h"
#include <vector>
#include "Message.h"
#include <algorithm>

class GameDispatcher :public  Dispatcher {
    private:
        std::vector<GameMessageListener*>* globalListeners;
    public:
        void fireMessage(Message* message);
    public:
        void addGameMessageListener(GameMessageListener* listener);
    public:
        void removeGameMessageListener(GameMessageListener* listener);
    public:
        void clear();
    public:
        GameDispatcher();
    public:
        virtual ~GameDispatcher();
};
#endif // _GAMEDISPATCHER