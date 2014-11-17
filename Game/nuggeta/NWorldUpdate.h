#ifndef _NWORLDUPDATE
#define _NWORLDUPDATE
#include "Storable.h"
#include <cstring>
#include "Message.h"
#include <vector>
#include "NWorldUpdate.h"
#include "Utils.h"
#include "NUtils.h"

class NWorldUpdate :public  Storable {
    public:
         static short serializerID;
    protected:
        const char* _storeId;
    protected:
        bool _storeIdSet;
    protected:
        int _Update;
    protected:
        bool _UpdateSet;
    protected:
        std::vector<Message*>* _Values;
    protected:
        bool _ValuesSet;
    public:
        const char* getStoreId();
    public:
        void setStoreId(const char* value);
    public:
        bool isstoreIdSet();
    public:
        void unSetstoreId();
    public:
        int getUpdate();
    public:
        void setUpdate(int value);
    public:
        bool isUpdateSet();
    public:
        void unSetUpdate();
    public:
        std::vector<Message*>* getValues();
    public:
        void setValues(std::vector<Message*>* value);
    public:
        bool isValuesSet();
    public:
        void unSetValues();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NWorldUpdate();
    public:
        virtual ~NWorldUpdate();
};
#endif // _NWORLDUPDATE