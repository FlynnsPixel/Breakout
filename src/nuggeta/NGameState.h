#ifndef _NGAMESTATE
#define _NGAMESTATE
#include "Serializable.h"
#include <cstring>
#include "NWorldUpdate.h"
#include <vector>
#include "NGameState.h"
#include "Utils.h"
#include "NUtils.h"

class NGameState :public  Serializable {
    public:
         static short serializerID;
    protected:
        const char* _storeId;
    protected:
        bool _storeIdSet;
    protected:
        std::vector<NWorldUpdate*>* _Updates;
    protected:
        bool _UpdatesSet;
    public:
        const char* getStoreId();
    public:
        void setStoreId(const char* value);
    public:
        bool isstoreIdSet();
    public:
        void unSetstoreId();
    public:
        std::vector<NWorldUpdate*>* getUpdates();
    public:
        void setUpdates(std::vector<NWorldUpdate*>* value);
    public:
        bool isUpdatesSet();
    public:
        void unSetUpdates();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NGameState();
    public:
        virtual ~NGameState();
};
#endif // _NGAMESTATE