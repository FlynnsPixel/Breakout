#ifndef _T806
#define _T806
#include "T807.h"
#include "NLogger.h"
#include "NLoggerFactory.h"
#include "AdApi.h"
#include "AdApiImpl.h"
#include "Message.h"
#include <cstring>
#include "BannerAd.h"
#include "AdContext.h"
#include "AdDisplayedNotification.h"
#include "InterstitialAd.h"
#include "NPlayer.h"
#include "ThirdPartySource.h"
#include "NUtils.h"
#include "NuggetaSocialFacebook.h"
#include "ThirdPartyLoginResponseHandler.h"
#include "ThirdPartyLoginResponse.h"
#include "ThirdPartyLoginStatus.h"
#include <functional>
#include "GetThirdPartyFriendsResponseHandler.h"
#include "GetThirdPartyFriendsResponse.h"
#include "PublishFriendThirdPartyMessageResponseHandler.h"
#include "PublishFriendThirdPartyMessageResponse.h"
#include "PublishFriendThirdPartyMessageStatus.h"
#include "PublishThirdPartyMessageResponse.h"
#include "PublishThirdPartyMessageStatus.h"
#include "PublishThirdPartyMessageResponseHandler.h"
#include "InviteThirdPartyFriendNotification.h"
#include "ExecutionStatus.h"
#include "InviteThirdPartyFriendResponse.h"
#include "InviteThirdPartyFriendStatus.h"
#include "InviteThirdPartyFriendResponseHandler.h"
#include "InvitePlayerRequest.h"
#include "NInvitation.h"
#include "InvitePlayerResponseHandler.h"
#include "InvitePlayerResponse.h"

