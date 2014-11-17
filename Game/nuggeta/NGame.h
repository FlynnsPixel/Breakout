#ifndef _NGAME
#define _NGAME
#include "AbstractRoom.h"
#include "GameRunningState.h"
#include "NGameCharacteristics.h"
#include "NGameState.h"
#include "NMatchMakingConditions.h"
#include "TurnBasedContext.h"
#include "DisconnectedContext.h"
#include "NPlayer.h"
#include "NGame.h"
#include "Utils.h"
#include <vector>
#include <cstring>
#include "NUtils.h"

class NGame :public  AbstractRoom {
    public:
         static short serializerID;
    protected:
        GameRunningState* _GameRunningState;
    protected:
        bool _GameRunningStateSet;
    protected:
        NGameCharacteristics* _GameCharacteristics;
    protected:
        bool _GameCharacteristicsSet;
    protected:
        NGameState* _GameState;
    protected:
        bool _GameStateSet;
    protected:
        NMatchMakingConditions* _MatchMakingConditions;
    protected:
        bool _MatchMakingConditionsSet;
    protected:
        TurnBasedContext* _TurnBasedContext;
    protected:
        bool _TurnBasedContextSet;
    protected:
        DisconnectedContext* _DisconnectedContext;
    protected:
        bool _DisconnectedContextSet;
    protected:
        NPlayer* _Owner;
    protected:
        bool _OwnerSet;
    public:
        GameRunningState* getGameRunningState();
    public:
        void setGameRunningState(GameRunningState* value);
    public:
        bool isGameRunningStateSet();
    public:
        void unSetGameRunningState();
    public:
        NGameCharacteristics* getGameCharacteristics();
    public:
        void setGameCharacteristics(NGameCharacteristics* value);
    public:
        bool isGameCharacteristicsSet();
    public:
        void unSetGameCharacteristics();
    public:
        NGameState* getGameState();
    public:
        void setGameState(NGameState* value);
    public:
        bool isGameStateSet();
    public:
        void unSetGameState();
    public:
        NMatchMakingConditions* getMatchMakingConditions();
    public:
        void setMatchMakingConditions(NMatchMakingConditions* value);
    public:
        bool isMatchMakingConditionsSet();
    public:
        void unSetMatchMakingConditions();
    public:
        TurnBasedContext* getTurnBasedContext();
    public:
        void setTurnBasedContext(TurnBasedContext* value);
    public:
        bool isTurnBasedContextSet();
    public:
        void unSetTurnBasedContext();
    public:
        DisconnectedContext* getDisconnectedContext();
    public:
        void setDisconnectedContext(DisconnectedContext* value);
    public:
        bool isDisconnectedContextSet();
    public:
        void unSetDisconnectedContext();
    public:
        NPlayer* getOwner();
    public:
        void setOwner(NPlayer* value);
    public:
        bool isOwnerSet();
    public:
        void unSetOwner();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NGame();
    public:
        virtual ~NGame();
};
#endif // _NGAME