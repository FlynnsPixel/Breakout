#ifndef _PUBLISHFRIENDTHIRDPARTYMESSAGESTATUS
#define _PUBLISHFRIENDTHIRDPARTYMESSAGESTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "PublishFriendThirdPartyMessageStatus.h"
#include <vector>
#include <cstring>

class PublishFriendThirdPartyMessageStatus :public  Serializable {
    private:
         static std::vector<PublishFriendThirdPartyMessageStatus*>* _values;
    public:
         static PublishFriendThirdPartyMessageStatus* SUCCESS;
    public:
         static PublishFriendThirdPartyMessageStatus* INVALID_CALL;
    public:
         static PublishFriendThirdPartyMessageStatus* INTERNAL_ERROR;
    public:
         static PublishFriendThirdPartyMessageStatus* CANCELED;
    public:
         static std::vector<PublishFriendThirdPartyMessageStatus*>* values();
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
        PublishFriendThirdPartyMessageStatus(const char* name, int value);
    public:
         static PublishFriendThirdPartyMessageStatus* fromValue(int value);
    public:
         static PublishFriendThirdPartyMessageStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~PublishFriendThirdPartyMessageStatus();
};
#endif // _PUBLISHFRIENDTHIRDPARTYMESSAGESTATUS