#ifndef _PUBLICSERVER
#define _PUBLICSERVER
#include "Serializable.h"
#include <cstring>
#include "PublicServer.h"
#include "Utils.h"
#include "NUtils.h"

class PublicServer :public  Serializable {
    public:
         static short serializerID;
    protected:
        const char* _storeId;
    protected:
        bool _storeIdSet;
    protected:
        const char* _Id;
    protected:
        bool _IdSet;
    protected:
        const char* _Location;
    protected:
        bool _LocationSet;
    protected:
        long long _Ping;
    protected:
        bool _PingSet;
    public:
        const char* getStoreId();
    public:
        void setStoreId(const char* value);
    public:
        bool isstoreIdSet();
    public:
        void unSetstoreId();
    public:
        const char* getId();
    public:
        void setId(const char* value);
    public:
        bool isIdSet();
    public:
        void unSetId();
    public:
        const char* getLocation();
    public:
        void setLocation(const char* value);
    public:
        bool isLocationSet();
    public:
        void unSetLocation();
    public:
        long long getPing();
    public:
        void setPing(long long value);
    public:
        bool isPingSet();
    public:
        void unSetPing();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        PublicServer();
    public:
        virtual ~PublicServer();
};
#endif // _PUBLICSERVER