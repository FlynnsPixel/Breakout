#ifndef _ACHIEVESTATUS
#define _ACHIEVESTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "AchieveStatus.h"
#include <vector>
#include <cstring>

class AchieveStatus :public  Serializable {
    private:
         static std::vector<AchieveStatus*>* _values;
    public:
         static AchieveStatus* SUCCESS;
    public:
         static AchieveStatus* FAILURE;
    public:
         static AchieveStatus* UNKNOWN_ACHIEVEMENT;
    public:
         static AchieveStatus* ALREADY_ACHIEVED;
    public:
         static AchieveStatus* INVALID_CALL;
    public:
         static AchieveStatus* INTERNAL_ERROR;
    public:
         static AchieveStatus* PROGRESS_SAVED;
    public:
         static std::vector<AchieveStatus*>* values();
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
        AchieveStatus(const char* name, int value);
    public:
         static AchieveStatus* fromValue(int value);
    public:
         static AchieveStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~AchieveStatus();
};
#endif // _ACHIEVESTATUS