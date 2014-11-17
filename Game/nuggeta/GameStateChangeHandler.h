#ifndef _GAMESTATECHANGEHANDLER
#define _GAMESTATECHANGEHANDLER
#include "GameStateChange.h"

#include "FastDelegate.h"
typedef fastdelegate::FastDelegate1<GameStateChange*>GameStateChangeHandler;

#endif // _GAMESTATECHANGEHANDLER