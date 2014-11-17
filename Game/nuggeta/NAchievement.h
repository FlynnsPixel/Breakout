#ifndef _NACHIEVEMENT
#define _NACHIEVEMENT
#include "Storable.h"
#include <cstring>
#include "NAchievementType.h"
#include "NAchievement.h"
#include "Utils.h"
#include "NUtils.h"

class NAchievement :public  Storable {
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
        const char* _Name;
    protected:
        bool _NameSet;
    protected:
        bool _Achieved;
    protected:
        bool _AchievedSet;
    protected:
        const char* _Description;
    protected:
        bool _DescriptionSet;
    protected:
        int _NXP;
    protected:
        bool _NXPSet;
    protected:
        int _NEnergy;
    protected:
        bool _NEnergySet;
    protected:
        NAchievementType* _Type;
    protected:
        bool _TypeSet;
    protected:
        int _Goal;
    protected:
        bool _GoalSet;
    protected:
        int _Progress;
    protected:
        bool _ProgressSet;
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
        const char* getName();
    public:
        void setName(const char* value);
    public:
        bool isNameSet();
    public:
        void unSetName();
    public:
        bool isAchieved();
    public:
        void setAchieved(bool value);
    public:
        bool isAchievedSet();
    public:
        void unSetAchieved();
    public:
        const char* getDescription();
    public:
        void setDescription(const char* value);
    public:
        bool isDescriptionSet();
    public:
        void unSetDescription();
    public:
        int getNXP();
    public:
        void setNXP(int value);
    public:
        bool isNXPSet();
    public:
        void unSetNXP();
    public:
        int getNEnergy();
    public:
        void setNEnergy(int value);
    public:
        bool isNEnergySet();
    public:
        void unSetNEnergy();
    public:
        NAchievementType* getType();
    public:
        void setType(NAchievementType* value);
    public:
        bool isTypeSet();
    public:
        void unSetType();
    public:
        int getGoal();
    public:
        void setGoal(int value);
    public:
        bool isGoalSet();
    public:
        void unSetGoal();
    public:
        int getProgress();
    public:
        void setProgress(int value);
    public:
        bool isProgressSet();
    public:
        void unSetProgress();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NAchievement();
    public:
        virtual ~NAchievement();
};
#endif // _NACHIEVEMENT