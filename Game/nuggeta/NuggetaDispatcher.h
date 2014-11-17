#ifndef _NUGGETADISPATCHER
#define _NUGGETADISPATCHER
#include "Dispatcher.h"
#include "NuggetaMessageListener.h"
#include <vector>
#include "HandshakeResponseHandler.h"
#include "HandshakeResponse.h"
#include "GameStateChangeHandler.h"
#include "GameStateChange.h"
#include "PlayerEnterGameHandler.h"
#include "PlayerEnterGame.h"
#include "FriendshipNotificationHandler.h"
#include "FriendshipNotification.h"
#include "PlayerUnjoinGameHandler.h"
#include "PlayerUnjoinGame.h"
#include "ConnectionLostHandler.h"
#include "ConnectionLost.h"
#include "ConnectionInterruptedHandler.h"
#include "ConnectionInterrupted.h"
#include "ConnectionResumedHandler.h"
#include "ConnectionResumed.h"
#include "ConnectionStopHandler.h"
#include "ConnectionStop.h"
#include "FriendConnectedNotificationHandler.h"
#include "FriendConnectedNotification.h"
#include "FriendDisconnectedNotificationHandler.h"
#include "FriendDisconnectedNotification.h"
#include "NuggetaExceptionHandler.h"
#include "NuggetaException.h"
#include "OpenConnectionHandler.h"
#include "OpenConnection.h"
#include "RawMessageHandler.h"
#include "NRawMessage.h"
#include "SessionExpiredHandler.h"
#include "SessionExpired.h"
#include "GameMessageErrorHandler.h"
#include "GameMessageError.h"
#include "FriendDemandNotificationHandler.h"
#include "FriendDemandNotification.h"
#include "MyTurnNotificationHandler.h"
#include "MyTurnNotification.h"
#include "PlayerTurnNotificationHandler.h"
#include "PlayerTurnNotification.h"
#include "StartResponseHandler.h"
#include "StartResponse.h"
#include "AskForFriendResponseHandler.h"
#include "AskForFriendResponse.h"
#include "SignUpResponseHandler.h"
#include "SignUpResponse.h"
#include "LoginResponseHandler.h"
#include "LoginResponse.h"
#include "SavePlayerProfileResponseHandler.h"
#include "SavePlayerProfileResponse.h"
#include "GetPlayerProfileResponseHandler.h"
#include "GetPlayerProfileResponse.h"
#include "LogoutResponseHandler.h"
#include "LogoutResponse.h"
#include "GetFriendsResponseHandler.h"
#include "GetFriendsResponse.h"
#include "GetThirdPartyFriendsResponseHandler.h"
#include "GetThirdPartyFriendsResponse.h"
#include "GetFriendDemandsResponseHandler.h"
#include "GetFriendDemandsResponse.h"
#include "AcceptFriendDemandResponseHandler.h"
#include "AcceptFriendDemandResponse.h"
#include "RefuseFriendDemandResponseHandler.h"
#include "RefuseFriendDemandResponse.h"
#include "SubmitScoreResponseHandler.h"
#include "SubmitScoreResponse.h"
#include "GetLeaderboardResponseHandler.h"
#include "GetLeaderboardResponse.h"
#include "BuyItemResponseHandler.h"
#include "BuyItemResponse.h"
#include "GetStoreResponseHandler.h"
#include "GetStoreResponse.h"
#include "ConsumeItemResponseHandler.h"
#include "ConsumeItemResponse.h"
#include "IncreasePlayerWalletResponseHandler.h"
#include "IncreasePlayerWalletResponse.h"
#include "GetPlayerWalletResponseHandler.h"
#include "GetPlayerWalletResponse.h"
#include "GetAchievementBoardResponseHandler.h"
#include "GetAchievementBoardResponse.h"
#include "AchieveResponseHandler.h"
#include "AchieveResponse.h"
#include "SearchImmediateGameResponseHandler.h"
#include "SearchImmediateGameResponse.h"
#include "JoinGameResponseHandler.h"
#include "JoinGameResponse.h"
#include "UnjoinGameResponseHandler.h"
#include "UnjoinGameResponse.h"
#include "StartGameResponseHandler.h"
#include "StartGameResponse.h"
#include "StopGameResponseHandler.h"
#include "StopGameResponse.h"
#include "CreateGameResponseHandler.h"
#include "CreateGameResponse.h"
#include "GetGamesResponseHandler.h"
#include "GetGamesResponse.h"
#include "SaveAsGhostResponseHandler.h"
#include "SaveAsGhostResponse.h"
#include "GetGhostsResponseHandler.h"
#include "GetGhostsResponse.h"
#include "LoadGhostResponseHandler.h"
#include "LoadGhostResponse.h"
#include "SendGameChatResponseHandler.h"
#include "SendGameChatResponse.h"
#include "GetStorablesResponseHandler.h"
#include "GetStorablesResponse.h"
#include "SaveStorableResponseHandler.h"
#include "SaveStorableResponse.h"
#include "NextPlayerTurnResponseHandler.h"
#include "NextPlayerTurnResponse.h"
#include "SetPlayerNameResponseHandler.h"
#include "SetPlayerNameResponse.h"
#include "UpdateStorableResponseHandler.h"
#include "UpdateStorableResponse.h"
#include "RemoveStorableResponseHandler.h"
#include "RemoveStorableResponse.h"
#include "InviteThirdPartyFriendResponseHandler.h"
#include "InviteThirdPartyFriendResponse.h"
#include "PublishThirdPartyMessageResponseHandler.h"
#include "PublishThirdPartyMessageResponse.h"
#include "ThirdPartyLoginResponseHandler.h"
#include "ThirdPartyLoginResponse.h"
#include "SaveGameResponseHandler.h"
#include "SaveGameResponse.h"
#include "LoadGameResponseHandler.h"
#include "LoadGameResponse.h"
#include "SavePlayerStorableResponseHandler.h"
#include "SavePlayerStorableResponse.h"
#include "UpdatePlayerStorableResponseHandler.h"
#include "UpdatePlayerStorableResponse.h"
#include "RemovePlayerStorableResponseHandler.h"
#include "RemovePlayerStorableResponse.h"
#include "GetPlayerStorablesResponseHandler.h"
#include "GetPlayerStorablesResponse.h"
#include "PauseSessionMonitoringResponseHandler.h"
#include "PauseSessionMonitoringResponse.h"
#include "ResumeSessionMonitoringResponseHandler.h"
#include "ResumeSessionMonitoringResponse.h"
#include "PublishFriendThirdPartyMessageResponseHandler.h"
#include "PublishFriendThirdPartyMessageResponse.h"
#include "InvitePlayerResponseHandler.h"
#include "InvitePlayerResponse.h"
#include "GetInvitationsResponseHandler.h"
#include "GetInvitationsResponse.h"
#include "AcceptInvitationResponseHandler.h"
#include "AcceptInvitationResponse.h"
#include "RefuseInvitationResponseHandler.h"
#include "RefuseInvitationResponse.h"
#include "Message.h"
#include <algorithm>
#include <functional>

