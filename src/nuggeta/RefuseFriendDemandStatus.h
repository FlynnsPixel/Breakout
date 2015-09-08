#ifndef _REFUSEFRIENDDEMANDSTATUS
#define _REFUSEFRIENDDEMANDSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "RefuseFriendDemandStatus.h"
#include <vector>
#include <cstring>

class RefuseFriendDemandStatus :public  Serializable {
    private:
         static std::vector<RefuseFriendDemandStatus*>* _values;
    public:
         static RefuseFriendDemandStatus* AUTHENTICATION_REQUIRED;
    public:
         static RefuseFriendDemandStatus* UNKNOWN_FRIEND_DEMAND;
    public:
         static RefuseFriendDemandStatus* SUCCESS;
    public:
         static RefuseFriendDemandStatus* FAILURE;
    public:
         static RefuseFriendDemandStatus* INVALID_CALL;
    public:
         static RefuseFriendDemandStatus* INTERNAL_ERROR;
    public:
         static std::vector<RefuseFriendDemandStatus*>* values();
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
        RefuseFriendDemandStatus(const char* name, int value);
    public:
         static RefuseFriendDemandStatus* fromValue(int value);
    public:
         static RefuseFriendDemandStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~RefuseFriendDemandStatus();
};
#endif // _REFUSEFRIENDDEMANDSTATUS