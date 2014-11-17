#ifndef _T818
#define _T818
#include "T810.h"
#include "Serializable.h"
#include "T808.h"
#include "T811.h"
#include "DnsStatus.h"
#include "T813.h"
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
#include "T812.h"
#include <exception>
#include <cstring>
#include "MemoryManagement.h"

class T818 :public  T810 {
    public:
        void _m15769(Serializable* _l7285, T808* _c7286);
    public:
        void _m15770(Serializable* serializable, T811* buff);
    public:
        void _m15771(Serializable* serializable, T811* buff);
    public:
        void _m15772(Serializable* serializable, T811* buff);
    public:
        void _m15773(Serializable* serializable, T811* buff);
    public:
        void _m15774(Serializable* serializable, T811* buff);
    public:
        void _m15775(Serializable* serializable, T811* buff);
    public:
        void _m15776(Serializable* serializable, T811* buff);
    public:
        void _m15777(Serializable* serializable, T811* buff);
    public:
        void _m15778(Serializable* serializable, T811* buff);
    public:
        void _m15779(Serializable* serializable, T811* buff);
    public:
        void _m15780(Serializable* serializable, T811* buff);
    public:
        void _m15781(Serializable* serializable, T811* buff);
    public:
        void _m15782(Serializable* serializable, T811* buff);
    public:
        void _m15783(Serializable* serializable, T811* buff);
    public:
        void _m15784(Serializable* serializable, T811* buff);
    public:
        void _m15785(Serializable* serializable, T811* buff);
    public:
        void _m15786(Serializable* serializable, T811* buff);
    public:
        void _m15787(Serializable* serializable, T811* buff);
    public:
        void _m15788(Serializable* serializable, T811* buff);
    public:
        void _m15789(Serializable* serializable, T811* buff);
    public:
        void _m15790(Serializable* serializable, T811* buff);
    public:
        void _m15791(Serializable* serializable, T811* buff);
    public:
        void _m15792(Serializable* serializable, T811* buff);
    public:
        void _m15793(Serializable* serializable, T811* buff);
    public:
        void _m15794(Serializable* serializable, T811* buff);
    public:
        void _m15795(Serializable* serializable, T811* buff);
    public:
        void _m15796(Serializable* serializable, T811* buff);
    public:
        void _m15797(Serializable* serializable, T811* buff);
    public:
        void _m15798(Serializable* serializable, T811* buff);
    public:
        void _m15799(Serializable* serializable, T811* buff);
    public:
        void _m15800(Serializable* serializable, T811* buff);
    public:
        void _m15801(Serializable* serializable, T811* buff);
    public:
        void _m15802(Serializable* serializable, T811* buff);
    public:
        void _m15803(Serializable* serializable, T811* buff);
    public:
        void _m15804(Serializable* serializable, T811* buff);
    public:
        void _m15805(Serializable* serializable, T811* buff);
    public:
        void _m15806(Serializable* serializable, T811* buff);
    public:
        void _m15807(Serializable* serializable, T811* buff);
    public:
        void _m15808(Serializable* serializable, T811* buff);
    public:
        void _m15809(Serializable* serializable, T811* buff);
    public:
        void _m15810(Serializable* serializable, T811* buff);
    public:
        void _m15811(Serializable* serializable, T811* buff);
    public:
        void _m15812(Serializable* serializable, T811* buff);
    public:
        void _m15813(Serializable* serializable, T811* buff);
    public:
        void _m15814(Serializable* serializable, T811* buff);
    public:
        void _m15815(Serializable* serializable, T811* buff);
    public:
        void _m15816(Serializable* serializable, T811* buff);
    public:
        void _m15817(Serializable* serializable, T811* buff);
    public:
        void _m15818(Serializable* serializable, T811* buff);
    public:
        void _m15819(Serializable* serializable, T811* buff);
    public:
        void _m15820(Serializable* serializable, T811* buff);
    public:
        void _m15821(Serializable* serializable, T811* buff);
    public:
        void _m15822(Serializable* serializable, T811* buff);
    public:
        void _m15823(Serializable* serializable, T811* buff);
    public:
        void _m15824(Serializable* serializable, T811* buff);
    public:
        void _m15825(Serializable* serializable, T811* buff);
    public:
        void _m15826(Serializable* serializable, T811* buff);
    public:
        void _m15827(Serializable* serializable, T811* buff);
    public:
        void _m15828(Serializable* serializable, T811* buff);
    public:
        void _m15829(Serializable* serializable, T811* buff);
    public:
        void _m15830(Serializable* serializable, T811* buff);
    public:
        void _m15831(Serializable* serializable, T811* buff);
    public:
        void _m15832(Serializable* serializable, T811* buff);
    public:
        void _m15833(Serializable* serializable, T811* buff);
    public:
        void _m15834(Serializable* serializable, T811* buff);
    public:
        void _m15835(Serializable* serializable, T811* buff);
    public:
        void _m15836(Serializable* serializable, T811* buff);
    public:
        void _m15837(Serializable* serializable, T811* buff);
    public:
        void _m15838(Serializable* serializable, T811* buff);
    public:
        void _m15839(Serializable* serializable, T811* buff);
    public:
        void _m15840(Serializable* serializable, T811* buff);
    public:
        void _m15841(Serializable* serializable, T811* buff);
    public:
        void _m15842(Serializable* serializable, T811* buff);
    public:
        void _m15843(Serializable* serializable, T811* buff);
    public:
        void _m15844(Serializable* serializable, T811* buff);
    public:
        void _m15845(Serializable* serializable, T811* buff);
    public:
        void _m15846(Serializable* serializable, T811* buff);
    public:
        void _m15847(Serializable* serializable, T811* buff);
    public:
        void _m15848(Serializable* serializable, T811* buff);
    public:
        void _m15849(Serializable* serializable, T811* buff);
    public:
        void _m15850(Serializable* serializable, T811* buff);
    public:
        void _m15851(Serializable* serializable, T811* buff);
    public:
        void _m15852(Serializable* serializable, T811* buff);
    public:
        void _m15853(Serializable* serializable, T811* buff);
    public:
        void _m15854(Serializable* serializable, T811* buff);
    public:
        void _m15855(Serializable* serializable, T811* buff);
    public:
        void _m15856(Serializable* _t7303, T811* _k7304);
    public:
        void _m15857(Serializable* _m7309, T811* _l7310);
    public:
        void _m15858(Serializable* _d7327, T811* _b7328);
    public:
        void _m15859(Serializable* _r7336, T811* _r7337);
    public:
        void _m15860(Serializable* _r7342, T811* _i7343);
    public:
        void _m15861(Serializable* _t7351, T811* _l7352);
    public:
        void _m15862(Serializable* _o7357, T811* _y7358);
    public:
        void _m15863(Serializable* _a7366, T811* _t7367);
    public:
        void _m15864(Serializable* _p7378, T811* _x7379);
    public:
        void _m15865(Serializable* _p7390, T811* _o7391);
    public:
        void _m15866(Serializable* _d7399, T811* _o7400);
    public:
        void _m15867(Serializable* _u7408, T811* _u7409);
    public:
        void _m15868(Serializable* _l7426, T811* _q7427);
    public:
        void _m15869(Serializable* _o7459, T811* _t7460);
    public:
        void _m15870(Serializable* _k7474, T811* _n7475);
    public:
        void _m15871(Serializable* _b7486, T811* _y7487);
    public:
        void _m15872(Serializable* _y7501, T811* _q7502);
    public:
        void _m15873(Serializable* serializable, T811* buff);
    public:
        void _m15874(Serializable* serializable, T811* buff);
    public:
        void _m15875(Serializable* serializable, T811* buff);
    public:
        void _m15876(Serializable* serializable, T811* buff);
    public:
        void _m15877(Serializable* serializable, T811* buff);
    public:
        void _m15878(Serializable* _y7507, T811* _t7508);
    public:
        void _m15879(Serializable* serializable, T811* buff);
    public:
        void _m15880(Serializable* serializable, T811* buff);
    public:
        void _m15881(Serializable* serializable, T811* buff);
    public:
        void _m15882(Serializable* _i7519, T811* _j7520);
    public:
        void _m15883(Serializable* serializable, T811* buff);
    public:
        void _m15884(Serializable* serializable, T811* buff);
    public:
        void _m15885(Serializable* serializable, T811* buff);
    public:
        void _m15886(Serializable* _x7525, T811* _x7526);
    public:
        void _m15887(Serializable* serializable, T811* buff);
    public:
        void _m15888(Serializable* serializable, T811* buff);
    public:
        void _m15889(Serializable* _i7531, T811* _m7532);
    public:
        void _m15890(Serializable* serializable, T811* buff);
    public:
        void _m15891(Serializable* _r7537, T811* _v7538);
    public:
        void _m15892(Serializable* _f7543, T811* _k7544);
    public:
        void _m15893(Serializable* serializable, T811* buff);
    public:
        void _m15894(Serializable* _i7554, T811* _r7555);
    public:
        void _m15895(Serializable* serializable, T811* buff);
    public:
        void _m15896(Serializable* serializable, T811* buff);
    public:
        void _m15897(Serializable* serializable, T811* buff);
    public:
        void _m15898(Serializable* serializable, T811* buff);
    public:
        void _m15899(Serializable* serializable, T811* buff);
    public:
        void _m15900(Serializable* _y7565, T811* _e7566);
    public:
        void _m15901(Serializable* _s7571, T811* _o7572);
    public:
        void _m15902(Serializable* serializable, T811* buff);
    public:
        void _m15903(Serializable* _d7577, T811* _c7578);
    public:
        void _m15904(Serializable* serializable, T811* buff);
    public:
        void _m15905(Serializable* _f7589, T811* _h7590);
    public:
        void _m15906(Serializable* serializable, T811* buff);
    public:
        void _m15907(Serializable* _h7595, T811* _g7596);
    public:
        void _m15908(Serializable* serializable, T811* buff);
    public:
        void _m15909(Serializable* serializable, T811* buff);
    public:
        void _m15910(Serializable* _y7601, T811* _c7602);
    public:
        void _m15911(Serializable* serializable, T811* buff);
    public:
        void _m15912(Serializable* serializable, T811* buff);
    public:
        void _m15913(Serializable* serializable, T811* buff);
    public:
        void _m15914(Serializable* _x7607, T811* _v7608);
    public:
        void _m15915(Serializable* serializable, T811* buff);
    public:
        void _m15916(Serializable* _l7613, T811* _u7614);
    public:
        void _m15917(Serializable* serializable, T811* buff);
    public:
        void _m15918(Serializable* serializable, T811* buff);
    public:
        void _m15919(Serializable* _j7624, T811* _x7625);
    public:
        void _m15920(Serializable* serializable, T811* buff);
    public:
        void _m15921(Serializable* _u7630, T811* _o7631);
    public:
        void _m15922(Serializable* _i7636, T811* _f7637);
    public:
        void _m15923(Serializable* serializable, T811* buff);
    public:
        void _m15924(Serializable* _x7642, T811* _w7643);
    public:
        void _m15925(Serializable* _o7648, T811* _q7649);
    public:
        void _m15926(Serializable* _u7654, T811* _i7655);
    public:
        void _m15927(Serializable* serializable, T811* buff);
    public:
        void _m15928(Serializable* _p7660, T811* _h7661);
    public:
        void _m15929(Serializable* _m7666, T811* _e7667);
    public:
        void _m15930(Serializable* serializable, T811* buff);
    public:
        void _m15931(Serializable* _y7672, T811* _m7673);
    public:
        void _m15932(Serializable* _m7678, T811* _h7679);
    public:
        void _m15933(Serializable* serializable, T811* buff);
    public:
        void _m15934(Serializable* serializable, T811* buff);
    public:
        void _m15935(Serializable* _v7684, T811* _v7685);
    public:
        void _m15936(Serializable* serializable, T811* buff);
    public:
        void _m15937(Serializable* serializable, T811* buff);
    public:
        void _m15938(Serializable* serializable, T811* buff);
    public:
        void _m15939(Serializable* serializable, T811* buff);
    public:
        void _m15940(Serializable* _c7690, T811* _g7691);
    public:
        void _m15941(Serializable* serializable, T811* buff);
    public:
        void _m15942(Serializable* _a7701, T811* _v7702);
    public:
        void _m15943(Serializable* serializable, T811* buff);
    public:
        void _m15944(Serializable* _q7707, T811* _s7708);
    public:
        void _m15945(Serializable* serializable, T811* buff);
    public:
        void _m15946(Serializable* _d7713, T811* _j7714);
    public:
        void _m15947(Serializable* _d7719, T811* _v7720);
    public:
        void _m15948(Serializable* serializable, T811* buff);
    public:
        void _m15949(Serializable* _w7725, T811* _z7726);
    public:
        void _m15950(Serializable* _c7731, T811* _b7732);
    public:
        void _m15951(Serializable* serializable, T811* buff);
    public:
        void _m15952(Serializable* _c7737, T811* _r7738);
    public:
        void _m15953(Serializable* serializable, T811* buff);
    public:
        void _m15954(Serializable* serializable, T811* buff);
    public:
        void _m15955(Serializable* _j7743, T811* _g7744);
    public:
        void _m15956(Serializable* serializable, T811* buff);
    public:
        void _m15957(Serializable* serializable, T811* buff);
    public:
        void _m15958(Serializable* serializable, T811* buff);
    public:
        void _m15959(Serializable* _r7749, T811* _v7750);
    public:
        void _m15960(Serializable* _g7755, T811* _u7756);
    public:
        void _m15961(Serializable* serializable, T811* buff);
    public:
        void _m15962(Serializable* _i7761, T811* _e7762);
    public:
        void _m15963(Serializable* _t7767, T811* _o7768);
    public:
        void _m15964(Serializable* serializable, T811* buff);
    public:
        void _m15965(Serializable* serializable, T811* buff);
    public:
        void _m15966(Serializable* serializable, T811* buff);
    public:
        void _m15967(Serializable* _y7773, T811* _f7774);
    public:
        void _m15968(Serializable* serializable, T811* buff);
    public:
        void _m15969(Serializable* _v7779, T811* _q7780);
    public:
        void _m15970(Serializable* _r7785, T811* _v7786);
    public:
        void _m15971(Serializable* serializable, T811* buff);
    public:
        void _m15972(Serializable* serializable, T811* buff);
    public:
        void _m15973(Serializable* _y7791, T811* _w7792);
    public:
        void _m15974(Serializable* _w7797, T811* _u7798);
    public:
        void _m15975(Serializable* serializable, T811* buff);
    public:
        void _m15976(Serializable* _g7803, T811* _h7804);
    public:
        void _m15977(Serializable* serializable, T811* buff);
    public:
        void _m15978(Serializable* _l7809, T811* _i7810);
    public:
        void _m15979(Serializable* serializable, T811* buff);
    public:
        void _m15980(Serializable* _o7820, T811* _x7821);
    public:
        void _m15981(Serializable* serializable, T811* buff);
    public:
        void _m15982(Serializable* _t7831, T811* _u7832);
    public:
        void _m15983(Serializable* serializable, T811* buff);
    public:
        void _m15984(Serializable* serializable, T811* buff);
    public:
        void _m15985(Serializable* _s7842, T811* _f7843);
    public:
        void _m15986(Serializable* serializable, T811* buff);
    public:
        void _m15987(Serializable* serializable, T811* buff);
    public:
        void _m15988(Serializable* serializable, T811* buff);
    public:
        void _m15989(Serializable* serializable, T811* buff);
    public:
        void _m15990(Serializable* _h7848, T811* _r7849);
    public:
        void _m15991(Serializable* serializable, T811* buff);
    public:
        void _m15992(Serializable* _c7854, T811* _d7855);
    public:
        void _m15993(Serializable* serializable, T811* buff);
    public:
        void _m15994(Serializable* _e7860, T811* _o7861);
    public:
        void _m15995(Serializable* serializable, T811* buff);
    public:
        void _m15996(Serializable* _g7871, T811* _a7872);
    public:
        void _m15997(Serializable* serializable, T811* buff);
    public:
        void _m15998(Serializable* serializable, T811* buff);
    public:
        void _m15999(Serializable* _e7877, T811* _g7878);
    public:
        void _m16000(Serializable* serializable, T811* buff);
    public:
        void _m16001(Serializable* _b7883, T811* _z7884);
    public:
        void _m16002(Serializable* serializable, T811* buff);
    public:
        void _m16003(Serializable* _r7889, T811* _d7890);
    public:
        void _m16004(Serializable* _m7895, T811* _v7896);
    public:
        void _m16005(Serializable* serializable, T811* buff);
    public:
        void _m16006(Serializable* serializable, T811* buff);
    public:
        void _m16007(Serializable* serializable, T811* buff);
    public:
        void _m16008(Serializable* serializable, T811* buff);
    public:
        void _m16009(Serializable* _z7901, T811* _n7902);
    public:
        void _m16010(Serializable* serializable, T811* buff);
    public:
        void _m16011(Serializable* serializable, T811* buff);
    public:
        void _m16012(Serializable* _p7907, T811* _q7908);
    public:
        void _m16013(Serializable* serializable, T811* buff);
    public:
        void _m16014(Serializable* _w7913, T811* _f7914);
    public:
        void _m16015(Serializable* serializable, T811* buff);
    public:
        void _m16016(Serializable* serializable, T811* buff);
    public:
        void _m16017(Serializable* serializable, T811* buff);
    public:
        void _m16018(Serializable* _m7919, T811* _b7920);
    public:
        void _m16019(Serializable* _h7925, T811* _b7926);
    public:
        void _m16020(Serializable* serializable, T811* buff);
    public:
        void _m16021(Serializable* serializable, T811* buff);
    public:
        void _m16022(Serializable* _a7931, T811* _i7932);
    public:
        void _m16023(Serializable* serializable, T811* buff);
    public:
        void _m16024(Serializable* serializable, T811* buff);
    public:
        void _m16025(Serializable* serializable, T811* buff);
    public:
        void _m16026(Serializable* _w8691, T811* _j7938);
    public:
        Serializable* _m16049(T808* buffer);
    public:
        Serializable* _m16050(T808* _u8699, short _b8700);
    public:
        Serializable* _m16051(T811* buff);
    public:
        Serializable* _m16052(T811* buff);
    public:
        Serializable* _m16053(T811* buff);
    public:
        Serializable* _m16054(T811* buff);
    public:
        Serializable* _m16055(T811* buff);
    public:
        Serializable* _m16056(T811* buff);
    public:
        Serializable* _m16057(T811* buff);
    public:
        Serializable* _m16058(T811* buff);
    public:
        Serializable* _m16059(T811* buff);
    public:
        Serializable* _m16060(T811* buff);
    public:
        Serializable* _m16061(T811* buff);
    public:
        Serializable* _m16062(T811* buff);
    public:
        Serializable* _m16063(T811* buff);
    public:
        Serializable* _m16064(T811* buff);
    public:
        Serializable* _m16065(T811* buff);
    public:
        Serializable* _m16066(T811* buff);
    public:
        Serializable* _m16067(T811* buff);
    public:
        Serializable* _m16068(T811* buff);
    public:
        Serializable* _m16069(T811* buff);
    public:
        Serializable* _m16070(T811* buff);
    public:
        Serializable* _m16071(T811* buff);
    public:
        Serializable* _m16072(T811* buff);
    public:
        Serializable* _m16073(T811* buff);
    public:
        Serializable* _m16074(T811* buff);
    public:
        Serializable* _m16075(T811* _g8063);
    public:
        Serializable* _m16076(T811* buff);
    public:
        Serializable* _m16077(T811* buff);
    public:
        Serializable* _m16078(T811* buff);
    public:
        Serializable* _m16079(T811* buff);
    public:
        Serializable* _m16080(T811* buff);
    public:
        Serializable* _m16081(T811* buff);
    public:
        Serializable* _m16082(T811* buff);
    public:
        Serializable* _m16083(T811* buff);
    public:
        Serializable* _m16084(T811* buff);
    public:
        Serializable* _m16085(T811* _h8069);
    public:
        Serializable* _m16086(T811* buff);
    public:
        Serializable* _m16087(T811* buff);
    public:
        Serializable* _m16088(T811* buff);
    public:
        Serializable* _m16089(T811* buff);
    public:
        Serializable* _m16090(T811* buff);
    public:
        Serializable* _m16091(T811* buff);
    public:
        Serializable* _m16092(T811* buff);
    public:
        Serializable* _m16093(T811* buff);
    public:
        Serializable* _m16094(T811* buff);
    public:
        Serializable* _m16095(T811* buff);
    public:
        Serializable* _m16096(T811* buff);
    public:
        Serializable* _m16097(T811* buff);
    public:
        Serializable* _m16098(T811* buff);
    public:
        Serializable* _m16099(T811* _i8075);
    public:
        Serializable* _m16100(T811* buff);
    public:
        Serializable* _m16101(T811* buff);
    public:
        Serializable* _m16102(T811* buff);
    public:
        Serializable* _m16103(T811* buff);
    public:
        Serializable* _m16104(T811* buff);
    public:
        Serializable* _m16105(T811* buff);
    public:
        Serializable* _m16106(T811* buff);
    public:
        Serializable* _m16107(T811* buff);
    public:
        Serializable* _m16108(T811* buff);
    public:
        Serializable* _m16109(T811* buff);
    public:
        Serializable* _m16110(T811* buff);
    public:
        Serializable* _m16111(T811* buff);
    public:
        Serializable* _m16112(T811* buff);
    public:
        Serializable* _m16113(T811* buff);
    public:
        Serializable* _m16114(T811* buff);
    public:
        Serializable* _m16115(T811* buff);
    public:
        Serializable* _m16116(T811* buff);
    public:
        Serializable* _m16117(T811* buff);
    public:
        Serializable* _m16118(T811* buff);
    public:
        Serializable* _m16119(T811* buff);
    public:
        Serializable* _m16120(T811* buff);
    public:
        Serializable* _m16121(T811* buff);
    public:
        Serializable* _m16122(T811* _q8086);
    public:
        Serializable* _m16123(T811* _g8092);
    public:
        Serializable* _m16124(T811* buff);
    public:
        Serializable* _m16125(T811* buff);
    public:
        Serializable* _m16126(T811* buff);
    public:
        Serializable* _m16127(T811* _f8103);
    public:
        Serializable* _m16128(T811* buff);
    public:
        Serializable* _m16129(T811* _y8109);
    public:
        Serializable* _m16130(T811* _c8115);
    public:
        Serializable* _m16131(T811* buff);
    public:
        Serializable* _m16132(T811* buff);
    public:
        Serializable* _m16133(T811* _h8121);
    public:
        Serializable* _m16134(T811* buff);
    public:
        Serializable* _m16135(T811* buff);
    public:
        Serializable* _m16136(T811* _l8127);
    public:
        Serializable* _m16137(T811* _k8133);
    public:
        Serializable* _m16138(T811* buff);
    public:
        Serializable* _m16139(T811* buff);
    public:
        Serializable* _m16140(T811* _b8139);
    public:
        Serializable* _m16141(T811* buff);
    public:
        Serializable* _m16142(T811* buff);
    public:
        Serializable* _m16143(T811* buff);
    public:
        Serializable* _m16144(T811* buff);
    public:
        Serializable* _m16145(T811* _p8145);
    public:
        Serializable* _m16146(T811* buff);
    public:
        Serializable* _m16147(T811* buff);
    public:
        Serializable* _m16148(T811* buff);
    public:
        Serializable* _m16149(T811* _y8151);
    public:
        Serializable* _m16150(T811* buff);
    public:
        Serializable* _m16151(T811* _y8157);
    public:
        Serializable* _m16152(T811* buff);
    public:
        Serializable* _m16153(T811* buff);
    public:
        Serializable* _m16154(T811* buff);
    public:
        Serializable* _m16155(T811* _x8163);
    public:
        Serializable* _m16156(T811* buff);
    public:
        Serializable* _m16157(T811* buff);
    public:
        Serializable* _m16158(T811* buff);
    public:
        Serializable* _m16159(T811* _f8169);
    public:
        Serializable* _m16160(T811* buff);
    public:
        Serializable* _m16161(T811* buff);
    public:
        Serializable* _m16162(T811* buff);
    public:
        Serializable* _m16163(T811* _u8175);
    public:
        Serializable* _m16164(T811* buff);
    public:
        Serializable* _m16165(T811* _f8181);
    public:
        Serializable* _m16166(T811* buff);
    public:
        Serializable* _m16167(T811* _i8187);
    public:
        Serializable* _m16168(T811* buff);
    public:
        Serializable* _m16169(T811* buff);
    public:
        Serializable* _m16170(T811* buff);
    public:
        Serializable* _m16171(T811* _e8193);
    public:
        Serializable* _m16172(T811* buff);
    public:
        Serializable* _m16173(T811* _i8199);
    public:
        Serializable* _m16174(T811* buff);
    public:
        Serializable* _m16175(T811* buff);
    public:
        Serializable* _m16176(T811* _m8205);
    public:
        Serializable* _m16177(T811* buff);
    public:
        Serializable* _m16178(T811* _f8211);
    public:
        Serializable* _m16179(T811* buff);
    public:
        Serializable* _m16180(T811* buff);
    public:
        Serializable* _m16181(T811* _q8217);
    public:
        Serializable* _m16182(T811* _y8223);
    public:
        Serializable* _m16183(T811* buff);
    public:
        Serializable* _m16184(T811* _t8229);
    public:
        Serializable* _m16185(T811* buff);
    public:
        Serializable* _m16186(T811* _n8235);
    public:
        Serializable* _m16187(T811* buff);
    public:
        Serializable* _m16188(T811* buff);
    public:
        Serializable* _m16189(T811* _f8241);
    public:
        Serializable* _m16190(T811* buff);
    public:
        Serializable* _m16191(T811* buff);
    public:
        Serializable* _m16192(T811* _n8247);
    public:
        Serializable* _m16193(T811* buff);
    public:
        Serializable* _m16194(T811* buff);
    public:
        Serializable* _m16195(T811* _h8253);
    public:
        Serializable* _m16196(T811* buff);
    public:
        Serializable* _m16197(T811* buff);
    public:
        Serializable* _m16198(T811* buff);
    public:
        Serializable* _m16199(T811* _j8259);
    public:
        Serializable* _m16200(T811* buff);
    public:
        Serializable* _m16201(T811* _d8265);
    public:
        Serializable* _m16202(T811* buff);
    public:
        Serializable* _m16203(T811* buff);
    public:
        Serializable* _m16204(T811* buff);
    public:
        Serializable* _m16205(T811* _w8271);
    public:
        Serializable* _m16206(T811* buff);
    public:
        Serializable* _m16207(T811* buff);
    public:
        Serializable* _m16208(T811* _k8277);
    public:
        Serializable* _m16209(T811* buff);
    public:
        Serializable* _m16210(T811* _i8283);
    public:
        Serializable* _m16211(T811* buff);
    public:
        Serializable* _m16212(T811* buff);
    public:
        Serializable* _m16213(T811* _t8289);
    public:
        Serializable* _m16214(T811* buff);
    public:
        Serializable* _m16215(T811* buff);
    public:
        Serializable* _m16216(T811* _k8295);
    public:
        Serializable* _m16217(T811* buff);
    public:
        Serializable* _m16218(T811* buff);
    public:
        Serializable* _m16219(T811* _u8301);
    public:
        Serializable* _m16220(T811* buff);
    public:
        Serializable* _m16221(T811* _s8307);
    public:
        Serializable* _m16222(T811* buff);
    public:
        Serializable* _m16223(T811* buff);
    public:
        Serializable* _m16224(T811* _l8313);
    public:
        Serializable* _m16225(T811* buff);
    public:
        Serializable* _m16226(T811* _x8319);
    public:
        Serializable* _m16227(T811* buff);
    public:
        Serializable* _m16228(T811* buff);
    public:
        Serializable* _m16229(T811* _o8325);
    public:
        Serializable* _m16230(T811* buff);
    public:
        Serializable* _m16231(T811* buff);
    public:
        Serializable* _m16232(T811* _x8331);
    public:
        Serializable* _m16233(T811* buff);
    public:
        Serializable* _m16234(T811* buff);
    public:
        Serializable* _m16235(T811* buff);
    public:
        Serializable* _m16236(T811* buff);
    public:
        Serializable* _m16237(T811* _v8342);
    public:
        Serializable* _m16238(T811* buff);
    public:
        Serializable* _m16239(T811* buff);
    public:
        Serializable* _m16240(T811* _g8348);
    public:
        Serializable* _m16241(T811* buff);
    public:
        Serializable* _m16242(T811* _b8354);
    public:
        Serializable* _m16243(T811* buff);
    public:
        Serializable* _m16244(T811* buff);
    public:
        Serializable* _m16245(T811* _r8360);
    public:
        Serializable* _m16246(T811* buff);
    public:
        Serializable* _m16247(T811* buff);
    public:
        Serializable* _m16248(T811* buff);
    public:
        Serializable* _m16249(T811* buff);
    public:
        Serializable* _m16250(T811* _o8371);
    public:
        Serializable* _m16251(T811* buff);
    public:
        Serializable* _m16252(T811* _h8377);
    public:
        Serializable* _m16253(T811* buff);
    public:
        Serializable* _m16254(T811* buff);
    public:
        Serializable* _m16255(T811* _q8383);
    public:
        Serializable* _m16256(T811* buff);
    public:
        Serializable* _m16257(T811* buff);
    public:
        Serializable* _m16258(T811* _g8389);
    public:
        Serializable* _m16259(T811* buff);
    public:
        Serializable* _m16260(T811* _h8395);
    public:
        Serializable* _m16261(T811* buff);
    public:
        Serializable* _m16262(T811* buff);
    public:
        Serializable* _m16263(T811* _k8401);
    public:
        Serializable* _m16264(T811* buff);
    public:
        Serializable* _m16265(T811* buff);
    public:
        Serializable* _m16266(T811* buff);
    public:
        Serializable* _m16267(T811* _h8407);
    public:
        Serializable* _m16268(T811* buff);
    public:
        Serializable* _m16269(T811* buff);
    public:
        Serializable* _m16270(T811* _n8413);
    public:
        Serializable* _m16271(T811* buff);
    public:
        Serializable* _m16272(T811* buff);
    public:
        Serializable* _m16273(T811* buff);
    public:
        Serializable* _m16274(T811* buff);
    public:
        Serializable* _m16275(T811* _v8424);
    public:
        Serializable* _m16276(T811* buff);
    public:
        Serializable* _m16277(T811* _o8430);
    public:
        Serializable* _m16278(T811* buff);
    public:
        Serializable* _m16279(T811* buff);
    public:
        Serializable* _m16280(T811* _y8436);
    public:
        Serializable* _m16281(T811* buff);
    public:
        Serializable* _m16282(T811* _f8442);
    public:
        Serializable* _m16283(T811* buff);
    public:
        Serializable* _m16284(T811* buff);
    public:
        Serializable* _m16285(T811* _p8448);
    public:
        Serializable* _m16286(T811* buff);
    public:
        Serializable* _m16287(T811* _h8454);
    public:
        Serializable* _m16288(T811* buff);
    public:
        Serializable* _m16289(T811* buff);
    public:
        Serializable* _m16290(T811* _c8460);
    public:
        Serializable* _m16291(T811* buff);
    public:
        Serializable* _m16292(T811* _v8466);
    public:
        Serializable* _m16293(T811* buff);
    public:
        Serializable* _m16294(T811* buff);
    public:
        Serializable* _m16295(T811* buff);
    public:
        Serializable* _m16296(T811* _q8472);
    public:
        Serializable* _m16297(T811* buff);
    public:
        Serializable* _m16298(T811* buff);
    public:
        Serializable* _m16299(T811* _w8478);
    public:
        Serializable* _m16300(T811* buff);
    public:
        Serializable* _m16301(T811* _n8484);
    public:
        Serializable* _m16302(T811* buff);
    public:
        Serializable* _m16303(T811* _a8490);
    public:
        Serializable* _m16304(T811* buff);
    public:
        Serializable* _m16305(T811* buff);
    public:
        Serializable* _m16306(T811* _g8496);
    public:
        Serializable* _m16307(T811* _k10332);
    public:
        T818();
    public:
        virtual ~T818();
};
#endif // _T818