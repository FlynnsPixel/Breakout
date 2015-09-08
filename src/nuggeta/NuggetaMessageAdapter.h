#ifndef _NUGGETAMESSAGEADAPTER
#define _NUGGETAMESSAGEADAPTER
#include "NuggetaMessageListener.h"
#include "HandshakeResponse.h"
#include "GameStateChange.h"
#include "PlayerEnterGame.h"
#include "FriendshipNotification.h"
#include "PlayerUnjoinGame.h"
#include "ConnectionLost.h"
#include "ConnectionInterrupted.h"
#include "ConnectionResumed.h"
#include "ConnectionStop.h"
#include "FriendConnectedNotification.h"
#include "FriendDisconnectedNotification.h"
#include "NuggetaException.h"
#include "OpenConnection.h"
#include "NRawMessage.h"
#include "SessionExpired.h"
#include "GameMessageError.h"
#include "FriendDemandNotification.h"
#include "MyTurnNotification.h"
#include "PlayerTurnNotification.h"
#include "StartResponse.h"
#include "AskForFriendResponse.h"
#include "SignUpResponse.h"
#include "LoginResponse.h"
#include "SavePlayerProfileResponse.h"
#include "GetPlayerProfileResponse.h"
#include "LogoutResponse.h"
#include "GetFriendsResponse.h"
#include "GetThirdPartyFriendsResponse.h"
#include "GetFriendDemandsResponse.h"
#include "AcceptFriendDemandResponse.h"
#include "RefuseFriendDemandResponse.h"
#include "SubmitScoreResponse.h"
#include "GetLeaderboardResponse.h"
#include "BuyItemResponse.h"
#include "GetStoreResponse.h"
#include "ConsumeItemResponse.h"
#include "IncreasePlayerWalletResponse.h"
#include "GetPlayerWalletResponse.h"
#include "GetAchievementBoardResponse.h"
#include "AchieveResponse.h"
#include "SearchImmediateGameResponse.h"
#include "JoinGameResponse.h"
#include "UnjoinGameResponse.h"
#include "StartGameResponse.h"
#include "StopGameResponse.h"
#include "CreateGameResponse.h"
#include "GetGamesResponse.h"
#include "SaveAsGhostResponse.h"
#include "GetGhostsResponse.h"
#include "LoadGhostResponse.h"
#include "SendGameChatResponse.h"
#include "GetStorablesResponse.h"
#include "SaveStorableResponse.h"
#include "NextPlayerTurnResponse.h"
#include "SetPlayerNameResponse.h"
#include "UpdateStorableResponse.h"
#include "RemoveStorableResponse.h"
#include "InviteThirdPartyFriendResponse.h"
#include "PublishThirdPartyMessageResponse.h"
#include "ThirdPartyLoginResponse.h"
#include "SaveGameResponse.h"
#include "LoadGameResponse.h"
#include "SavePlayerStorableResponse.h"
#include "UpdatePlayerStorableResponse.h"
#include "RemovePlayerStorableResponse.h"
#include "GetPlayerStorablesResponse.h"
#include "PauseSessionMonitoringResponse.h"
#include "ResumeSessionMonitoringResponse.h"
#include "PublishFriendThirdPartyMessageResponse.h"
#include "InvitePlayerResponse.h"
#include "GetInvitationsResponse.h"
#include "AcceptInvitationResponse.h"
#include "RefuseInvitationResponse.h"

