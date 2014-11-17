#ifndef _NSTORE
#define _NSTORE
#include "Serializable.h"
#include <cstring>
#include "NItem.h"
#include <vector>
#include "NStore.h"
#include "Utils.h"
#include "NUtils.h"

class NStore :public  Serializable {
    public:
         static short serializerID;
    protected:
        const char* _storeId;
    protected:
        bool _storeIdSet;
    protected:
        std::vector<NItem*>* _Items;
    protected:
        bool _ItemsSet;
    public:
        const char* getStoreId();
    public:
        void setStoreId(const char* value);
    public:
        bool isstoreIdSet();
    public:
        void unSetstoreId();
    public:
        std::vector<NItem*>* getItems();
    public:
        void setItems(std::vector<NItem*>* value);
    public:
        bool isItemsSet();
    public:
        void unSetItems();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NStore();
    public:
        virtual ~NStore();
};
#endif // _NSTORE