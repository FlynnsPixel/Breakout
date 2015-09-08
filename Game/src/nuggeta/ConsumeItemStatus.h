#ifndef _CONSUMEITEMSTATUS
#define _CONSUMEITEMSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "ConsumeItemStatus.h"
#include <vector>
#include <cstring>

class ConsumeItemStatus :public  Serializable {
    private:
         static std::vector<ConsumeItemStatus*>* _values;
    public:
         static ConsumeItemStatus* SUCCESS;
    public:
         static ConsumeItemStatus* NOT_ENOUGH_QUANTITY;
    public:
         static ConsumeItemStatus* UNKNOWN_ITEM;
    public:
         static ConsumeItemStatus* INVALID_CALL;
    public:
         static ConsumeItemStatus* INTERNAL_ERROR;
    public:
         static std::vector<ConsumeItemStatus*>* values();
    private:
        int _value;
    private:
        const char* _name;
    public:
        int getValue();
    public:
        const char* name();
    public:
        int ordinal();
    private:
        ConsumeItemStatus(const char* name, int value);
    public:
         static ConsumeItemStatus* fromValue(int value);
    public:
         static ConsumeItemStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~ConsumeItemStatus();
};
#endif // _CONSUMEITEMSTATUS