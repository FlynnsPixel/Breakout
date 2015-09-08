#ifndef _GAMEMESSAGEERRORHANDLER
#define _GAMEMESSAGEERRORHANDLER
#include "GameMessageError.h"

#include "FastDelegate.h"
typedef fastdelegate::FastDelegate1<GameMessageError*>GameMessageErrorHandler;

#endif // _GAMEMESSAGEERRORHANDLER