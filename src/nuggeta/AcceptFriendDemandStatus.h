#ifndef _ACCEPTFRIENDDEMANDSTATUS
#define _ACCEPTFRIENDDEMANDSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "AcceptFriendDemandStatus.h"
#include <vector>
#include <cstring>

class AcceptFriendDemandStatus :public  Serializable {
    private:
         static std::vector<AcceptFriendDemandStatus*>* _values;
    public:
         static AcceptFriendDemandStatus* AUTHENTICATION_REQUIRED;
    public:
         static AcceptFriendDemandStatus* UNKNOWN_FRIEND_DEMAND;
    public:
         static AcceptFriendDemandStatus* SUCCESS;
    public:
         static AcceptFriendDemandStatus* FAILURE;
    public:
         static AcceptFriendDemandStatus* INVALID_CALL;
    public:
         static AcceptFriendDemandStatus* INTERNAL_ERROR;
    public:
         static std::vector<AcceptFriendDemandStatus*>* values();
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
        AcceptFriendDemandStatus(const char* name, int value);
    public:
         static AcceptFriendDemandStatus* fromValue(int value);
    public:
         static AcceptFriendDemandStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~AcceptFriendDemandStatus();
};
#endif // _ACCEPTFRIENDDEMANDSTATUS