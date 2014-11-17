#ifndef _INTERSTITIALAD
#define _INTERSTITIALAD

class InterstitialAd {
    public:
        virtual void destroy()=0;
    public:
        virtual ~InterstitialAd(){};
};
#endif // _INTERSTITIALAD