class NuggetaDispatcher :public  Dispatcher {
    private:
        std::vector<NuggetaMessageListener*>* globalListeners;
    private:
        std::vector<HandshakeResponseHandler*>* HandshakeResponseHandlers;
    private:
        std::vector<GameStateChangeHandler*>* GameStateChangeHandlers;
    private:
        std::vector<PlayerEnterGameHandler*>* PlayerEnterGameHandlers;
    private:
        std::vector<FriendshipNotificationHandler*>* FriendshipNotificationHandlers;
    private:
        std::vector<PlayerUnjoinGameHandler*>* PlayerUnjoinGameHandlers;
    private:
        std::vector<ConnectionLostHandler*>* ConnectionLostHandlers;
    private:
        std::vector<ConnectionInterruptedHandler*>* ConnectionInterruptedHandlers;
    private:
        std::vector<ConnectionResumedHandler*>* ConnectionResumedHandlers;
    private:
        std::vector<ConnectionStopHandler*>* ConnectionStopHandlers;
    private:
        std::vector<FriendConnectedNotificationHandler*>* FriendConnectedNotificationHandlers;
    private:
        std::vector<FriendDisconnectedNotificationHandler*>* FriendDisconnectedNotificationHandlers;
    private:
        std::vector<NuggetaExceptionHandler*>* NuggetaExceptionHandlers;
    private:
        std::vector<OpenConnectionHandler*>* OpenConnectionHandlers;
    private:
        std::vector<RawMessageHandler*>* RawMessageHandlers;
    private:
        std::vector<SessionExpiredHandler*>* SessionExpiredHandlers;
    private:
        std::vector<GameMessageErrorHandler*>* GameMessageErrorHandlers;
    private:
        std::vector<FriendDemandNotificationHandler*>* FriendDemandNotificationHandlers;
    private:
        std::vector<MyTurnNotificationHandler*>* MyTurnNotificationHandlers;
    private:
        std::vector<PlayerTurnNotificationHandler*>* PlayerTurnNotificationHandlers;
    private:
        std::vector<StartResponseHandler*>* StartResponseHandlers;
    private:
        std::vector<AskForFriendResponseHandler*>* AskForFriendResponseHandlers;
    private:
        std::vector<SignUpResponseHandler*>* SignUpResponseHandlers;
    private:
        std::vector<LoginResponseHandler*>* LoginResponseHandlers;
    private:
        std::vector<SavePlayerProfileResponseHandler*>* SavePlayerProfileResponseHandlers;
    private:
        std::vector<GetPlayerProfileResponseHandler*>* GetPlayerProfileResponseHandlers;
    private:
        std::vector<LogoutResponseHandler*>* LogoutResponseHandlers;
    private:
        std::vector<GetFriendsResponseHandler*>* GetFriendsResponseHandlers;
    private:
        std::vector<GetThirdPartyFriendsResponseHandler*>* GetThirdPartyFriendsResponseHandlers;
    private:
        std::vector<GetFriendDemandsResponseHandler*>* GetFriendDemandsResponseHandlers;
    private:
        std::vector<AcceptFriendDemandResponseHandler*>* AcceptFriendDemandResponseHandlers;
    private:
        std::vector<RefuseFriendDemandResponseHandler*>* RefuseFriendDemandResponseHandlers;
    private:
        std::vector<SubmitScoreResponseHandler*>* SubmitScoreResponseHandlers;
    private:
        std::vector<GetLeaderboardResponseHandler*>* GetLeaderboardResponseHandlers;
    private:
        std::vector<BuyItemResponseHandler*>* BuyItemResponseHandlers;
    private:
        std::vector<GetStoreResponseHandler*>* GetStoreResponseHandlers;
    private:
        std::vector<ConsumeItemResponseHandler*>* ConsumeItemResponseHandlers;
    private:
        std::vector<IncreasePlayerWalletResponseHandler*>* IncreasePlayerWalletResponseHandlers;
    private:
        std::vector<GetPlayerWalletResponseHandler*>* GetPlayerWalletResponseHandlers;
    private:
        std::vector<GetAchievementBoardResponseHandler*>* GetAchievementBoardResponseHandlers;
    private:
        std::vector<AchieveResponseHandler*>* AchieveResponseHandlers;
    private:
        std::vector<SearchImmediateGameResponseHandler*>* SearchImmediateGameResponseHandlers;
    private:
        std::vector<JoinGameResponseHandler*>* JoinGameResponseHandlers;
    private:
        std::vector<UnjoinGameResponseHandler*>* UnjoinGameResponseHandlers;
    private:
        std::vector<StartGameResponseHandler*>* StartGameResponseHandlers;
    private:
        std::vector<StopGameResponseHandler*>* StopGameResponseHandlers;
    private:
        std::vector<CreateGameResponseHandler*>* CreateGameResponseHandlers;
    private:
        std::vector<GetGamesResponseHandler*>* GetGamesResponseHandlers;
    private:
        std::vector<SaveAsGhostResponseHandler*>* SaveAsGhostResponseHandlers;
    private:
        std::vector<GetGhostsResponseHandler*>* GetGhostsResponseHandlers;
    private:
        std::vector<LoadGhostResponseHandler*>* LoadGhostResponseHandlers;
    private:
        std::vector<SendGameChatResponseHandler*>* SendGameChatResponseHandlers;
    private:
        std::vector<GetStorablesResponseHandler*>* GetStorablesResponseHandlers;
    private:
        std::vector<SaveStorableResponseHandler*>* SaveStorableResponseHandlers;
    private:
        std::vector<NextPlayerTurnResponseHandler*>* NextPlayerTurnResponseHandlers;
    private:
        std::vector<SetPlayerNameResponseHandler*>* SetPlayerNameResponseHandlers;
    private:
        std::vector<UpdateStorableResponseHandler*>* UpdateStorableResponseHandlers;
    private:
        std::vector<RemoveStorableResponseHandler*>* RemoveStorableResponseHandlers;
    private:
        std::vector<InviteThirdPartyFriendResponseHandler*>* InviteThirdPartyFriendResponseHandlers;
    private:
        std::vector<PublishThirdPartyMessageResponseHandler*>* PublishThirdPartyMessageResponseHandlers;
    private:
        std::vector<ThirdPartyLoginResponseHandler*>* ThirdPartyLoginResponseHandlers;
    private:
        std::vector<SaveGameResponseHandler*>* SaveGameResponseHandlers;
    private:
        std::vector<LoadGameResponseHandler*>* LoadGameResponseHandlers;
    private:
        std::vector<SavePlayerStorableResponseHandler*>* SavePlayerStorableResponseHandlers;
    private:
        std::vector<UpdatePlayerStorableResponseHandler*>* UpdatePlayerStorableResponseHandlers;
    private:
        std::vector<RemovePlayerStorableResponseHandler*>* RemovePlayerStorableResponseHandlers;
    private:
        std::vector<GetPlayerStorablesResponseHandler*>* GetPlayerStorablesResponseHandlers;
    private:
        std::vector<PauseSessionMonitoringResponseHandler*>* PauseSessionMonitoringResponseHandlers;
    private:
        std::vector<ResumeSessionMonitoringResponseHandler*>* ResumeSessionMonitoringResponseHandlers;
    private:
        std::vector<PublishFriendThirdPartyMessageResponseHandler*>* PublishFriendThirdPartyMessageResponseHandlers;
    private:
        std::vector<InvitePlayerResponseHandler*>* InvitePlayerResponseHandlers;
    private:
        std::vector<GetInvitationsResponseHandler*>* GetInvitationsResponseHandlers;
    private:
        std::vector<AcceptInvitationResponseHandler*>* AcceptInvitationResponseHandlers;
    private:
        std::vector<RefuseInvitationResponseHandler*>* RefuseInvitationResponseHandlers;
    public:
        void fireMessage(Message* message);
    public:
        void addNuggetaMessageListener(NuggetaMessageListener* listener);
    public:
        void removeNuggetaMessageListener(NuggetaMessageListener* _p14625);
    public:
        void addHandshakeResponseHandler(HandshakeResponseHandler* handler);
    public:
        void removeHandshakeResponseHandler(HandshakeResponseHandler* handler);
    public:
        void addGameStateChangeHandler(GameStateChangeHandler* handler);
    public:
        void removeGameStateChangeHandler(GameStateChangeHandler* handler);
    public:
        void addPlayerEnterGameHandler(PlayerEnterGameHandler* handler);
    public:
        void removePlayerEnterGameHandler(PlayerEnterGameHandler* handler);
    public:
        void addFriendshipNotificationHandler(FriendshipNotificationHandler* handler);
    public:
        void removeFriendshipNotificationHandler(FriendshipNotificationHandler* handler);
    public:
        void addPlayerUnjoinGameHandler(PlayerUnjoinGameHandler* handler);
    public:
        void removePlayerUnjoinGameHandler(PlayerUnjoinGameHandler* handler);
    public:
        void addConnectionLostHandler(ConnectionLostHandler* handler);
    public:
        void removeConnectionLostHandler(ConnectionLostHandler* handler);
    public:
        void addConnectionInterruptedHandler(ConnectionInterruptedHandler* handler);
    public:
        void removeConnectionInterruptedHandler(ConnectionInterruptedHandler* handler);
    public:
        void addConnectionResumedHandler(ConnectionResumedHandler* handler);
    public:
        void removeConnectionResumedHandler(ConnectionResumedHandler* handler);
    public:
        void addConnectionStopHandler(ConnectionStopHandler* handler);
    public:
        void removeConnectionStopHandler(ConnectionStopHandler* handler);
    public:
        void addFriendConnectedNotificationHandler(FriendConnectedNotificationHandler* handler);
    public:
        void removeFriendConnectedNotificationHandler(FriendConnectedNotificationHandler* handler);
    public:
        void addFriendDisconnectedNotificationHandler(FriendDisconnectedNotificationHandler* handler);
    public:
        void removeFriendDisconnectedNotificationHandler(FriendDisconnectedNotificationHandler* handler);
    public:
        void addNuggetaExceptionHandler(NuggetaExceptionHandler* handler);
    public:
        void removeNuggetaExceptionHandler(NuggetaExceptionHandler* handler);
    public:
        void addOpenConnectionHandler(OpenConnectionHandler* handler);
    public:
        void removeOpenConnectionHandler(OpenConnectionHandler* handler);
    public:
        void addRawMessageHandler(RawMessageHandler* handler);
    public:
        void removeRawMessageHandler(RawMessageHandler* handler);
    public:
        void addSessionExpiredHandler(SessionExpiredHandler* handler);
    public:
        void removeSessionExpiredHandler(SessionExpiredHandler* handler);
    public:
        void addGameMessageErrorHandler(GameMessageErrorHandler* handler);
    public:
        void removeGameMessageErrorHandler(GameMessageErrorHandler* handler);
    public:
        void addFriendDemandNotificationHandler(FriendDemandNotificationHandler* handler);
    public:
        void removeFriendDemandNotificationHandler(FriendDemandNotificationHandler* handler);
    public:
        void addMyTurnNotificationHandler(MyTurnNotificationHandler* handler);
    public:
        void removeMyTurnNotificationHandler(MyTurnNotificationHandler* handler);
    public:
        void addPlayerTurnNotificationHandler(PlayerTurnNotificationHandler* handler);
    public:
        void removePlayerTurnNotificationHandler(PlayerTurnNotificationHandler* handler);
    public:
        void addStartResponseHandler(StartResponseHandler* handler);
    public:
        void removeStartResponseHandler(StartResponseHandler* handler);
    public:
        void addAskForFriendResponseHandler(AskForFriendResponseHandler* handler);
    public:
        void removeAskForFriendResponseHandler(AskForFriendResponseHandler* handler);
    public:
        void addSignUpResponseHandler(SignUpResponseHandler* handler);
    public:
        void removeSignUpResponseHandler(SignUpResponseHandler* handler);
    public:
        void addLoginResponseHandler(LoginResponseHandler* handler);
    public:
        void removeLoginResponseHandler(LoginResponseHandler* handler);
    public:
        void addSavePlayerProfileResponseHandler(SavePlayerProfileResponseHandler* handler);
    public:
        void removeSavePlayerProfileResponseHandler(SavePlayerProfileResponseHandler* handler);
    public:
        void addGetPlayerProfileResponseHandler(GetPlayerProfileResponseHandler* handler);
    public:
        void removeGetPlayerProfileResponseHandler(GetPlayerProfileResponseHandler* handler);
    public:
        void addLogoutResponseHandler(LogoutResponseHandler* handler);
    public:
        void removeLogoutResponseHandler(LogoutResponseHandler* handler);
    public:
        void addGetFriendsResponseHandler(GetFriendsResponseHandler* handler);
    public:
        void removeGetFriendsResponseHandler(GetFriendsResponseHandler* handler);
    public:
        void addGetThirdPartyFriendsResponseHandler(GetThirdPartyFriendsResponseHandler* handler);
    public:
        void removeGetThirdPartyFriendsResponseHandler(GetThirdPartyFriendsResponseHandler* handler);
    public:
        void addGetFriendDemandsResponseHandler(GetFriendDemandsResponseHandler* handler);
    public:
        void removeGetFriendDemandsResponseHandler(GetFriendDemandsResponseHandler* handler);
    public:
        void addAcceptFriendDemandResponseHandler(AcceptFriendDemandResponseHandler* handler);
    public:
        void removeAcceptFriendDemandResponseHandler(AcceptFriendDemandResponseHandler* handler);
    public:
        void addRefuseFriendDemandResponseHandler(RefuseFriendDemandResponseHandler* handler);
    public:
        void removeRefuseFriendDemandResponseHandler(RefuseFriendDemandResponseHandler* handler);
    public:
        void addSubmitScoreResponseHandler(SubmitScoreResponseHandler* handler);
    public:
        void removeSubmitScoreResponseHandler(SubmitScoreResponseHandler* handler);
    public:
        void addGetLeaderboardResponseHandler(GetLeaderboardResponseHandler* handler);
    public:
        void removeGetLeaderboardResponseHandler(GetLeaderboardResponseHandler* handler);
    public:
        void addBuyItemResponseHandler(BuyItemResponseHandler* handler);
    public:
        void removeBuyItemResponseHandler(BuyItemResponseHandler* handler);
    public:
        void addGetStoreResponseHandler(GetStoreResponseHandler* handler);
    public:
        void removeGetStoreResponseHandler(GetStoreResponseHandler* handler);
    public:
        void addConsumeItemResponseHandler(ConsumeItemResponseHandler* handler);
    public:
        void removeConsumeItemResponseHandler(ConsumeItemResponseHandler* handler);
    public:
        void addIncreasePlayerWalletResponseHandler(IncreasePlayerWalletResponseHandler* handler);
    public:
        void removeIncreasePlayerWalletResponseHandler(IncreasePlayerWalletResponseHandler* handler);
    public:
        void addGetPlayerWalletResponseHandler(GetPlayerWalletResponseHandler* handler);
    public:
        void removeGetPlayerWalletResponseHandler(GetPlayerWalletResponseHandler* handler);
    public:
        void addGetAchievementBoardResponseHandler(GetAchievementBoardResponseHandler* handler);
    public:
        void removeGetAchievementBoardResponseHandler(GetAchievementBoardResponseHandler* handler);
    public:
        void addAchieveResponseHandler(AchieveResponseHandler* handler);
    public:
        void removeAchieveResponseHandler(AchieveResponseHandler* handler);
    public:
        void addSearchImmediateGameResponseHandler(SearchImmediateGameResponseHandler* handler);
    public:
        void removeSearchImmediateGameResponseHandler(SearchImmediateGameResponseHandler* handler);
    public:
        void addJoinGameResponseHandler(JoinGameResponseHandler* handler);
    public:
        void removeJoinGameResponseHandler(JoinGameResponseHandler* handler);
    public:
        void addUnjoinGameResponseHandler(UnjoinGameResponseHandler* handler);
    public:
        void removeUnjoinGameResponseHandler(UnjoinGameResponseHandler* handler);
    public:
        void addStartGameResponseHandler(StartGameResponseHandler* handler);
    public:
        void removeStartGameResponseHandler(StartGameResponseHandler* handler);
    public:
        void addStopGameResponseHandler(StopGameResponseHandler* handler);
    public:
        void removeStopGameResponseHandler(StopGameResponseHandler* handler);
    public:
        void addCreateGameResponseHandler(CreateGameResponseHandler* handler);
    public:
        void removeCreateGameResponseHandler(CreateGameResponseHandler* handler);
    public:
        void addGetGamesResponseHandler(GetGamesResponseHandler* handler);
    public:
        void removeGetGamesResponseHandler(GetGamesResponseHandler* handler);
    public:
        void addSaveAsGhostResponseHandler(SaveAsGhostResponseHandler* handler);
    public:
        void removeSaveAsGhostResponseHandler(SaveAsGhostResponseHandler* handler);
    public:
        void addGetGhostsResponseHandler(GetGhostsResponseHandler* handler);
    public:
        void removeGetGhostsResponseHandler(GetGhostsResponseHandler* handler);
    public:
        void addLoadGhostResponseHandler(LoadGhostResponseHandler* handler);
    public:
        void removeLoadGhostResponseHandler(LoadGhostResponseHandler* handler);
    public:
        void addSendGameChatResponseHandler(SendGameChatResponseHandler* handler);
    public:
        void removeSendGameChatResponseHandler(SendGameChatResponseHandler* handler);
    public:
        void addGetStorablesResponseHandler(GetStorablesResponseHandler* handler);
    public:
        void removeGetStorablesResponseHandler(GetStorablesResponseHandler* handler);
    public:
        void addSaveStorableResponseHandler(SaveStorableResponseHandler* handler);
    public:
        void removeSaveStorableResponseHandler(SaveStorableResponseHandler* handler);
    public:
        void addNextPlayerTurnResponseHandler(NextPlayerTurnResponseHandler* handler);
    public:
        void removeNextPlayerTurnResponseHandler(NextPlayerTurnResponseHandler* handler);
    public:
        void addSetPlayerNameResponseHandler(SetPlayerNameResponseHandler* handler);
    public:
        void removeSetPlayerNameResponseHandler(SetPlayerNameResponseHandler* handler);
    public:
        void addUpdateStorableResponseHandler(UpdateStorableResponseHandler* handler);
    public:
        void removeUpdateStorableResponseHandler(UpdateStorableResponseHandler* handler);
    public:
        void addRemoveStorableResponseHandler(RemoveStorableResponseHandler* handler);
    public:
        void removeRemoveStorableResponseHandler(RemoveStorableResponseHandler* handler);
    public:
        void addInviteThirdPartyFriendResponseHandler(InviteThirdPartyFriendResponseHandler* handler);
    public:
        void removeInviteThirdPartyFriendResponseHandler(InviteThirdPartyFriendResponseHandler* handler);
    public:
        void addPublishThirdPartyMessageResponseHandler(PublishThirdPartyMessageResponseHandler* handler);
    public:
        void removePublishThirdPartyMessageResponseHandler(PublishThirdPartyMessageResponseHandler* handler);
    public:
        void addThirdPartyLoginResponseHandler(ThirdPartyLoginResponseHandler* handler);
    public:
        void removeThirdPartyLoginResponseHandler(ThirdPartyLoginResponseHandler* handler);
    public:
        void addSaveGameResponseHandler(SaveGameResponseHandler* handler);
    public:
        void removeSaveGameResponseHandler(SaveGameResponseHandler* handler);
    public:
        void addLoadGameResponseHandler(LoadGameResponseHandler* handler);
    public:
        void removeLoadGameResponseHandler(LoadGameResponseHandler* handler);
    public:
        void addSavePlayerStorableResponseHandler(SavePlayerStorableResponseHandler* handler);
    public:
        void removeSavePlayerStorableResponseHandler(SavePlayerStorableResponseHandler* handler);
    public:
        void addUpdatePlayerStorableResponseHandler(UpdatePlayerStorableResponseHandler* handler);
    public:
        void removeUpdatePlayerStorableResponseHandler(UpdatePlayerStorableResponseHandler* handler);
    public:
        void addRemovePlayerStorableResponseHandler(RemovePlayerStorableResponseHandler* handler);
    public:
        void removeRemovePlayerStorableResponseHandler(RemovePlayerStorableResponseHandler* handler);
    public:
        void addGetPlayerStorablesResponseHandler(GetPlayerStorablesResponseHandler* handler);
    public:
        void removeGetPlayerStorablesResponseHandler(GetPlayerStorablesResponseHandler* handler);
    public:
        void addPauseSessionMonitoringResponseHandler(PauseSessionMonitoringResponseHandler* handler);
    public:
        void removePauseSessionMonitoringResponseHandler(PauseSessionMonitoringResponseHandler* handler);
    public:
        void addResumeSessionMonitoringResponseHandler(ResumeSessionMonitoringResponseHandler* handler);
    public:
        void removeResumeSessionMonitoringResponseHandler(ResumeSessionMonitoringResponseHandler* handler);
    public:
        void addPublishFriendThirdPartyMessageResponseHandler(PublishFriendThirdPartyMessageResponseHandler* handler);
    public:
        void removePublishFriendThirdPartyMessageResponseHandler(PublishFriendThirdPartyMessageResponseHandler* handler);
    public:
        void addInvitePlayerResponseHandler(InvitePlayerResponseHandler* handler);
    public:
        void removeInvitePlayerResponseHandler(InvitePlayerResponseHandler* handler);
    public:
        void addGetInvitationsResponseHandler(GetInvitationsResponseHandler* handler);
    public:
        void removeGetInvitationsResponseHandler(GetInvitationsResponseHandler* handler);
    public:
        void addAcceptInvitationResponseHandler(AcceptInvitationResponseHandler* handler);
    public:
        void removeAcceptInvitationResponseHandler(AcceptInvitationResponseHandler* handler);
    public:
        void addRefuseInvitationResponseHandler(RefuseInvitationResponseHandler* handler);
    public:
        void removeRefuseInvitationResponseHandler(RefuseInvitationResponseHandler* handler);
    public:
        void clear();
    public:
        NuggetaDispatcher();
    public:
        virtual ~NuggetaDispatcher();
};
#endif // _NUGGETADISPATCHER