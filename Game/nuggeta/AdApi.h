#ifndef _ADAPI
#define _ADAPI
#include "BannerAd.h"
#include "AdContext.h"
#include "InterstitialAd.h"

class AdApi {
    public:
        virtual BannerAd* displayBannerAd(AdContext* adContext)=0;
    public:
        virtual InterstitialAd* displayInterstitialAd()=0;
    public:
        virtual ~AdApi(){};
};
#endif // _ADAPI