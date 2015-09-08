#ifndef _T819
#define _T819
#include "T810.h"
#include "Serializable.h"
#include "T808.h"
#include "T817.h"
#include "DnsStatus.h"
#include "T816.h"
#include "MatchMakingType.h"
#include "LeaderboardOrder.h"
#include "LeaderboardPeriod.h"
#include "ErrorCode.h"
#include "ThirdPartySource.h"
#include "LogLevel.h"
#include "HandshakeState.h"
#include "PlayerState.h"
#include "ClientApplication.h"
#include "GameRunningState.h"
#include "Period.h"
#include "NFriendDemandStatus.h"
#include "ExecutionStatus.h"
#include "StartStatus.h"
#include "PlayerSessionType.h"
#include "NAchievementType.h"
#include "NInvitationStatus.h"
#include "AskForFriendStatus.h"
#include "SignUpStatus.h"
#include "LoginStatus.h"
#include "SavePlayerProfileStatus.h"
#include "GetPlayerProfileStatus.h"
#include "LogoutStatus.h"
#include "GetFriendsStatus.h"
#include "GetThirdPartyFriendsStatus.h"
#include "GetFriendDemandsStatus.h"
#include "AcceptFriendDemandStatus.h"
#include "RefuseFriendDemandStatus.h"
#include "SubmitScoreStatus.h"
#include "GetLeaderboardStatus.h"
#include "BuyItemStatus.h"
#include "GetStoreStatus.h"
#include "ConsumeItemStatus.h"
#include "IncreasePlayerWalletStatus.h"
#include "GetPlayerWalletStatus.h"
#include "GetAchievementBoardStatus.h"
#include "AchieveStatus.h"
#include "SearchImmediateGameStatus.h"
#include "JoinGameStatus.h"
#include "UnjoinGameStatus.h"
#include "StartGameStatus.h"
#include "StopGameStatus.h"
#include "CreateGameStatus.h"
#include "GetGamesStatus.h"
#include "SaveAsGhostStatus.h"
#include "GetGhostsStatus.h"
#include "LoadGhostStatus.h"
#include "SendGameChatStatus.h"
#include "GetStorablesStatus.h"
#include "SaveStorableStatus.h"
#include "NextPlayerTurnStatus.h"
#include "SetPlayerNameStatus.h"
#include "UpdateStorableStatus.h"
#include "RemoveStorableStatus.h"
#include "InviteThirdPartyFriendStatus.h"
#include "PublishThirdPartyMessageStatus.h"
#include "ThirdPartyLoginStatus.h"
#include "SaveGameStatus.h"
#include "LoadGameStatus.h"
#include "SavePlayerStorableStatus.h"
#include "UpdatePlayerStorableStatus.h"
#include "RemovePlayerStorableStatus.h"
#include "GetPlayerStorablesStatus.h"
#include "PauseSessionMonitoringStatus.h"
#include "ResumeSessionMonitoringStatus.h"
#include "PublishFriendThirdPartyMessageStatus.h"
#include "InvitePlayerStatus.h"
#include "GetInvitationsStatus.h"
#include "AcceptInvitationStatus.h"
#include "RefuseInvitationStatus.h"
#include "Handshake.h"
#include "HandshakeResponse.h"
#include "InvalidVersion.h"
#include "NPlayer.h"
#include "GameStateChange.h"
#include "NFriendDemand.h"
#include "NScore.h"
#include "NRoom.h"
#include <vector>
#include "T809.h"
#include "NGame.h"
#include "NGameCharacteristics.h"
#include "PlayerEnterGame.h"
#include "AdminPublicMessage.h"
#include "FriendshipNotification.h"
#include "PlayerUnjoinGame.h"
#include "DnsRequest.h"
#include "DnsResponse.h"
#include "ConnectionLost.h"
#include "NWorldUpdate.h"
#include "Message.h"
#include "StopPlugConnectionRequest.h"
#include "StopPlugConnectionResponse.h"
#include "ConnectionInterrupted.h"
#include "ConnectionResumed.h"
#include "ConnectionStop.h"
#include "NuggetaQuery.h"
#include "FriendConnectedNotification.h"
#include "FriendDisconnectedNotification.h"
#include "NPlayerWallet.h"
#include "NItem.h"
#include "NAchievement.h"
#include "NGameState.h"
#include "NuggetaException.h"
#include "NCoinPackage.h"
#include "BuyProductUrl.h"
#include "BuyProductNotification.h"
#include "NMatchMakingConditions.h"
#include "OpenConnection.h"
#include "PlayerMessage.h"
#include "NRawMessage.h"
#include "SessionExpired.h"
#include "GameMessageError.h"
#include "AdDisplayedNotification.h"
#include "NPlayerProfile.h"
#include "FriendDemandNotification.h"
#include "GameChatNotification.h"
#include "PublicServer.h"
#include "SwitchToServerInformation.h"
#include "MyTurnNotification.h"
#include "PlayerTurnNotification.h"
#include "NStore.h"
#include "NAchievementBoard.h"
#include "NLeaderboard.h"
#include "NLeaderboardEntry.h"
#include "TestPrimitiveList.h"
#include "OpenUrl.h"
#include "TurnBasedContext.h"
#include "DisconnectedContext.h"
#include "OpenUrlData.h"
#include "InviteThirdPartyFriendNotification.h"
#include "HeartBeatRequest.h"
#include "HeartBeatResponse.h"
#include "StartDetails.h"
#include "StartRequest.h"
#include "StartResponse.h"
#include "NuggetaLevel.h"
#include "StorableSample.h"
#include "NInvitation.h"
#include "NGameInvitation.h"
#include "InvitationRequestNotification.h"
#include "InvitationAcceptedNotification.h"
#include "InvitationRefusedNotification.h"
#include "InvitationExpiredNotification.h"
#include "AskForFriendResponse.h"
#include "AskForFriendByIdRequest.h"
#include "AskForFriendByLoginRequest.h"
#include "SignUpResponse.h"
#include "SignUpRequest.h"
#include "LoginResponse.h"
#include "LoginRequest.h"
#include "SavePlayerProfileResponse.h"
#include "SavePlayerProfileRequest.h"
#include "GetPlayerProfileResponse.h"
#include "GetPlayerProfileRequest.h"
#include "GetPlayerProfileByPlayerIdRequest.h"
#include "LogoutResponse.h"
#include "LogoutRequest.h"
#include "GetFriendsResponse.h"
#include "GetFriendsRequest.h"
#include "GetFriendsByPlayerIdRequest.h"
#include "GetThirdPartyFriendsResponse.h"
#include "GetThirdPartyFriendsRequest.h"
#include "GetFriendDemandsResponse.h"
#include "GetFriendDemandsRequest.h"
#include "AcceptFriendDemandResponse.h"
#include "AcceptFriendDemandRequest.h"
#include "RefuseFriendDemandResponse.h"
#include "RefuseFriendDemandRequest.h"
#include "SubmitScoreResponse.h"
#include "SubmitScoreRequest.h"
#include "SubmitScoreWithPlayerNameRequest.h"
#include "GetLeaderboardResponse.h"
#include "GetLeaderboardRequest.h"
#include "BuyItemResponse.h"
#include "BuyItemRequest.h"
#include "GetStoreResponse.h"
#include "GetStoreRequest.h"
#include "ConsumeItemResponse.h"
#include "ConsumeItemRequest.h"
#include "IncreasePlayerWalletResponse.h"
#include "IncreasePlayerWalletRequest.h"
#include "GetPlayerWalletResponse.h"
#include "GetPlayerWalletRequest.h"
#include "GetAchievementBoardResponse.h"
#include "GetAchievementBoardRequest.h"
#include "AchieveResponse.h"
#include "AchieveRequest.h"
#include "AchieveWithProgressRequest.h"
#include "SearchImmediateGameResponse.h"
#include "SearchImmediateGameRequest.h"
#include "SearchImmediateGameByConditionsRequest.h"
#include "JoinGameResponse.h"
#include "JoinGameRequest.h"
#include "UnjoinGameResponse.h"
#include "UnjoinGameRequest.h"
#include "StartGameResponse.h"
#include "StartGameRequest.h"
#include "StopGameResponse.h"
#include "StopGameRequest.h"
#include "CreateGameResponse.h"
#include "CreateGameRequest.h"
#include "GetGamesResponse.h"
#include "GetGamesRequest.h"
#include "SaveAsGhostResponse.h"
#include "SaveAsGhostRequest.h"
#include "GetGhostsResponse.h"
#include "GetGhostsRequest.h"
#include "LoadGhostResponse.h"
#include "LoadGhostRequest.h"
#include "SendGameChatResponse.h"
#include "SendGameChatRequest.h"
#include "SendGameChatToPlayerRequest.h"
#include "SendGameChatToPlayerListRequest.h"
#include "GetStorablesResponse.h"
#include "Storable.h"
#include "GetStorablesRequest.h"
#include "SaveStorableResponse.h"
#include "SaveStorableRequest.h"
#include "NextPlayerTurnResponse.h"
#include "NextPlayerTurnRequest.h"
#include "SetPlayerNameResponse.h"
#include "SetPlayerNameRequest.h"
#include "UpdateStorableResponse.h"
#include "UpdateStorableRequest.h"
#include "RemoveStorableResponse.h"
#include "RemoveStorableRequest.h"
#include "InviteThirdPartyFriendResponse.h"
#include "InviteThirdPartyFriendRequest.h"
#include "PublishThirdPartyMessageResponse.h"
#include "PublishThirdPartyMessageRequest.h"
#include "ThirdPartyLoginResponse.h"
#include "ThirdPartyLoginRequest.h"
#include "ThirdPartyLoginWithTokenRequest.h"
#include "SaveGameResponse.h"
#include "SaveGameRequest.h"
#include "LoadGameResponse.h"
#include "LoadGameRequest.h"
#include "SavePlayerStorableResponse.h"
#include "SavePlayerStorableRequest.h"
#include "UpdatePlayerStorableResponse.h"
#include "UpdatePlayerStorableRequest.h"
#include "RemovePlayerStorableResponse.h"
#include "RemovePlayerStorableRequest.h"
#include "GetPlayerStorablesResponse.h"
#include "GetPlayerStorablesRequest.h"
#include "PauseSessionMonitoringResponse.h"
#include "PauseSessionMonitoringRequest.h"
#include "ResumeSessionMonitoringResponse.h"
#include "ResumeSessionMonitoringRequest.h"
#include "PublishFriendThirdPartyMessageResponse.h"
#include "PublishFriendThirdPartyMessageRequest.h"
#include "InvitePlayerResponse.h"
#include "InvitePlayerRequest.h"
#include "GetInvitationsResponse.h"
#include "GetInvitationsRequest.h"
#include "AcceptInvitationResponse.h"
#include "AcceptInvitationRequest.h"
#include "RefuseInvitationResponse.h"
#include "RefuseInvitationRequest.h"
#include "T815.h"
#include <exception>
#include <cstring>
#include "MemoryManagement.h"

