#ifndef _CLIENTAPPLICATION
#define _CLIENTAPPLICATION
#include "NUtils.h"
#include "Serializable.h"
#include "ClientApplication.h"
#include <vector>
#include <cstring>

class ClientApplication :public  Serializable {
    private:
         static std::vector<ClientApplication*>* _values;
    public:
         static ClientApplication* PC;
    public:
         static ClientApplication* MOBILE;
    public:
         static std::vector<ClientApplication*>* values();
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
        ClientApplication(const char* name, int value);
    public:
         static ClientApplication* fromValue(int value);
    public:
         static ClientApplication* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~ClientApplication();
};
#endif // _CLIENTAPPLICATION