#ifndef _NUGGETALEVEL
#define _NUGGETALEVEL
#include "Storable.h"
#include <cstring>
#include "NuggetaLevel.h"
#include "Utils.h"
#include "NUtils.h"

class NuggetaLevel :public  Storable {
    public:
         static short serializerID;
    protected:
        const char* _storeId;
    protected:
        bool _storeIdSet;
    protected:
        const char* _Data;
    protected:
        bool _DataSet;
    protected:
        int _Index;
    protected:
        bool _IndexSet;
    protected:
        int _XP;
    protected:
        bool _XPSet;
    public:
        const char* getStoreId();
    public:
        void setStoreId(const char* value);
    public:
        bool isstoreIdSet();
    public:
        void unSetstoreId();
    public:
        const char* getData();
    public:
        void setData(const char* value);
    public:
        bool isDataSet();
    public:
        void unSetData();
    public:
        int getIndex();
    public:
        void setIndex(int value);
    public:
        bool isIndexSet();
    public:
        void unSetIndex();
    public:
        int getXP();
    public:
        void setXP(int value);
    public:
        bool isXPSet();
    public:
        void unSetXP();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NuggetaLevel();
    public:
        virtual ~NuggetaLevel();
};
#endif // _NUGGETALEVEL