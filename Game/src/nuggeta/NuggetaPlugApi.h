#ifndef _NUGGETAPLUGAPI
#define _NUGGETAPLUGAPI
#include "Message.h"
#include <vector>
#include "GameMessageListener.h"
#include "NuggetaMessageListener.h"
#include <cstring>
#include "GameMessage.h"

class NuggetaPlugApi {
    public:
        virtual std::vector<Message*>* pump()=0;
    public:
        virtual void start()=0;
    public:
        virtual void stop()=0;
    public:
        virtual void addGameMessageListener(GameMessageListener* listener)=0;
    public:
        virtual void removeGameMessageListener(GameMessageListener* listener)=0;
    public:
        virtual void addNuggetaMessageListener(NuggetaMessageListener* listener)=0;
    public:
        virtual void removeNuggetaMessageListener(NuggetaMessageListener* listener)=0;
    public:
        virtual const char* sendMessage(Message* message)=0;
    public:
        virtual const char* sendGameMessage(GameMessage* message, const char* gameId)=0;
    public:
        virtual ~NuggetaPlugApi(){};
};
#endif // _NUGGETAPLUGAPI