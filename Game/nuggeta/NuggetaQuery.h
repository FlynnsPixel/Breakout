#ifndef _NUGGETAQUERY
#define _NUGGETAQUERY
#include "Serializable.h"
#include <cstring>
#include "NuggetaQuery.h"
#include "Utils.h"
#include "NUtils.h"

class NuggetaQuery :public  Serializable {
    public:
         static short serializerID;
    protected:
        const char* _domain;
    protected:
        bool _domainSet;
    protected:
        int _start;
    protected:
        bool _startSet;
    protected:
        int _limit;
    protected:
        bool _limitSet;
    protected:
        const char* _query;
    protected:
        bool _querySet;
    public:
        const char* getDomain();
    public:
        void setDomain(const char* value);
    public:
        bool isdomainSet();
    public:
        void unSetdomain();
    public:
        int getStart();
    public:
        void setStart(int value);
    public:
        bool isstartSet();
    public:
        void unSetstart();
    public:
        int getLimit();
    public:
        void setLimit(int value);
    public:
        bool islimitSet();
    public:
        void unSetlimit();
    public:
        const char* getQuery();
    public:
        void setQuery(const char* value);
    public:
        bool isquerySet();
    public:
        void unSetquery();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NuggetaQuery();
    public:
        virtual ~NuggetaQuery();
};
#endif // _NUGGETAQUERY