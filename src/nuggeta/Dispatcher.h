#ifndef _DISPATCHER
#define _DISPATCHER
#include "Message.h"

class Dispatcher {
    public:
        virtual void fireMessage(Message* message)=0;
    public:
        virtual ~Dispatcher(){};
};
#endif // _DISPATCHER