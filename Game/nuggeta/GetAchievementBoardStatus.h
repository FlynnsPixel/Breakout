#ifndef _GETACHIEVEMENTBOARDSTATUS
#define _GETACHIEVEMENTBOARDSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "GetAchievementBoardStatus.h"
#include <vector>
#include <cstring>

class GetAchievementBoardStatus :public  Serializable {
    private:
         static std::vector<GetAchievementBoardStatus*>* _values;
    public:
         static GetAchievementBoardStatus* SUCCESS;
    public:
         static GetAchievementBoardStatus* FAILURE;
    public:
         static GetAchievementBoardStatus* INTERNAL_ERROR;
    public:
         static std::vector<GetAchievementBoardStatus*>* values();
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
        GetAchievementBoardStatus(const char* name, int value);
    public:
         static GetAchievementBoardStatus* fromValue(int value);
    public:
         static GetAchievementBoardStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~GetAchievementBoardStatus();
};
#endif // _GETACHIEVEMENTBOARDSTATUS