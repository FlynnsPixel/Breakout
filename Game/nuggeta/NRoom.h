#ifndef _NROOM
#define _NROOM
#include "AbstractRoom.h"
#include "NRoom.h"
#include "Utils.h"
#include "NPlayer.h"
#include <vector>
#include <cstring>
#include "NUtils.h"

class NRoom :public  AbstractRoom {
    public:
         static short serializerID;
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NRoom();
    public:
        virtual ~NRoom();
};
#endif // _NROOM