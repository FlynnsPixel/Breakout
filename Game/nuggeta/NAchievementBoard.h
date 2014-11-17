#ifndef _NACHIEVEMENTBOARD
#define _NACHIEVEMENTBOARD
#include "Serializable.h"
#include <cstring>
#include "NAchievement.h"
#include <vector>
#include "NAchievementBoard.h"
#include "Utils.h"
#include "NUtils.h"

class NAchievementBoard :public  Serializable {
    public:
         static short serializerID;
    protected:
        const char* _storeId;
    protected:
        bool _storeIdSet;
    protected:
        std::vector<NAchievement*>* _achievements;
    protected:
        bool _achievementsSet;
    public:
        const char* getStoreId();
    public:
        void setStoreId(const char* value);
    public:
        bool isstoreIdSet();
    public:
        void unSetstoreId();
    public:
        std::vector<NAchievement*>* getAchievements();
    public:
        void setAchievements(std::vector<NAchievement*>* value);
    public:
        bool isachievementsSet();
    public:
        void unSetachievements();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NAchievementBoard();
    public:
        virtual ~NAchievementBoard();
};
#endif // _NACHIEVEMENTBOARD