class NuggetaMessageAdapter :public  NuggetaMessageListener {
    public:
        void onHandshakeResponse(HandshakeResponse* message);
    public:
        void onGameStateChange(GameStateChange* message);
    public:
        void onPlayerEnterGame(PlayerEnterGame* message);
    public:
        void onFriendshipNotification(FriendshipNotification* message);
    public:
        void onPlayerUnjoinGame(PlayerUnjoinGame* message);
    public:
        void onConnectionLost(ConnectionLost* message);
    public:
        void onConnectionInterrupted(ConnectionInterrupted* message);
    public:
        void onConnectionResumed(ConnectionResumed* message);
    public:
        void onConnectionStop(ConnectionStop* message);
    public:
        void onFriendConnectedNotification(FriendConnectedNotification* message);
    public:
        void onFriendDisconnectedNotification(FriendDisconnectedNotification* message);
    public:
        void onNuggetaException(NuggetaException* message);
    public:
        void onOpenConnection(OpenConnection* message);
    public:
        void onRawMessage(NRawMessage* message);
    public:
        void onSessionExpired(SessionExpired* message);
    public:
        void onGameMessageError(GameMessageError* message);
    public:
        void onFriendDemandNotification(FriendDemandNotification* message);
    public:
        void onMyTurnNotification(MyTurnNotification* message);
    public:
        void onPlayerTurnNotification(PlayerTurnNotification* message);
    public:
        void onStartResponse(StartResponse* message);
    public:
        void onAskForFriendResponse(AskForFriendResponse* message);
    public:
        void onSignUpResponse(SignUpResponse* message);
    public:
        void onLoginResponse(LoginResponse* message);
    public:
        void onSavePlayerProfileResponse(SavePlayerProfileResponse* message);
    public:
        void onGetPlayerProfileResponse(GetPlayerProfileResponse* message);
    public:
        void onLogoutResponse(LogoutResponse* message);
    public:
        void onGetFriendsResponse(GetFriendsResponse* message);
    public:
        void onGetThirdPartyFriendsResponse(GetThirdPartyFriendsResponse* message);
    public:
        void onGetFriendDemandsResponse(GetFriendDemandsResponse* message);
    public:
        void onAcceptFriendDemandResponse(AcceptFriendDemandResponse* message);
    public:
        void onRefuseFriendDemandResponse(RefuseFriendDemandResponse* message);
    public:
        void onSubmitScoreResponse(SubmitScoreResponse* message);
    public:
        void onGetLeaderboardResponse(GetLeaderboardResponse* message);
    public:
        void onBuyItemResponse(BuyItemResponse* message);
    public:
        void onGetStoreResponse(GetStoreResponse* message);
    public:
        void onConsumeItemResponse(ConsumeItemResponse* message);
    public:
        void onIncreasePlayerWalletResponse(IncreasePlayerWalletResponse* message);
    public:
        void onGetPlayerWalletResponse(GetPlayerWalletResponse* message);
    public:
        void onGetAchievementBoardResponse(GetAchievementBoardResponse* message);
    public:
        void onAchieveResponse(AchieveResponse* message);
    public:
        void onSearchImmediateGameResponse(SearchImmediateGameResponse* message);
    public:
        void onJoinGameResponse(JoinGameResponse* message);
    public:
        void onUnjoinGameResponse(UnjoinGameResponse* message);
    public:
        void onStartGameResponse(StartGameResponse* message);
    public:
        void onStopGameResponse(StopGameResponse* message);
    public:
        void onCreateGameResponse(CreateGameResponse* message);
    public:
        void onGetGamesResponse(GetGamesResponse* message);
    public:
        void onSaveAsGhostResponse(SaveAsGhostResponse* message);
    public:
        void onGetGhostsResponse(GetGhostsResponse* message);
    public:
        void onLoadGhostResponse(LoadGhostResponse* message);
    public:
        void onSendGameChatResponse(SendGameChatResponse* message);
    public:
        void onGetStorablesResponse(GetStorablesResponse* message);
    public:
        void onSaveStorableResponse(SaveStorableResponse* message);
    public:
        void onNextPlayerTurnResponse(NextPlayerTurnResponse* message);
    public:
        void onSetPlayerNameResponse(SetPlayerNameResponse* message);
    public:
        void onUpdateStorableResponse(UpdateStorableResponse* message);
    public:
        void onRemoveStorableResponse(RemoveStorableResponse* message);
    public:
        void onInviteThirdPartyFriendResponse(InviteThirdPartyFriendResponse* message);
    public:
        void onPublishThirdPartyMessageResponse(PublishThirdPartyMessageResponse* message);
    public:
        void onThirdPartyLoginResponse(ThirdPartyLoginResponse* message);
    public:
        void onSaveGameResponse(SaveGameResponse* message);
    public:
        void onLoadGameResponse(LoadGameResponse* message);
    public:
        void onSavePlayerStorableResponse(SavePlayerStorableResponse* message);
    public:
        void onUpdatePlayerStorableResponse(UpdatePlayerStorableResponse* message);
    public:
        void onRemovePlayerStorableResponse(RemovePlayerStorableResponse* message);
    public:
        void onGetPlayerStorablesResponse(GetPlayerStorablesResponse* message);
    public:
        void onPauseSessionMonitoringResponse(PauseSessionMonitoringResponse* message);
    public:
        void onResumeSessionMonitoringResponse(ResumeSessionMonitoringResponse* message);
    public:
        void onPublishFriendThirdPartyMessageResponse(PublishFriendThirdPartyMessageResponse* message);
    public:
        void onInvitePlayerResponse(InvitePlayerResponse* message);
    public:
        void onGetInvitationsResponse(GetInvitationsResponse* message);
    public:
        void onAcceptInvitationResponse(AcceptInvitationResponse* message);
    public:
        void onRefuseInvitationResponse(RefuseInvitationResponse* message);
    public:
        NuggetaMessageAdapter();
    public:
        virtual ~NuggetaMessageAdapter();
};
#endif // _NUGGETAMESSAGEADAPTER