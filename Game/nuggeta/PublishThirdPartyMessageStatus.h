#ifndef _PUBLISHTHIRDPARTYMESSAGESTATUS
#define _PUBLISHTHIRDPARTYMESSAGESTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "PublishThirdPartyMessageStatus.h"
#include <vector>
#include <cstring>

class PublishThirdPartyMessageStatus :public  Serializable {
    private:
         static std::vector<PublishThirdPartyMessageStatus*>* _values;
    public:
         static PublishThirdPartyMessageStatus* SUCCESS;
    public:
         static PublishThirdPartyMessageStatus* INVALID_CALL;
    public:
         static PublishThirdPartyMessageStatus* INTERNAL_ERROR;
    public:
         static PublishThirdPartyMessageStatus* CANCELED;
    public:
         static std::vector<PublishThirdPartyMessageStatus*>* values();
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
        PublishThirdPartyMessageStatus(const char* name, int value);
    public:
         static PublishThirdPartyMessageStatus* fromValue(int value);
    public:
         static PublishThirdPartyMessageStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~PublishThirdPartyMessageStatus();
};
#endif // _PUBLISHTHIRDPARTYMESSAGESTATUS