#ifndef _NUGGETASOCIALFACEBOOK
#define _NUGGETASOCIALFACEBOOK
#include "ThirdPartyLoginResponse.h"
#include "ThirdPartyLoginResponseHandler.h"
#include "GetThirdPartyFriendsResponse.h"
#include "GetThirdPartyFriendsResponseHandler.h"
#include "PublishFriendThirdPartyMessageResponse.h"
#include "PublishFriendThirdPartyMessageResponseHandler.h"
#include <cstring>

class NuggetaSocialFacebook {
    public:
         static bool isAvailable();
    public:
         static void loginFB(ThirdPartyLoginResponse* thirdPartyLoginResponse, ThirdPartyLoginResponseHandler* handler);
    public:
         static void getFriendsFB(GetThirdPartyFriendsResponse* getThirdPartyFriendsResponse, GetThirdPartyFriendsResponseHandler* handler);
    public:
         static void publishFB(PublishFriendThirdPartyMessageResponse* publishFriendThirdPartyMessageResponse, PublishFriendThirdPartyMessageResponseHandler* publishFriendThirdPartyMessageResponseHandler, const char* title, const char* message, const char* pictureUrl, const char* link, const char* thirdPartyId);
    public:
        NuggetaSocialFacebook();
    public:
        virtual ~NuggetaSocialFacebook();
};
#endif // _NUGGETASOCIALFACEBOOK
