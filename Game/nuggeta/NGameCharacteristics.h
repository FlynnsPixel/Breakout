#ifndef _NGAMECHARACTERISTICS
#define _NGAMECHARACTERISTICS
#include "Serializable.h"
#include <cstring>
#include "NGameCharacteristics.h"
#include "Utils.h"
#include "NUtils.h"

class NGameCharacteristics :public  Serializable {
    public:
         static short serializerID;
    protected:
        const char* _storeId;
    protected:
        bool _storeIdSet;
    protected:
        int _MinPlayer;
    protected:
        bool _MinPlayerSet;
    protected:
        int _MaxPlayer;
    protected:
        bool _MaxPlayerSet;
    protected:
        bool _AutoStop;
    protected:
        bool _AutoStopSet;
    protected:
        bool _AutoStart;
    protected:
        bool _AutoStartSet;
    public:
        const char* getStoreId();
    public:
        void setStoreId(const char* value);
    public:
        bool isstoreIdSet();
    public:
        void unSetstoreId();
    public:
        int getMinPlayer();
    public:
        void setMinPlayer(int value);
    public:
        bool isMinPlayerSet();
    public:
        void unSetMinPlayer();
    public:
        int getMaxPlayer();
    public:
        void setMaxPlayer(int value);
    public:
        bool isMaxPlayerSet();
    public:
        void unSetMaxPlayer();
    public:
        bool isAutoStop();
    public:
        void setAutoStop(bool value);
    public:
        bool isAutoStopSet();
    public:
        void unSetAutoStop();
    public:
        bool isAutoStart();
    public:
        void setAutoStart(bool value);
    public:
        bool isAutoStartSet();
    public:
        void unSetAutoStart();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NGameCharacteristics();
    public:
        virtual ~NGameCharacteristics();
};
#endif // _NGAMECHARACTERISTICS