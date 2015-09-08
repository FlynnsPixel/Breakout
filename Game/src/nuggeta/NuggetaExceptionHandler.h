#ifndef _NUGGETAEXCEPTIONHANDLER
#define _NUGGETAEXCEPTIONHANDLER
#include "NuggetaException.h"

#include "FastDelegate.h"
typedef fastdelegate::FastDelegate1<NuggetaException*>NuggetaExceptionHandler;

#endif // _NUGGETAEXCEPTIONHANDLER