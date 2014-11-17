#ifndef _NUGGETAMESSAGELISTENER
#define _NUGGETAMESSAGELISTENER
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

class NuggetaMessageListener {
    public:
        virtual void onHandshakeResponse(HandshakeResponse* message)=0;
    public:
        virtual void onGameStateChange(GameStateChange* message)=0;
    public:
        virtual void onPlayerEnterGame(PlayerEnterGame* message)=0;
    public:
        virtual void onFriendshipNotification(FriendshipNotification* message)=0;
    public:
        virtual void onPlayerUnjoinGame(PlayerUnjoinGame* message)=0;
    public:
        virtual void onConnectionLost(ConnectionLost* message)=0;
    public:
        virtual void onConnectionInterrupted(ConnectionInterrupted* message)=0;
    public:
        virtual void onConnectionResumed(ConnectionResumed* message)=0;
    public:
        virtual void onConnectionStop(ConnectionStop* message)=0;
    public:
        virtual void onFriendConnectedNotification(FriendConnectedNotification* message)=0;
    public:
        virtual void onFriendDisconnectedNotification(FriendDisconnectedNotification* message)=0;
    public:
        virtual void onNuggetaException(NuggetaException* message)=0;
    public:
        virtual void onOpenConnection(OpenConnection* message)=0;
    public:
        virtual void onRawMessage(NRawMessage* message)=0;
    public:
        virtual void onSessionExpired(SessionExpired* message)=0;
    public:
        virtual void onGameMessageError(GameMessageError* message)=0;
    public:
        virtual void onFriendDemandNotification(FriendDemandNotification* message)=0;
    public:
        virtual void onMyTurnNotification(MyTurnNotification* message)=0;
    public:
        virtual void onPlayerTurnNotification(PlayerTurnNotification* message)=0;
    public:
        virtual void onStartResponse(StartResponse* message)=0;
    public:
        virtual void onAskForFriendResponse(AskForFriendResponse* message)=0;
    public:
        virtual void onSignUpResponse(SignUpResponse* message)=0;
    public:
        virtual void onLoginResponse(LoginResponse* message)=0;
    public:
        virtual void onSavePlayerProfileResponse(SavePlayerProfileResponse* message)=0;
    public:
        virtual void onGetPlayerProfileResponse(GetPlayerProfileResponse* message)=0;
    public:
        virtual void onLogoutResponse(LogoutResponse* message)=0;
    public:
        virtual void onGetFriendsResponse(GetFriendsResponse* message)=0;
    public:
        virtual void onGetThirdPartyFriendsResponse(GetThirdPartyFriendsResponse* message)=0;
    public:
        virtual void onGetFriendDemandsResponse(GetFriendDemandsResponse* message)=0;
    public:
        virtual void onAcceptFriendDemandResponse(AcceptFriendDemandResponse* message)=0;
    public:
        virtual void onRefuseFriendDemandResponse(RefuseFriendDemandResponse* message)=0;
    public:
        virtual void onSubmitScoreResponse(SubmitScoreResponse* message)=0;
    public:
        virtual void onGetLeaderboardResponse(GetLeaderboardResponse* message)=0;
    public:
        virtual void onBuyItemResponse(BuyItemResponse* message)=0;
    public:
        virtual void onGetStoreResponse(GetStoreResponse* message)=0;
    public:
        virtual void onConsumeItemResponse(ConsumeItemResponse* message)=0;
    public:
        virtual void onIncreasePlayerWalletResponse(IncreasePlayerWalletResponse* message)=0;
    public:
        virtual void onGetPlayerWalletResponse(GetPlayerWalletResponse* message)=0;
    public:
        virtual void onGetAchievementBoardResponse(GetAchievementBoardResponse* message)=0;
    public:
        virtual void onAchieveResponse(AchieveResponse* message)=0;
    public:
        virtual void onSearchImmediateGameResponse(SearchImmediateGameResponse* message)=0;
    public:
        virtual void onJoinGameResponse(JoinGameResponse* message)=0;
    public:
        virtual void onUnjoinGameResponse(UnjoinGameResponse* message)=0;
    public:
        virtual void onStartGameResponse(StartGameResponse* message)=0;
    public:
        virtual void onStopGameResponse(StopGameResponse* message)=0;
    public:
        virtual void onCreateGameResponse(CreateGameResponse* message)=0;
    public:
        virtual void onGetGamesResponse(GetGamesResponse* message)=0;
    public:
        virtual void onSaveAsGhostResponse(SaveAsGhostResponse* message)=0;
    public:
        virtual void onGetGhostsResponse(GetGhostsResponse* message)=0;
    public:
        virtual void onLoadGhostResponse(LoadGhostResponse* message)=0;
    public:
        virtual void onSendGameChatResponse(SendGameChatResponse* message)=0;
    public:
        virtual void onGetStorablesResponse(GetStorablesResponse* message)=0;
    public:
        virtual void onSaveStorableResponse(SaveStorableResponse* message)=0;
    public:
        virtual void onNextPlayerTurnResponse(NextPlayerTurnResponse* message)=0;
    public:
        virtual void onSetPlayerNameResponse(SetPlayerNameResponse* message)=0;
    public:
        virtual void onUpdateStorableResponse(UpdateStorableResponse* message)=0;
    public:
        virtual void onRemoveStorableResponse(RemoveStorableResponse* message)=0;
    public:
        virtual void onInviteThirdPartyFriendResponse(InviteThirdPartyFriendResponse* message)=0;
    public:
        virtual void onPublishThirdPartyMessageResponse(PublishThirdPartyMessageResponse* message)=0;
    public:
        virtual void onThirdPartyLoginResponse(ThirdPartyLoginResponse* message)=0;
    public:
        virtual void onSaveGameResponse(SaveGameResponse* message)=0;
    public:
        virtual void onLoadGameResponse(LoadGameResponse* message)=0;
    public:
        virtual void onSavePlayerStorableResponse(SavePlayerStorableResponse* message)=0;
    public:
        virtual void onUpdatePlayerStorableResponse(UpdatePlayerStorableResponse* message)=0;
    public:
        virtual void onRemovePlayerStorableResponse(RemovePlayerStorableResponse* message)=0;
    public:
        virtual void onGetPlayerStorablesResponse(GetPlayerStorablesResponse* message)=0;
    public:
        virtual void onPauseSessionMonitoringResponse(PauseSessionMonitoringResponse* message)=0;
    public:
        virtual void onResumeSessionMonitoringResponse(ResumeSessionMonitoringResponse* message)=0;
    public:
        virtual void onPublishFriendThirdPartyMessageResponse(PublishFriendThirdPartyMessageResponse* message)=0;
    public:
        virtual void onInvitePlayerResponse(InvitePlayerResponse* message)=0;
    public:
        virtual void onGetInvitationsResponse(GetInvitationsResponse* message)=0;
    public:
        virtual void onAcceptInvitationResponse(AcceptInvitationResponse* message)=0;
    public:
        virtual void onRefuseInvitationResponse(RefuseInvitationResponse* message)=0;
    public:
        virtual ~NuggetaMessageListener(){};
};
#endif // _NUGGETAMESSAGELISTENER