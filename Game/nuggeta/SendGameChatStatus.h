#ifndef _SENDGAMECHATSTATUS
#define _SENDGAMECHATSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "SendGameChatStatus.h"
#include <vector>
#include <cstring>

class SendGameChatStatus :public  Serializable {
    private:
         static std::vector<SendGameChatStatus*>* _values;
    public:
         static SendGameChatStatus* SENT;
    public:
         static SendGameChatStatus* FAILURE;
    public:
         static SendGameChatStatus* INVALID_CALL;
    public:
         static SendGameChatStatus* INTERNAL_ERROR;
    public:
         static std::vector<SendGameChatStatus*>* values();
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
        SendGameChatStatus(const char* name, int value);
    public:
         static SendGameChatStatus* fromValue(int value);
    public:
         static SendGameChatStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~SendGameChatStatus();
};
#endif // _SENDGAMECHATSTATUS