class T819 :public  T810 {
    public:
        void _m15769(Serializable* _n10749, T808* _n10750);
    public:
        void _m16344(Serializable* serializable, T817* buff);
    public:
        void _m16345(Serializable* serializable, T817* buff);
    public:
        void _m16346(Serializable* serializable, T817* buff);
    public:
        void _m16347(Serializable* serializable, T817* buff);
    public:
        void _m16348(Serializable* serializable, T817* buff);
    public:
        void _m16349(Serializable* serializable, T817* buff);
    public:
        void _m16350(Serializable* serializable, T817* buff);
    public:
        void _m16351(Serializable* serializable, T817* buff);
    public:
        void _m16352(Serializable* serializable, T817* buff);
    public:
        void _m16353(Serializable* serializable, T817* buff);
    public:
        void _m16354(Serializable* serializable, T817* buff);
    public:
        void _m16355(Serializable* serializable, T817* buff);
    public:
        void _m16356(Serializable* serializable, T817* buff);
    public:
        void _m16357(Serializable* serializable, T817* buff);
    public:
        void _m16358(Serializable* serializable, T817* buff);
    public:
        void _m16359(Serializable* serializable, T817* buff);
    public:
        void _m16360(Serializable* serializable, T817* buff);
    public:
        void _m16361(Serializable* serializable, T817* buff);
    public:
        void _m16362(Serializable* serializable, T817* buff);
    public:
        void _m16363(Serializable* serializable, T817* buff);
    public:
        void _m16364(Serializable* serializable, T817* buff);
    public:
        void _m16365(Serializable* serializable, T817* buff);
    public:
        void _m16366(Serializable* serializable, T817* buff);
    public:
        void _m16367(Serializable* serializable, T817* buff);
    public:
        void _m16368(Serializable* serializable, T817* buff);
    public:
        void _m16369(Serializable* serializable, T817* buff);
    public:
        void _m16370(Serializable* serializable, T817* buff);
    public:
        void _m16371(Serializable* serializable, T817* buff);
    public:
        void _m16372(Serializable* serializable, T817* buff);
    public:
        void _m16373(Serializable* serializable, T817* buff);
    public:
        void _m16374(Serializable* serializable, T817* buff);
    public:
        void _m16375(Serializable* serializable, T817* buff);
    public:
        void _m16376(Serializable* serializable, T817* buff);
    public:
        void _m16377(Serializable* serializable, T817* buff);
    public:
        void _m16378(Serializable* serializable, T817* buff);
    public:
        void _m16379(Serializable* serializable, T817* buff);
    public:
        void _m16380(Serializable* serializable, T817* buff);
    public:
        void _m16381(Serializable* serializable, T817* buff);
    public:
        void _m16382(Serializable* serializable, T817* buff);
    public:
        void _m16383(Serializable* serializable, T817* buff);
    public:
        void _m16384(Serializable* serializable, T817* buff);
    public:
        void _m16385(Serializable* serializable, T817* buff);
    public:
        void _m16386(Serializable* serializable, T817* buff);
    public:
        void _m16387(Serializable* serializable, T817* buff);
    public:
        void _m16388(Serializable* serializable, T817* buff);
    public:
        void _m16389(Serializable* serializable, T817* buff);
    public:
        void _m16390(Serializable* serializable, T817* buff);
    public:
        void _m16391(Serializable* serializable, T817* buff);
    public:
        void _m16392(Serializable* serializable, T817* buff);
    public:
        void _m16393(Serializable* serializable, T817* buff);
    public:
        void _m16394(Serializable* serializable, T817* buff);
    public:
        void _m16395(Serializable* serializable, T817* buff);
    public:
        void _m16396(Serializable* serializable, T817* buff);
    public:
        void _m16397(Serializable* serializable, T817* buff);
    public:
        void _m16398(Serializable* serializable, T817* buff);
    public:
        void _m16399(Serializable* serializable, T817* buff);
    public:
        void _m16400(Serializable* serializable, T817* buff);
    public:
        void _m16401(Serializable* serializable, T817* buff);
    public:
        void _m16402(Serializable* serializable, T817* buff);
    public:
        void _m16403(Serializable* serializable, T817* buff);
    public:
        void _m16404(Serializable* serializable, T817* buff);
    public:
        void _m16405(Serializable* serializable, T817* buff);
    public:
        void _m16406(Serializable* serializable, T817* buff);
    public:
        void _m16407(Serializable* serializable, T817* buff);
    public:
        void _m16408(Serializable* serializable, T817* buff);
    public:
        void _m16409(Serializable* serializable, T817* buff);
    public:
        void _m16410(Serializable* serializable, T817* buff);
    public:
        void _m16411(Serializable* serializable, T817* buff);
    public:
        void _m16412(Serializable* serializable, T817* buff);
    public:
        void _m16413(Serializable* serializable, T817* buff);
    public:
        void _m16414(Serializable* serializable, T817* buff);
    public:
        void _m16415(Serializable* serializable, T817* buff);
    public:
        void _m16416(Serializable* serializable, T817* buff);
    public:
        void _m16417(Serializable* serializable, T817* buff);
    public:
        void _m16418(Serializable* serializable, T817* buff);
    public:
        void _m16419(Serializable* serializable, T817* buff);
    public:
        void _m16420(Serializable* serializable, T817* buff);
    public:
        void _m16421(Serializable* serializable, T817* buff);
    public:
        void _m16422(Serializable* serializable, T817* buff);
    public:
        void _m16423(Serializable* serializable, T817* buff);
    public:
        void _m16424(Serializable* serializable, T817* buff);
    public:
        void _m16425(Serializable* serializable, T817* buff);
    public:
        void _m16426(Serializable* serializable, T817* buff);
    public:
        void _m16427(Serializable* serializable, T817* buff);
    public:
        void _m16428(Serializable* serializable, T817* buff);
    public:
        void _m16429(Serializable* serializable, T817* buff);
    public:
        void _m16430(Serializable* _n10767, T817* _s10768);
    public:
        void _m16431(Serializable* _g10773, T817* _r10774);
    public:
        void _m16432(Serializable* _o10791, T817* _f10792);
    public:
        void _m16433(Serializable* _h10800, T817* _c10801);
    public:
        void _m16434(Serializable* _a10806, T817* _i10807);
    public:
        void _m16435(Serializable* _j10815, T817* _y10816);
    public:
        void _m16436(Serializable* _u10821, T817* _e10822);
    public:
        void _m16437(Serializable* _g10830, T817* _t10831);
    public:
        void _m16438(Serializable* _f10842, T817* _j10843);
    public:
        void _m16439(Serializable* _c10854, T817* _t10855);
    public:
        void _m16440(Serializable* _d10863, T817* _m10864);
    public:
        void _m16441(Serializable* _e10872, T817* _d10873);
    public:
        void _m16442(Serializable* _a10890, T817* _i10891);
    public:
        void _m16443(Serializable* _y10923, T817* _o10924);
    public:
        void _m16444(Serializable* _p10938, T817* _u10939);
    public:
        void _m16445(Serializable* _i10950, T817* _y10951);
    public:
        void _m16446(Serializable* _s10965, T817* _q10966);
    public:
        void _m16447(Serializable* serializable, T817* buff);
    public:
        void _m16448(Serializable* serializable, T817* buff);
    public:
        void _m16449(Serializable* serializable, T817* buff);
    public:
        void _m16450(Serializable* serializable, T817* buff);
    public:
        void _m16451(Serializable* serializable, T817* buff);
    public:
        void _m16452(Serializable* _m10971, T817* _e10972);
    public:
        void _m16453(Serializable* serializable, T817* buff);
    public:
        void _m16454(Serializable* serializable, T817* buff);
    public:
        void _m16455(Serializable* serializable, T817* buff);
    public:
        void _m16456(Serializable* _h10983, T817* _o10984);
    public:
        void _m16457(Serializable* serializable, T817* buff);
    public:
        void _m16458(Serializable* serializable, T817* buff);
    public:
        void _m16459(Serializable* serializable, T817* buff);
    public:
        void _m16460(Serializable* _p10989, T817* _r10990);
    public:
        void _m16461(Serializable* serializable, T817* buff);
    public:
        void _m16462(Serializable* serializable, T817* buff);
    public:
        void _m16463(Serializable* _u10995, T817* _m10996);
    public:
        void _m16464(Serializable* serializable, T817* buff);
    public:
        void _m16465(Serializable* _o11001, T817* _h11002);
    public:
        void _m16466(Serializable* _g11007, T817* _v11008);
    public:
        void _m16467(Serializable* serializable, T817* buff);
    public:
        void _m16468(Serializable* _i11018, T817* _v11019);
    public:
        void _m16469(Serializable* serializable, T817* buff);
    public:
        void _m16470(Serializable* serializable, T817* buff);
    public:
        void _m16471(Serializable* serializable, T817* buff);
    public:
        void _m16472(Serializable* serializable, T817* buff);
    public:
        void _m16473(Serializable* serializable, T817* buff);
    public:
        void _m16474(Serializable* _m11029, T817* _n11030);
    public:
        void _m16475(Serializable* _q11035, T817* _v11036);
    public:
        void _m16476(Serializable* serializable, T817* buff);
    public:
        void _m16477(Serializable* _s11041, T817* _w11042);
    public:
        void _m16478(Serializable* serializable, T817* buff);
    public:
        void _m16479(Serializable* _b11053, T817* _t11054);
    public:
        void _m16480(Serializable* serializable, T817* buff);
    public:
        void _m16481(Serializable* _i11059, T817* _f11060);
    public:
        void _m16482(Serializable* serializable, T817* buff);
    public:
        void _m16483(Serializable* serializable, T817* buff);
    public:
        void _m16484(Serializable* _l11065, T817* _s11066);
    public:
        void _m16485(Serializable* serializable, T817* buff);
    public:
        void _m16486(Serializable* serializable, T817* buff);
    public:
        void _m16487(Serializable* serializable, T817* buff);
    public:
        void _m16488(Serializable* _l11071, T817* _x11072);
    public:
        void _m16489(Serializable* serializable, T817* buff);
    public:
        void _m16490(Serializable* _a11077, T817* _m11078);
    public:
        void _m16491(Serializable* serializable, T817* buff);
    public:
        void _m16492(Serializable* serializable, T817* buff);
    public:
        void _m16493(Serializable* _x11088, T817* _k11089);
    public:
        void _m16494(Serializable* serializable, T817* buff);
    public:
        void _m16495(Serializable* _q11094, T817* _b11095);
    public:
        void _m16496(Serializable* _o11100, T817* _y11101);
    public:
        void _m16497(Serializable* serializable, T817* buff);
    public:
        void _m16498(Serializable* _l11106, T817* _s11107);
    public:
        void _m16499(Serializable* _f11112, T817* _j11113);
    public:
        void _m16500(Serializable* _e11118, T817* _j11119);
    public:
        void _m16501(Serializable* serializable, T817* buff);
    public:
        void _m16502(Serializable* _r11124, T817* _j11125);
    public:
        void _m16503(Serializable* _e11130, T817* _m11131);
    public:
        void _m16504(Serializable* serializable, T817* buff);
    public:
        void _m16505(Serializable* _q11136, T817* _j11137);
    public:
        void _m16506(Serializable* _m11142, T817* _v11143);
    public:
        void _m16507(Serializable* serializable, T817* buff);
    public:
        void _m16508(Serializable* serializable, T817* buff);
    public:
        void _m16509(Serializable* _e11148, T817* _v11149);
    public:
        void _m16510(Serializable* serializable, T817* buff);
    public:
        void _m16511(Serializable* serializable, T817* buff);
    public:
        void _m16512(Serializable* serializable, T817* buff);
    public:
        void _m16513(Serializable* serializable, T817* buff);
    public:
        void _m16514(Serializable* _f11154, T817* _q11155);
    public:
        void _m16515(Serializable* serializable, T817* buff);
    public:
        void _m16516(Serializable* _i11165, T817* _x11166);
    public:
        void _m16517(Serializable* serializable, T817* buff);
    public:
        void _m16518(Serializable* _l11171, T817* _w11172);
    public:
        void _m16519(Serializable* serializable, T817* buff);
    public:
        void _m16520(Serializable* _l11177, T817* _c11178);
    public:
        void _m16521(Serializable* _z11183, T817* _m11184);
    public:
        void _m16522(Serializable* serializable, T817* buff);
    public:
        void _m16523(Serializable* _o11189, T817* _z11190);
    public:
        void _m16524(Serializable* _i11195, T817* _c11196);
    public:
        void _m16525(Serializable* serializable, T817* buff);
    public:
        void _m16526(Serializable* _f11201, T817* _v11202);
    public:
        void _m16527(Serializable* serializable, T817* buff);
    public:
        void _m16528(Serializable* serializable, T817* buff);
    public:
        void _m16529(Serializable* _s11207, T817* _n11208);
    public:
        void _m16530(Serializable* serializable, T817* buff);
    public:
        void _m16531(Serializable* serializable, T817* buff);
    public:
        void _m16532(Serializable* serializable, T817* buff);
    public:
        void _m16533(Serializable* _x11213, T817* _n11214);
    public:
        void _m16534(Serializable* _p11219, T817* _o11220);
    public:
        void _m16535(Serializable* serializable, T817* buff);
    public:
        void _m16536(Serializable* _s11225, T817* _c11226);
    public:
        void _m16537(Serializable* _s11231, T817* _n11232);
    public:
        void _m16538(Serializable* serializable, T817* buff);
    public:
        void _m16539(Serializable* serializable, T817* buff);
    public:
        void _m16540(Serializable* serializable, T817* buff);
    public:
        void _m16541(Serializable* _k11237, T817* _v11238);
    public:
        void _m16542(Serializable* serializable, T817* buff);
    public:
        void _m16543(Serializable* _l11243, T817* _h11244);
    public:
        void _m16544(Serializable* _d11249, T817* _z11250);
    public:
        void _m16545(Serializable* serializable, T817* buff);
    public:
        void _m16546(Serializable* serializable, T817* buff);
    public:
        void _m16547(Serializable* _z11255, T817* _b11256);
    public:
        void _m16548(Serializable* _t11261, T817* _w11262);
    public:
        void _m16549(Serializable* serializable, T817* buff);
    public:
        void _m16550(Serializable* _y11267, T817* _t11268);
    public:
        void _m16551(Serializable* serializable, T817* buff);
    public:
        void _m16552(Serializable* _l11273, T817* _t11274);
    public:
        void _m16553(Serializable* serializable, T817* buff);
    public:
        void _m16554(Serializable* _t11284, T817* _r11285);
    public:
        void _m16555(Serializable* serializable, T817* buff);
    public:
        void _m16556(Serializable* _s11295, T817* _a11296);
    public:
        void _m16557(Serializable* serializable, T817* buff);
    public:
        void _m16558(Serializable* serializable, T817* buff);
    public:
        void _m16559(Serializable* _w11306, T817* _h11307);
    public:
        void _m16560(Serializable* serializable, T817* buff);
    public:
        void _m16561(Serializable* serializable, T817* buff);
    public:
        void _m16562(Serializable* serializable, T817* buff);
    public:
        void _m16563(Serializable* serializable, T817* buff);
    public:
        void _m16564(Serializable* _u11312, T817* _d11313);
    public:
        void _m16565(Serializable* serializable, T817* buff);
    public:
        void _m16566(Serializable* _h11318, T817* _d11319);
    public:
        void _m16567(Serializable* serializable, T817* buff);
    public:
        void _m16568(Serializable* _v11324, T817* _g11325);
    public:
        void _m16569(Serializable* serializable, T817* buff);
    public:
        void _m16570(Serializable* _s11335, T817* _l11336);
    public:
        void _m16571(Serializable* serializable, T817* buff);
    public:
        void _m16572(Serializable* serializable, T817* buff);
    public:
        void _m16573(Serializable* _b11341, T817* _y11342);
    public:
        void _m16574(Serializable* serializable, T817* buff);
    public:
        void _m16575(Serializable* _i11347, T817* _p11348);
    public:
        void _m16576(Serializable* serializable, T817* buff);
    public:
        void _m16577(Serializable* _c11353, T817* _c11354);
    public:
        void _m16578(Serializable* _g11359, T817* _u11360);
    public:
        void _m16579(Serializable* serializable, T817* buff);
    public:
        void _m16580(Serializable* serializable, T817* buff);
    public:
        void _m16581(Serializable* serializable, T817* buff);
    public:
        void _m16582(Serializable* serializable, T817* buff);
    public:
        void _m16583(Serializable* _e11365, T817* _r11366);
    public:
        void _m16584(Serializable* serializable, T817* buff);
    public:
        void _m16585(Serializable* serializable, T817* buff);
    public:
        void _m16586(Serializable* _c11371, T817* _y11372);
    public:
        void _m16587(Serializable* serializable, T817* buff);
    public:
        void _m16588(Serializable* _e11377, T817* _b11378);
    public:
        void _m16589(Serializable* serializable, T817* buff);
    public:
        void _m16590(Serializable* serializable, T817* buff);
    public:
        void _m16591(Serializable* serializable, T817* buff);
    public:
        void _m16592(Serializable* _m11383, T817* _n11384);
    public:
        void _m16593(Serializable* _j11389, T817* _s11390);
    public:
        void _m16594(Serializable* serializable, T817* buff);
    public:
        void _m16595(Serializable* serializable, T817* buff);
    public:
        void _m16596(Serializable* _w11395, T817* _c11396);
    public:
        void _m16597(Serializable* serializable, T817* buff);
    public:
        void _m16598(Serializable* serializable, T817* buff);
    public:
        void _m16599(Serializable* serializable, T817* buff);
    public:
        void _m16600(Serializable* _z12155, T817* _o11402);
    public:
        Serializable* _m16049(T808* buffer);
    public:
        Serializable* _m16050(T808* _r12163, short _t12164);
    public:
        Serializable* _m16618(T817* buff);
    public:
        Serializable* _m16619(T817* buff);
    public:
        Serializable* _m16620(T817* buff);
    public:
        Serializable* _m16621(T817* buff);
    public:
        Serializable* _m16622(T817* buff);
    public:
        Serializable* _m16623(T817* buff);
    public:
        Serializable* _m16624(T817* buff);
    public:
        Serializable* _m16625(T817* buff);
    public:
        Serializable* _m16626(T817* buff);
    public:
        Serializable* _m16627(T817* buff);
    public:
        Serializable* _m16628(T817* buff);
    public:
        Serializable* _m16629(T817* buff);
    public:
        Serializable* _m16630(T817* buff);
    public:
        Serializable* _m16631(T817* buff);
    public:
        Serializable* _m16632(T817* buff);
    public:
        Serializable* _m16633(T817* buff);
    public:
        Serializable* _m16634(T817* buff);
    public:
        Serializable* _m16635(T817* buff);
    public:
        Serializable* _m16636(T817* buff);
    public:
        Serializable* _m16637(T817* buff);
    public:
        Serializable* _m16638(T817* buff);
    public:
        Serializable* _m16639(T817* buff);
    public:
        Serializable* _m16640(T817* buff);
    public:
        Serializable* _m16641(T817* buff);
    public:
        Serializable* _m16642(T817* _h11527);
    public:
        Serializable* _m16643(T817* buff);
    public:
        Serializable* _m16644(T817* buff);
    public:
        Serializable* _m16645(T817* buff);
    public:
        Serializable* _m16646(T817* buff);
    public:
        Serializable* _m16647(T817* buff);
    public:
        Serializable* _m16648(T817* buff);
    public:
        Serializable* _m16649(T817* buff);
    public:
        Serializable* _m16650(T817* buff);
    public:
        Serializable* _m16651(T817* buff);
    public:
        Serializable* _m16652(T817* _f11533);
    public:
        Serializable* _m16653(T817* buff);
    public:
        Serializable* _m16654(T817* buff);
    public:
        Serializable* _m16655(T817* buff);
    public:
        Serializable* _m16656(T817* buff);
    public:
        Serializable* _m16657(T817* buff);
    public:
        Serializable* _m16658(T817* buff);
    public:
        Serializable* _m16659(T817* buff);
    public:
        Serializable* _m16660(T817* buff);
    public:
        Serializable* _m16661(T817* buff);
    public:
        Serializable* _m16662(T817* buff);
    public:
        Serializable* _m16663(T817* buff);
    public:
        Serializable* _m16664(T817* buff);
    public:
        Serializable* _m16665(T817* buff);
    public:
        Serializable* _m16666(T817* _j11539);
    public:
        Serializable* _m16667(T817* buff);
    public:
        Serializable* _m16668(T817* buff);
    public:
        Serializable* _m16669(T817* buff);
    public:
        Serializable* _m16670(T817* buff);
    public:
        Serializable* _m16671(T817* buff);
    public:
        Serializable* _m16672(T817* buff);
    public:
        Serializable* _m16673(T817* buff);
    public:
        Serializable* _m16674(T817* buff);
    public:
        Serializable* _m16675(T817* buff);
    public:
        Serializable* _m16676(T817* buff);
    public:
        Serializable* _m16677(T817* buff);
    public:
        Serializable* _m16678(T817* buff);
    public:
        Serializable* _m16679(T817* buff);
    public:
        Serializable* _m16680(T817* buff);
    public:
        Serializable* _m16681(T817* buff);
    public:
        Serializable* _m16682(T817* buff);
    public:
        Serializable* _m16683(T817* buff);
    public:
        Serializable* _m16684(T817* buff);
    public:
        Serializable* _m16685(T817* buff);
    public:
        Serializable* _m16686(T817* buff);
    public:
        Serializable* _m16687(T817* buff);
    public:
        Serializable* _m16688(T817* buff);
    public:
        Serializable* _m16689(T817* _y11550);
    public:
        Serializable* _m16690(T817* _q11556);
    public:
        Serializable* _m16691(T817* buff);
    public:
        Serializable* _m16692(T817* buff);
    public:
        Serializable* _m16693(T817* buff);
    public:
        Serializable* _m16694(T817* _t11567);
    public:
        Serializable* _m16695(T817* buff);
    public:
        Serializable* _m16696(T817* _u11573);
    public:
        Serializable* _m16697(T817* _u11579);
    public:
        Serializable* _m16698(T817* buff);
    public:
        Serializable* _m16699(T817* buff);
    public:
        Serializable* _m16700(T817* _v11585);
    public:
        Serializable* _m16701(T817* buff);
    public:
        Serializable* _m16702(T817* buff);
    public:
        Serializable* _m16703(T817* _y11591);
    public:
        Serializable* _m16704(T817* _i11597);
    public:
        Serializable* _m16705(T817* buff);
    public:
        Serializable* _m16706(T817* buff);
    public:
        Serializable* _m16707(T817* _y11603);
    public:
        Serializable* _m16708(T817* buff);
    public:
        Serializable* _m16709(T817* buff);
    public:
        Serializable* _m16710(T817* buff);
    public:
        Serializable* _m16711(T817* buff);
    public:
        Serializable* _m16712(T817* _q11609);
    public:
        Serializable* _m16713(T817* buff);
    public:
        Serializable* _m16714(T817* buff);
    public:
        Serializable* _m16715(T817* buff);
    public:
        Serializable* _m16716(T817* _z11615);
    public:
        Serializable* _m16717(T817* buff);
    public:
        Serializable* _m16718(T817* _v11621);
    public:
        Serializable* _m16719(T817* buff);
    public:
        Serializable* _m16720(T817* buff);
    public:
        Serializable* _m16721(T817* buff);
    public:
        Serializable* _m16722(T817* _k11627);
    public:
        Serializable* _m16723(T817* buff);
    public:
        Serializable* _m16724(T817* buff);
    public:
        Serializable* _m16725(T817* buff);
    public:
        Serializable* _m16726(T817* _o11633);
    public:
        Serializable* _m16727(T817* buff);
    public:
        Serializable* _m16728(T817* buff);
    public:
        Serializable* _m16729(T817* buff);
    public:
        Serializable* _m16730(T817* _d11639);
    public:
        Serializable* _m16731(T817* buff);
    public:
        Serializable* _m16732(T817* _f11645);
    public:
        Serializable* _m16733(T817* buff);
    public:
        Serializable* _m16734(T817* _j11651);
    public:
        Serializable* _m16735(T817* buff);
    public:
        Serializable* _m16736(T817* buff);
    public:
        Serializable* _m16737(T817* buff);
    public:
        Serializable* _m16738(T817* _l11657);
    public:
        Serializable* _m16739(T817* buff);
    public:
        Serializable* _m16740(T817* _v11663);
    public:
        Serializable* _m16741(T817* buff);
    public:
        Serializable* _m16742(T817* buff);
    public:
        Serializable* _m16743(T817* _t11669);
    public:
        Serializable* _m16744(T817* buff);
    public:
        Serializable* _m16745(T817* _o11675);
    public:
        Serializable* _m16746(T817* buff);
    public:
        Serializable* _m16747(T817* buff);
    public:
        Serializable* _m16748(T817* _e11681);
    public:
        Serializable* _m16749(T817* _f11687);
    public:
        Serializable* _m16750(T817* buff);
    public:
        Serializable* _m16751(T817* _f11693);
    public:
        Serializable* _m16752(T817* buff);
    public:
        Serializable* _m16753(T817* _y11699);
    public:
        Serializable* _m16754(T817* buff);
    public:
        Serializable* _m16755(T817* buff);
    public:
        Serializable* _m16756(T817* _v11705);
    public:
        Serializable* _m16757(T817* buff);
    public:
        Serializable* _m16758(T817* buff);
    public:
        Serializable* _m16759(T817* _p11711);
    public:
        Serializable* _m16760(T817* buff);
    public:
        Serializable* _m16761(T817* buff);
    public:
        Serializable* _m16762(T817* _i11717);
    public:
        Serializable* _m16763(T817* buff);
    public:
        Serializable* _m16764(T817* buff);
    public:
        Serializable* _m16765(T817* buff);
    public:
        Serializable* _m16766(T817* _g11723);
    public:
        Serializable* _m16767(T817* buff);
    public:
        Serializable* _m16768(T817* _w11729);
    public:
        Serializable* _m16769(T817* buff);
    public:
        Serializable* _m16770(T817* buff);
    public:
        Serializable* _m16771(T817* buff);
    public:
        Serializable* _m16772(T817* _k11735);
    public:
        Serializable* _m16773(T817* buff);
    public:
        Serializable* _m16774(T817* buff);
    public:
        Serializable* _m16775(T817* _i11741);
    public:
        Serializable* _m16776(T817* buff);
    public:
        Serializable* _m16777(T817* _o11747);
    public:
        Serializable* _m16778(T817* buff);
    public:
        Serializable* _m16779(T817* buff);
    public:
        Serializable* _m16780(T817* _j11753);
    public:
        Serializable* _m16781(T817* buff);
    public:
        Serializable* _m16782(T817* buff);
    public:
        Serializable* _m16783(T817* _p11759);
    public:
        Serializable* _m16784(T817* buff);
    public:
        Serializable* _m16785(T817* buff);
    public:
        Serializable* _m16786(T817* _k11765);
    public:
        Serializable* _m16787(T817* buff);
    public:
        Serializable* _m16788(T817* _u11771);
    public:
        Serializable* _m16789(T817* buff);
    public:
        Serializable* _m16790(T817* buff);
    public:
        Serializable* _m16791(T817* _e11777);
    public:
        Serializable* _m16792(T817* buff);
    public:
        Serializable* _m16793(T817* _e11783);
    public:
        Serializable* _m16794(T817* buff);
    public:
        Serializable* _m16795(T817* buff);
    public:
        Serializable* _m16796(T817* _l11789);
    public:
        Serializable* _m16797(T817* buff);
    public:
        Serializable* _m16798(T817* buff);
    public:
        Serializable* _m16799(T817* _x11795);
    public:
        Serializable* _m16800(T817* buff);
    public:
        Serializable* _m16801(T817* buff);
    public:
        Serializable* _m16802(T817* buff);
    public:
        Serializable* _m16803(T817* buff);
    public:
        Serializable* _m16804(T817* _h11806);
    public:
        Serializable* _m16805(T817* buff);
    public:
        Serializable* _m16806(T817* buff);
    public:
        Serializable* _m16807(T817* _i11812);
    public:
        Serializable* _m16808(T817* buff);
    public:
        Serializable* _m16809(T817* _x11818);
    public:
        Serializable* _m16810(T817* buff);
    public:
        Serializable* _m16811(T817* buff);
    public:
        Serializable* _m16812(T817* _a11824);
    public:
        Serializable* _m16813(T817* buff);
    public:
        Serializable* _m16814(T817* buff);
    public:
        Serializable* _m16815(T817* buff);
    public:
        Serializable* _m16816(T817* buff);
    public:
        Serializable* _m16817(T817* _w11835);
    public:
        Serializable* _m16818(T817* buff);
    public:
        Serializable* _m16819(T817* _b11841);
    public:
        Serializable* _m16820(T817* buff);
    public:
        Serializable* _m16821(T817* buff);
    public:
        Serializable* _m16822(T817* _x11847);
    public:
        Serializable* _m16823(T817* buff);
    public:
        Serializable* _m16824(T817* buff);
    public:
        Serializable* _m16825(T817* _e11853);
    public:
        Serializable* _m16826(T817* buff);
    public:
        Serializable* _m16827(T817* _i11859);
    public:
        Serializable* _m16828(T817* buff);
    public:
        Serializable* _m16829(T817* buff);
    public:
        Serializable* _m16830(T817* _i11865);
    public:
        Serializable* _m16831(T817* buff);
    public:
        Serializable* _m16832(T817* buff);
    public:
        Serializable* _m16833(T817* buff);
    public:
        Serializable* _m16834(T817* _k11871);
    public:
        Serializable* _m16835(T817* buff);
    public:
        Serializable* _m16836(T817* buff);
    public:
        Serializable* _m16837(T817* _k11877);
    public:
        Serializable* _m16838(T817* buff);
    public:
        Serializable* _m16839(T817* buff);
    public:
        Serializable* _m16840(T817* buff);
    public:
        Serializable* _m16841(T817* buff);
    public:
        Serializable* _m16842(T817* _n11888);
    public:
        Serializable* _m16843(T817* buff);
    public:
        Serializable* _m16844(T817* _f11894);
    public:
        Serializable* _m16845(T817* buff);
    public:
        Serializable* _m16846(T817* buff);
    public:
        Serializable* _m16847(T817* _h11900);
    public:
        Serializable* _m16848(T817* buff);
    public:
        Serializable* _m16849(T817* _r11906);
    public:
        Serializable* _m16850(T817* buff);
    public:
        Serializable* _m16851(T817* buff);
    public:
        Serializable* _m16852(T817* _p11912);
    public:
        Serializable* _m16853(T817* buff);
    public:
        Serializable* _m16854(T817* _n11918);
    public:
        Serializable* _m16855(T817* buff);
    public:
        Serializable* _m16856(T817* buff);
    public:
        Serializable* _m16857(T817* _n11924);
    public:
        Serializable* _m16858(T817* buff);
    public:
        Serializable* _m16859(T817* _f11930);
    public:
        Serializable* _m16860(T817* buff);
    public:
        Serializable* _m16861(T817* buff);
    public:
        Serializable* _m16862(T817* buff);
    public:
        Serializable* _m16863(T817* _b11936);
    public:
        Serializable* _m16864(T817* buff);
    public:
        Serializable* _m16865(T817* buff);
    public:
        Serializable* _m16866(T817* _o11942);
    public:
        Serializable* _m16867(T817* buff);
    public:
        Serializable* _m16868(T817* _p11948);
    public:
        Serializable* _m16869(T817* buff);
    public:
        Serializable* _m16870(T817* _j11954);
    public:
        Serializable* _m16871(T817* buff);
    public:
        Serializable* _m16872(T817* buff);
    public:
        Serializable* _m16873(T817* _i11960);
    public:
        Serializable* _m16874(T817* _g13796);
    public:
        T819();
    public:
        virtual ~T819();
};
#endif // _T819