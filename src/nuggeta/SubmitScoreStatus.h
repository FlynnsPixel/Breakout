#ifndef _SUBMITSCORESTATUS
#define _SUBMITSCORESTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "SubmitScoreStatus.h"
#include <vector>
#include <cstring>

class SubmitScoreStatus :public  Serializable {
    private:
         static std::vector<SubmitScoreStatus*>* _values;
    public:
         static SubmitScoreStatus* SUCCESS;
    public:
         static SubmitScoreStatus* UNKNOWN_LEADERBOARD;
    public:
         static SubmitScoreStatus* INVALID_CALL;
    public:
         static SubmitScoreStatus* INTERNAL_ERROR;
    public:
         static std::vector<SubmitScoreStatus*>* values();
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
        SubmitScoreStatus(const char* name, int value);
    public:
         static SubmitScoreStatus* fromValue(int value);
    public:
         static SubmitScoreStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~SubmitScoreStatus();
};
#endif // _SUBMITSCORESTATUS