#ifndef _BANNERAD
#define _BANNERAD

class BannerAd {
    public:
        virtual void destroy()=0;
    public:
        virtual ~BannerAd(){};
};
#endif // _BANNERAD