class T806 :public  T807 {
    protected:
         static NLogger* _x14714;
    protected:
        AdApi* _u14715;
    public:
        T806();
    public:
        virtual void _m16920(Message* _z14716, bool _v14717, bool _u14718, bool _c14719);
    public:
        virtual const char* _m16936();
    public:
        virtual const char* _m16938();
    public:
        //@Override
        const char* _m16329(Message* _k14720, void* _o14721);
    public:
        BannerAd* displayBannerAd(AdContext* adContext);
    public:
        InterstitialAd* _m16958();
    public:
        const char* getAvatar(NPlayer* player);
    private:
        bool _m16960(ThirdPartySource* thirdPartySource);
    public:
        //@Override
        const char* thirdPartyLogin(ThirdPartySource* thirdPartySource);
    private:
        const char* _m16961(ThirdPartySource* thirdPartySource);
    public:
        //@Override
        const char* thirdPartyLoginRequest(ThirdPartySource* thirdPartySource, ThirdPartyLoginResponseHandler* thirdPartyLoginResponseHandler);
    private:
        ThirdPartyLoginResponseHandler* _n14732;
    private:
        const char* _m16963(ThirdPartySource* _l14724, ThirdPartyLoginResponseHandler* _c14734);
    public:
        const char* getThirdPartyFriends(ThirdPartySource* thirdPartySource);
    private:
        const char* _m16964(ThirdPartySource* thirdPartySource);
    public:
        //@Override
        const char* getThirdPartyFriendsRequest(ThirdPartySource* _l14725, GetThirdPartyFriendsResponseHandler* getThirdPartyFriendsResponseHandler);
    private:
        const char* _m16966(ThirdPartySource* thirdPartySource, GetThirdPartyFriendsResponseHandler* _c14747);
    public:
        //@Override
        const char* publishFriendThirdPartyMessage(const char* title, const char* message, const char* pictureUrl, const char* link, const char* thirdPartyId, ThirdPartySource* thirdPartySource);
    private:
        const char* _m16967(const char* title, const char* message, const char* pictureUrl, const char* link, const char* thirdPartyId, ThirdPartySource* thirdPartySource);
    public:
        //@Override
        const char* publishFriendThirdPartyMessageRequest(const char* title, const char* message, const char* pictureUrl, const char* link, const char* thirdPartyId, ThirdPartySource* thirdPartySource, PublishFriendThirdPartyMessageResponseHandler* publishFriendThirdPartyMessageResponseHandler);
    private:
        const char* _m16969(const char* title, const char* message, const char* pictureUrl, const char* link, const char* thirdPartyId, ThirdPartySource* _h14733, PublishFriendThirdPartyMessageResponseHandler* publishFriendThirdPartyMessageResponseHandler);
    public:
        //@Override
        const char* publishThirdPartyMessage(const char* title, const char* message, const char* pictureUrl, const char* link, ThirdPartySource* thirdPartySource);
    private:
        const char* _m16970(const char* title, const char* message, const char* pictureUrl, const char* link, ThirdPartySource* thirdPartySource);
    public:
        //@Override
        const char* publishThirdPartyMessageRequest(const char* title, const char* message, const char* pictureUrl, const char* link, ThirdPartySource* _t14741, PublishThirdPartyMessageResponseHandler* publishThirdPartyMessageResponseHandler);
    private:
        PublishThirdPartyMessageResponseHandler* _z14782;
    private:
        const char* _m16971(const char* title, const char* message, const char* pictureUrl, const char* link, ThirdPartySource* thirdPartySource, PublishThirdPartyMessageResponseHandler* _p14788);
    public:
        //@Override
        const char* inviteThirdPartyFriend(const char* thirdPartyId, const char* title, const char* inviteMessage, const char* pictureUrl, const char* link, ThirdPartySource* thirdPartySource);
    private:
        const char* _r14795;
    private:
        const char* _m16972(const char* thirdPartyId, const char* title, const char* message, const char* pictureUrl, const char* link, ThirdPartySource* _o14746);
    public:
        //@Override
        const char* inviteThirdPartyFriendRequest(const char* _k14754, const char* _u14750, const char* _g14751, const char* _l14752, const char* _s14753, ThirdPartySource* _q14755, InviteThirdPartyFriendResponseHandler* inviteThirdPartyFriendResponseHandler);
    private:
        InviteThirdPartyFriendResponseHandler* _h14810;
    private:
        const char* _m16973(const char* _j14811, const char* _y14812, const char* _c14813, const char* _w14814, const char* _x14815, ThirdPartySource* _f14816, InviteThirdPartyFriendResponseHandler* _q14817);
    public:
        //@Override
        const char* invitePlayer(const char* playerId, Message* invitationContent);
    public:
        //@Override
        const char* invitePlayerRequest(const char* playerId, Message* invitationContent, InvitePlayerResponseHandler* invitePlayerResponseHandler);
    public:
        virtual ~T806();
    public:
        //@Override
        void onThirdPartyLoginResponse35(ThirdPartyLoginResponse* thirdpartyloginresponse);
    public:
        //@Override
        void onThirdPartyLoginResponse36(ThirdPartyLoginResponse* _y14737);
    public:
        //@Override
        void onGetThirdPartyFriendsResponse37(GetThirdPartyFriendsResponse* _f14744);
    public:
        //@Override
        void onPublishFriendThirdPartyMessageResponse38(PublishFriendThirdPartyMessageResponse* _l14758);
    public:
        //@Override
        void onPublishFriendThirdPartyMessageResponse39(PublishFriendThirdPartyMessageResponse* publishFriendThirdPartyMessageResponse);
    public:
        //@Override
        void onPublishFriendThirdPartyMessageResponse40(PublishFriendThirdPartyMessageResponse* publishFriendThirdPartyMessageResponse);
    public:
        //@Override
        void onPublishFriendThirdPartyMessageResponse41(PublishFriendThirdPartyMessageResponse* publishFriendThirdPartyMessageResponse);
    public:
        //@Override
        void onPublishFriendThirdPartyMessageResponse42(PublishFriendThirdPartyMessageResponse* _o14760);
};
#endif // _T806