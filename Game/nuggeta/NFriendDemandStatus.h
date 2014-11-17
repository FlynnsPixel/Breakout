#ifndef _NFRIENDDEMANDSTATUS
#define _NFRIENDDEMANDSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "NFriendDemandStatus.h"
#include <vector>
#include <cstring>

class NFriendDemandStatus :public  Serializable {
    private:
         static std::vector<NFriendDemandStatus*>* _values;
    public:
         static NFriendDemandStatus* PENDING;
    public:
         static NFriendDemandStatus* ACCEPTED;
    public:
         static std::vector<NFriendDemandStatus*>* values();
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
        NFriendDemandStatus(const char* name, int value);
    public:
         static NFriendDemandStatus* fromValue(int value);
    public:
         static NFriendDemandStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~NFriendDemandStatus();
};
#endif // _NFRIENDDEMANDSTATUS