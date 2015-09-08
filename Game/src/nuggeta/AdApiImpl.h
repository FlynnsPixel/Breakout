#ifndef _ADAPIIMPL
#define _ADAPIIMPL
#include "AdApi.h"
#include "AdContext.h"
#include "AdApi.h"
#include "BannerAd.h"
#include "InterstitialAd.h"


class AdApiImpl :public  AdApi {
    public:
        AdApiImpl();
    public:
        BannerAd* displayBannerAd(AdContext* adContext);
    public:
        InterstitialAd* displayInterstitialAd();
};
#endif // _ADAPIIMPL
