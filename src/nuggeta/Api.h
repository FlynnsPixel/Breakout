#ifndef _API
#define _API
#include <cstring>
#include "AskForFriendResponseHandler.h"
#include "AskForFriendResponse.h"
#include <functional>
#include "SignUpResponseHandler.h"
#include "SignUpResponse.h"
#include "LoginResponseHandler.h"
#include "LoginResponse.h"
#include "NPlayerProfile.h"
#include "SavePlayerProfileResponseHandler.h"
#include "SavePlayerProfileResponse.h"
#include "GetPlayerProfileResponseHandler.h"
#include "GetPlayerProfileResponse.h"
#include "LogoutResponseHandler.h"
#include "LogoutResponse.h"
#include "GetFriendsResponseHandler.h"
#include "GetFriendsResponse.h"
#include "ThirdPartySource.h"
#include "GetThirdPartyFriendsResponseHandler.h"
#include "GetThirdPartyFriendsResponse.h"
#include "GetFriendDemandsResponseHandler.h"
#include "GetFriendDemandsResponse.h"
#include "AcceptFriendDemandResponseHandler.h"
#include "AcceptFriendDemandResponse.h"
#include "RefuseFriendDemandResponseHandler.h"
#include "RefuseFriendDemandResponse.h"
#include "NScore.h"
#include "SubmitScoreResponseHandler.h"
#include "SubmitScoreResponse.h"
#include "LeaderboardPeriod.h"
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
#include "NuggetaQuery.h"
#include "NMatchMakingConditions.h"
#include "JoinGameResponseHandler.h"
#include "JoinGameResponse.h"
#include "UnjoinGameResponseHandler.h"
#include "UnjoinGameResponse.h"
#include "StartGameResponseHandler.h"
#include "StartGameResponse.h"
#include "StopGameResponseHandler.h"
#include "StopGameResponse.h"
#include "NGame.h"
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
#include "Storable.h"
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
#include "Message.h"
#include "InvitePlayerResponseHandler.h"
#include "InvitePlayerResponse.h"
#include "GetInvitationsResponseHandler.h"
#include "GetInvitationsResponse.h"
#include "AcceptInvitationResponseHandler.h"
#include "AcceptInvitationResponse.h"
#include "RefuseInvitationResponseHandler.h"
#include "RefuseInvitationResponse.h"
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

class Api {
    public:
        virtual const char* askForFriendById(const char* id)=0;
    public:
        virtual const char* askForFriendByIdRequest(const char* id, AskForFriendResponseHandler* askForFriendResponseHandler)=0;
    public:
        virtual const char* askForFriendByLogin(const char* login)=0;
    public:
        virtual const char* askForFriendByLoginRequest(const char* login, AskForFriendResponseHandler* askForFriendResponseHandler)=0;
    public:
        virtual const char* signUp()=0;
    public:
        virtual const char* signUpRequest(SignUpResponseHandler* signUpResponseHandler)=0;
    public:
        virtual const char* login()=0;
    public:
        virtual const char* loginRequest(LoginResponseHandler* loginResponseHandler)=0;
    public:
        virtual const char* savePlayerProfile(NPlayerProfile* profile)=0;
    public:
        virtual const char* savePlayerProfileRequest(NPlayerProfile* profile, SavePlayerProfileResponseHandler* savePlayerProfileResponseHandler)=0;
    public:
        virtual const char* getPlayerProfile()=0;
    public:
        virtual const char* getPlayerProfileRequest(GetPlayerProfileResponseHandler* getPlayerProfileResponseHandler)=0;
    public:
        virtual const char* getPlayerProfileByPlayerId(const char* playerId)=0;
    public:
        virtual const char* getPlayerProfileByPlayerIdRequest(const char* playerId, GetPlayerProfileResponseHandler* getPlayerProfileResponseHandler)=0;
    public:
        virtual const char* logout()=0;
    public:
        virtual const char* logoutRequest(LogoutResponseHandler* logoutResponseHandler)=0;
    public:
        virtual const char* getFriends()=0;
    public:
        virtual const char* getFriendsRequest(GetFriendsResponseHandler* getFriendsResponseHandler)=0;
    public:
        virtual const char* getFriendsByPlayerId(const char* playerId)=0;
    public:
        virtual const char* getFriendsByPlayerIdRequest(const char* playerId, GetFriendsResponseHandler* getFriendsResponseHandler)=0;
    public:
        virtual const char* getThirdPartyFriends(ThirdPartySource* thirdPartySource)=0;
    public:
        virtual const char* getThirdPartyFriendsRequest(ThirdPartySource* thirdPartySource, GetThirdPartyFriendsResponseHandler* getThirdPartyFriendsResponseHandler)=0;
    public:
        virtual const char* getFriendDemands()=0;
    public:
        virtual const char* getFriendDemandsRequest(GetFriendDemandsResponseHandler* getFriendDemandsResponseHandler)=0;
    public:
        virtual const char* acceptFriendDemand(const char* friendDemandId)=0;
    public:
        virtual const char* acceptFriendDemandRequest(const char* friendDemandId, AcceptFriendDemandResponseHandler* acceptFriendDemandResponseHandler)=0;
    public:
        virtual const char* refuseFriendDemand(const char* friendDemandId)=0;
    public:
        virtual const char* refuseFriendDemandRequest(const char* friendDemandId, RefuseFriendDemandResponseHandler* refuseFriendDemandResponseHandler)=0;
    public:
        virtual const char* submitScore(NScore* score, const char* leaderboardId)=0;
    public:
        virtual const char* submitScoreRequest(NScore* score, const char* leaderboardId, SubmitScoreResponseHandler* submitScoreResponseHandler)=0;
    public:
        virtual const char* submitScoreWithPlayerName(const char* name, NScore* score, const char* leaderboardId)=0;
    public:
        virtual const char* submitScoreWithPlayerNameRequest(const char* name, NScore* score, const char* leaderboardId, SubmitScoreResponseHandler* submitScoreResponseHandler)=0;
    public:
        virtual const char* getLeaderboard(const char* leaderboardId, LeaderboardPeriod* period, int start, int limit)=0;
    public:
        virtual const char* getLeaderboardRequest(const char* leaderboardId, LeaderboardPeriod* period, int start, int limit, GetLeaderboardResponseHandler* getLeaderboardResponseHandler)=0;
    public:
        virtual const char* buyItem(const char* itemId, int quantity)=0;
    public:
        virtual const char* buyItemRequest(const char* itemId, int quantity, BuyItemResponseHandler* buyItemResponseHandler)=0;
    public:
        virtual const char* getStore()=0;
    public:
        virtual const char* getStoreRequest(GetStoreResponseHandler* getStoreResponseHandler)=0;
    public:
        virtual const char* consumeItem(const char* itemId, int quantity)=0;
    public:
        virtual const char* consumeItemRequest(const char* itemId, int quantity, ConsumeItemResponseHandler* consumeItemResponseHandler)=0;
    public:
        virtual const char* increasePlayerWallet(int value)=0;
    public:
        virtual const char* increasePlayerWalletRequest(int value, IncreasePlayerWalletResponseHandler* increasePlayerWalletResponseHandler)=0;
    public:
        virtual const char* getPlayerWallet()=0;
    public:
        virtual const char* getPlayerWalletRequest(GetPlayerWalletResponseHandler* getPlayerWalletResponseHandler)=0;
    public:
        virtual const char* getAchievementBoard()=0;
    public:
        virtual const char* getAchievementBoardRequest(GetAchievementBoardResponseHandler* getAchievementBoardResponseHandler)=0;
    public:
        virtual const char* achieve(const char* achivementId)=0;
    public:
        virtual const char* achieveRequest(const char* achivementId, AchieveResponseHandler* achieveResponseHandler)=0;
    public:
        virtual const char* achieveWithProgress(const char* achivementId, int value)=0;
    public:
        virtual const char* achieveWithProgressRequest(const char* achivementId, int value, AchieveResponseHandler* achieveResponseHandler)=0;
    public:
        virtual const char* searchImmediateGame()=0;
    public:
        virtual const char* searchImmediateGameRequest(SearchImmediateGameResponseHandler* searchImmediateGameResponseHandler)=0;
    public:
        virtual const char* searchImmediateGameByConditions(NuggetaQuery* query, NMatchMakingConditions* matchMakingConditions)=0;
    public:
        virtual const char* searchImmediateGameByConditionsRequest(NuggetaQuery* query, NMatchMakingConditions* matchMakingConditions, SearchImmediateGameResponseHandler* searchImmediateGameResponseHandler)=0;
    public:
        virtual const char* joinGame(const char* gameId)=0;
    public:
        virtual const char* joinGameRequest(const char* gameId, JoinGameResponseHandler* joinGameResponseHandler)=0;
    public:
        virtual const char* unjoinGame(const char* gameId)=0;
    public:
        virtual const char* unjoinGameRequest(const char* gameId, UnjoinGameResponseHandler* unjoinGameResponseHandler)=0;
    public:
        virtual const char* startGame(const char* gameId)=0;
    public:
        virtual const char* startGameRequest(const char* gameId, StartGameResponseHandler* startGameResponseHandler)=0;
    public:
        virtual const char* stopGame(const char* gameId)=0;
    public:
        virtual const char* stopGameRequest(const char* gameId, StopGameResponseHandler* stopGameResponseHandler)=0;
    public:
        virtual const char* createGame(NGame* game)=0;
    public:
        virtual const char* createGameRequest(NGame* game, CreateGameResponseHandler* createGameResponseHandler)=0;
    public:
        virtual const char* getGames(NuggetaQuery* dbQuery)=0;
    public:
        virtual const char* getGamesRequest(NuggetaQuery* dbQuery, GetGamesResponseHandler* getGamesResponseHandler)=0;
    public:
        virtual const char* saveAsGhost(NGame* game)=0;
    public:
        virtual const char* saveAsGhostRequest(NGame* game, SaveAsGhostResponseHandler* saveAsGhostResponseHandler)=0;
    public:
        virtual const char* getGhosts(NuggetaQuery* dbQuery)=0;
    public:
        virtual const char* getGhostsRequest(NuggetaQuery* dbQuery, GetGhostsResponseHandler* getGhostsResponseHandler)=0;
    public:
        virtual const char* loadGhost(const char* gameId)=0;
    public:
        virtual const char* loadGhostRequest(const char* gameId, LoadGhostResponseHandler* loadGhostResponseHandler)=0;
    public:
        virtual const char* sendGameChat(const char* gameId, const char* message)=0;
    public:
        virtual const char* sendGameChatRequest(const char* gameId, const char* message, SendGameChatResponseHandler* sendGameChatResponseHandler)=0;
    public:
        virtual const char* sendGameChatToPlayer(const char* gameId, const char* playerId, const char* message)=0;
    public:
        virtual const char* sendGameChatToPlayerRequest(const char* gameId, const char* playerId, const char* message, SendGameChatResponseHandler* sendGameChatResponseHandler)=0;
    public:
        virtual const char* sendGameChatToPlayerList(const char* gameId, const char* message)=0;
    public:
        virtual const char* sendGameChatToPlayerListRequest(const char* gameId, const char* message, SendGameChatResponseHandler* sendGameChatResponseHandler)=0;
    public:
        virtual const char* getStorables(NuggetaQuery* dbQuery)=0;
    public:
        virtual const char* getStorablesRequest(NuggetaQuery* dbQuery, GetStorablesResponseHandler* getStorablesResponseHandler)=0;
    public:
        virtual const char* saveStorable(Storable* storable)=0;
    public:
        virtual const char* saveStorableRequest(Storable* storable, SaveStorableResponseHandler* saveStorableResponseHandler)=0;
    public:
        virtual const char* nextPlayerTurn(const char* gameId)=0;
    public:
        virtual const char* nextPlayerTurnRequest(const char* gameId, NextPlayerTurnResponseHandler* nextPlayerTurnResponseHandler)=0;
    public:
        virtual const char* setPlayerName(const char* name)=0;
    public:
        virtual const char* setPlayerNameRequest(const char* name, SetPlayerNameResponseHandler* setPlayerNameResponseHandler)=0;
    public:
        virtual const char* updateStorable(Storable* storable)=0;
    public:
        virtual const char* updateStorableRequest(Storable* storable, UpdateStorableResponseHandler* updateStorableResponseHandler)=0;
    public:
        virtual const char* removeStorable(Storable* storable)=0;
    public:
        virtual const char* removeStorableRequest(Storable* storable, RemoveStorableResponseHandler* removeStorableResponseHandler)=0;
    public:
        virtual const char* inviteThirdPartyFriend(const char* thirdPartyId, const char* title, const char* inviteMessage, const char* pictureUrl, const char* link, ThirdPartySource* thirdPartySource)=0;
    public:
        virtual const char* inviteThirdPartyFriendRequest(const char* thirdPartyId, const char* title, const char* inviteMessage, const char* pictureUrl, const char* link, ThirdPartySource* thirdPartySource, InviteThirdPartyFriendResponseHandler* inviteThirdPartyFriendResponseHandler)=0;
    public:
        virtual const char* publishThirdPartyMessage(const char* title, const char* message, const char* pictureUrl, const char* link, ThirdPartySource* thirdPartySource)=0;
    public:
        virtual const char* publishThirdPartyMessageRequest(const char* title, const char* message, const char* pictureUrl, const char* link, ThirdPartySource* thirdPartySource, PublishThirdPartyMessageResponseHandler* publishThirdPartyMessageResponseHandler)=0;
    public:
        virtual const char* thirdPartyLogin(ThirdPartySource* thirdPartySource)=0;
    public:
        virtual const char* thirdPartyLoginRequest(ThirdPartySource* thirdPartySource, ThirdPartyLoginResponseHandler* thirdPartyLoginResponseHandler)=0;
    public:
        virtual const char* thirdPartyLoginWithToken(ThirdPartySource* thirdPartySource, const char* accessToken)=0;
    public:
        virtual const char* thirdPartyLoginWithTokenRequest(ThirdPartySource* thirdPartySource, const char* accessToken, ThirdPartyLoginResponseHandler* thirdPartyLoginResponseHandler)=0;
    public:
        virtual const char* saveGame(NGame* game)=0;
    public:
        virtual const char* saveGameRequest(NGame* game, SaveGameResponseHandler* saveGameResponseHandler)=0;
    public:
        virtual const char* loadGame(const char* gameId)=0;
    public:
        virtual const char* loadGameRequest(const char* gameId, LoadGameResponseHandler* loadGameResponseHandler)=0;
    public:
        virtual const char* savePlayerStorable(Storable* storable)=0;
    public:
        virtual const char* savePlayerStorableRequest(Storable* storable, SavePlayerStorableResponseHandler* savePlayerStorableResponseHandler)=0;
    public:
        virtual const char* updatePlayerStorable(Storable* storable)=0;
    public:
        virtual const char* updatePlayerStorableRequest(Storable* storable, UpdatePlayerStorableResponseHandler* updatePlayerStorableResponseHandler)=0;
    public:
        virtual const char* removePlayerStorable(Storable* storable)=0;
    public:
        virtual const char* removePlayerStorableRequest(Storable* storable, RemovePlayerStorableResponseHandler* removePlayerStorableResponseHandler)=0;
    public:
        virtual const char* getPlayerStorables(NuggetaQuery* dbQuery)=0;
    public:
        virtual const char* getPlayerStorablesRequest(NuggetaQuery* dbQuery, GetPlayerStorablesResponseHandler* getPlayerStorablesResponseHandler)=0;
    public:
        virtual const char* pauseSessionMonitoring()=0;
    public:
        virtual const char* pauseSessionMonitoringRequest(PauseSessionMonitoringResponseHandler* pauseSessionMonitoringResponseHandler)=0;
    public:
        virtual const char* resumeSessionMonitoring()=0;
    public:
        virtual const char* resumeSessionMonitoringRequest(ResumeSessionMonitoringResponseHandler* resumeSessionMonitoringResponseHandler)=0;
    public:
        virtual const char* publishFriendThirdPartyMessage(const char* title, const char* message, const char* pictureUrl, const char* link, const char* thirdPartyId, ThirdPartySource* thirdPartySource)=0;
    public:
        virtual const char* publishFriendThirdPartyMessageRequest(const char* title, const char* message, const char* pictureUrl, const char* link, const char* thirdPartyId, ThirdPartySource* thirdPartySource, PublishFriendThirdPartyMessageResponseHandler* publishFriendThirdPartyMessageResponseHandler)=0;
    public:
        virtual const char* invitePlayer(const char* playerId, Message* invitationContent)=0;
    public:
        virtual const char* invitePlayerRequest(const char* playerId, Message* invitationContent, InvitePlayerResponseHandler* invitePlayerResponseHandler)=0;
    public:
        virtual const char* getInvitations(NuggetaQuery* nuggetaQuery)=0;
    public:
        virtual const char* getInvitationsRequest(NuggetaQuery* nuggetaQuery, GetInvitationsResponseHandler* getInvitationsResponseHandler)=0;
    public:
        virtual const char* acceptInvitation(const char* invitationId)=0;
    public:
        virtual const char* acceptInvitationRequest(const char* invitationId, AcceptInvitationResponseHandler* acceptInvitationResponseHandler)=0;
    public:
        virtual const char* refuseInvitation(const char* invitationId)=0;
    public:
        virtual const char* refuseInvitationRequest(const char* invitationId, RefuseInvitationResponseHandler* refuseInvitationResponseHandler)=0;
    public:
        virtual const char* _sendMessage0(Message* message)=0;
    public:
        virtual const char* _request0(Message* message, void* handler)=0;
    public:
        virtual void addGameStateChangeHandler(GameStateChangeHandler* handler)=0;
    public:
        virtual void removeGameStateChangeHandler(GameStateChangeHandler* handler)=0;
    public:
        virtual void addPlayerEnterGameHandler(PlayerEnterGameHandler* handler)=0;
    public:
        virtual void removePlayerEnterGameHandler(PlayerEnterGameHandler* handler)=0;
    public:
        virtual void addFriendshipNotificationHandler(FriendshipNotificationHandler* handler)=0;
    public:
        virtual void removeFriendshipNotificationHandler(FriendshipNotificationHandler* handler)=0;
    public:
        virtual void addPlayerUnjoinGameHandler(PlayerUnjoinGameHandler* handler)=0;
    public:
        virtual void removePlayerUnjoinGameHandler(PlayerUnjoinGameHandler* handler)=0;
    public:
        virtual void addConnectionLostHandler(ConnectionLostHandler* handler)=0;
    public:
        virtual void removeConnectionLostHandler(ConnectionLostHandler* handler)=0;
    public:
        virtual void addConnectionInterruptedHandler(ConnectionInterruptedHandler* handler)=0;
    public:
        virtual void removeConnectionInterruptedHandler(ConnectionInterruptedHandler* handler)=0;
    public:
        virtual void addConnectionResumedHandler(ConnectionResumedHandler* handler)=0;
    public:
        virtual void removeConnectionResumedHandler(ConnectionResumedHandler* handler)=0;
    public:
        virtual void addConnectionStopHandler(ConnectionStopHandler* handler)=0;
    public:
        virtual void removeConnectionStopHandler(ConnectionStopHandler* handler)=0;
    public:
        virtual void addFriendConnectedNotificationHandler(FriendConnectedNotificationHandler* handler)=0;
    public:
        virtual void removeFriendConnectedNotificationHandler(FriendConnectedNotificationHandler* handler)=0;
    public:
        virtual void addFriendDisconnectedNotificationHandler(FriendDisconnectedNotificationHandler* handler)=0;
    public:
        virtual void removeFriendDisconnectedNotificationHandler(FriendDisconnectedNotificationHandler* handler)=0;
    public:
        virtual void addNuggetaExceptionHandler(NuggetaExceptionHandler* handler)=0;
    public:
        virtual void removeNuggetaExceptionHandler(NuggetaExceptionHandler* handler)=0;
    public:
        virtual void addRawMessageHandler(RawMessageHandler* handler)=0;
    public:
        virtual void removeRawMessageHandler(RawMessageHandler* handler)=0;
    public:
        virtual void addSessionExpiredHandler(SessionExpiredHandler* handler)=0;
    public:
        virtual void removeSessionExpiredHandler(SessionExpiredHandler* handler)=0;
    public:
        virtual void addGameMessageErrorHandler(GameMessageErrorHandler* handler)=0;
    public:
        virtual void removeGameMessageErrorHandler(GameMessageErrorHandler* handler)=0;
    public:
        virtual void addFriendDemandNotificationHandler(FriendDemandNotificationHandler* handler)=0;
    public:
        virtual void removeFriendDemandNotificationHandler(FriendDemandNotificationHandler* handler)=0;
    public:
        virtual void addMyTurnNotificationHandler(MyTurnNotificationHandler* handler)=0;
    public:
        virtual void removeMyTurnNotificationHandler(MyTurnNotificationHandler* handler)=0;
    public:
        virtual void addPlayerTurnNotificationHandler(PlayerTurnNotificationHandler* handler)=0;
    public:
        virtual void removePlayerTurnNotificationHandler(PlayerTurnNotificationHandler* handler)=0;
    public:
        virtual void addStartResponseHandler(StartResponseHandler* handler)=0;
    public:
        virtual void removeStartResponseHandler(StartResponseHandler* handler)=0;
    public:
        virtual void addAskForFriendResponseHandler(AskForFriendResponseHandler* handler)=0;
    public:
        virtual void removeAskForFriendResponseHandler(AskForFriendResponseHandler* handler)=0;
    public:
        virtual void addSignUpResponseHandler(SignUpResponseHandler* handler)=0;
    public:
        virtual void removeSignUpResponseHandler(SignUpResponseHandler* handler)=0;
    public:
        virtual void addLoginResponseHandler(LoginResponseHandler* handler)=0;
    public:
        virtual void removeLoginResponseHandler(LoginResponseHandler* handler)=0;
    public:
        virtual void addSavePlayerProfileResponseHandler(SavePlayerProfileResponseHandler* handler)=0;
    public:
        virtual void removeSavePlayerProfileResponseHandler(SavePlayerProfileResponseHandler* handler)=0;
    public:
        virtual void addGetPlayerProfileResponseHandler(GetPlayerProfileResponseHandler* handler)=0;
    public:
        virtual void removeGetPlayerProfileResponseHandler(GetPlayerProfileResponseHandler* handler)=0;
    public:
        virtual void addLogoutResponseHandler(LogoutResponseHandler* handler)=0;
    public:
        virtual void removeLogoutResponseHandler(LogoutResponseHandler* handler)=0;
    public:
        virtual void addGetFriendsResponseHandler(GetFriendsResponseHandler* handler)=0;
    public:
        virtual void removeGetFriendsResponseHandler(GetFriendsResponseHandler* handler)=0;
    public:
        virtual void addGetThirdPartyFriendsResponseHandler(GetThirdPartyFriendsResponseHandler* handler)=0;
    public:
        virtual void removeGetThirdPartyFriendsResponseHandler(GetThirdPartyFriendsResponseHandler* handler)=0;
    public:
        virtual void addGetFriendDemandsResponseHandler(GetFriendDemandsResponseHandler* handler)=0;
    public:
        virtual void removeGetFriendDemandsResponseHandler(GetFriendDemandsResponseHandler* handler)=0;
    public:
        virtual void addAcceptFriendDemandResponseHandler(AcceptFriendDemandResponseHandler* handler)=0;
    public:
        virtual void removeAcceptFriendDemandResponseHandler(AcceptFriendDemandResponseHandler* handler)=0;
    public:
        virtual void addRefuseFriendDemandResponseHandler(RefuseFriendDemandResponseHandler* handler)=0;
    public:
        virtual void removeRefuseFriendDemandResponseHandler(RefuseFriendDemandResponseHandler* handler)=0;
    public:
        virtual void addSubmitScoreResponseHandler(SubmitScoreResponseHandler* handler)=0;
    public:
        virtual void removeSubmitScoreResponseHandler(SubmitScoreResponseHandler* handler)=0;
    public:
        virtual void addGetLeaderboardResponseHandler(GetLeaderboardResponseHandler* handler)=0;
    public:
        virtual void removeGetLeaderboardResponseHandler(GetLeaderboardResponseHandler* handler)=0;
    public:
        virtual void addBuyItemResponseHandler(BuyItemResponseHandler* handler)=0;
    public:
        virtual void removeBuyItemResponseHandler(BuyItemResponseHandler* handler)=0;
    public:
        virtual void addGetStoreResponseHandler(GetStoreResponseHandler* handler)=0;
    public:
        virtual void removeGetStoreResponseHandler(GetStoreResponseHandler* handler)=0;
    public:
        virtual void addConsumeItemResponseHandler(ConsumeItemResponseHandler* handler)=0;
    public:
        virtual void removeConsumeItemResponseHandler(ConsumeItemResponseHandler* handler)=0;
    public:
        virtual void addIncreasePlayerWalletResponseHandler(IncreasePlayerWalletResponseHandler* handler)=0;
    public:
        virtual void removeIncreasePlayerWalletResponseHandler(IncreasePlayerWalletResponseHandler* handler)=0;
    public:
        virtual void addGetPlayerWalletResponseHandler(GetPlayerWalletResponseHandler* handler)=0;
    public:
        virtual void removeGetPlayerWalletResponseHandler(GetPlayerWalletResponseHandler* handler)=0;
    public:
        virtual void addGetAchievementBoardResponseHandler(GetAchievementBoardResponseHandler* handler)=0;
    public:
        virtual void removeGetAchievementBoardResponseHandler(GetAchievementBoardResponseHandler* handler)=0;
    public:
        virtual void addAchieveResponseHandler(AchieveResponseHandler* handler)=0;
    public:
        virtual void removeAchieveResponseHandler(AchieveResponseHandler* handler)=0;
    public:
        virtual void addSearchImmediateGameResponseHandler(SearchImmediateGameResponseHandler* handler)=0;
    public:
        virtual void removeSearchImmediateGameResponseHandler(SearchImmediateGameResponseHandler* handler)=0;
    public:
        virtual void addJoinGameResponseHandler(JoinGameResponseHandler* handler)=0;
    public:
        virtual void removeJoinGameResponseHandler(JoinGameResponseHandler* handler)=0;
    public:
        virtual void addUnjoinGameResponseHandler(UnjoinGameResponseHandler* handler)=0;
    public:
        virtual void removeUnjoinGameResponseHandler(UnjoinGameResponseHandler* handler)=0;
    public:
        virtual void addStartGameResponseHandler(StartGameResponseHandler* handler)=0;
    public:
        virtual void removeStartGameResponseHandler(StartGameResponseHandler* handler)=0;
    public:
        virtual void addStopGameResponseHandler(StopGameResponseHandler* handler)=0;
    public:
        virtual void removeStopGameResponseHandler(StopGameResponseHandler* handler)=0;
    public:
        virtual void addCreateGameResponseHandler(CreateGameResponseHandler* handler)=0;
    public:
        virtual void removeCreateGameResponseHandler(CreateGameResponseHandler* handler)=0;
    public:
        virtual void addGetGamesResponseHandler(GetGamesResponseHandler* handler)=0;
    public:
        virtual void removeGetGamesResponseHandler(GetGamesResponseHandler* handler)=0;
    public:
        virtual void addSaveAsGhostResponseHandler(SaveAsGhostResponseHandler* handler)=0;
    public:
        virtual void removeSaveAsGhostResponseHandler(SaveAsGhostResponseHandler* handler)=0;
    public:
        virtual void addGetGhostsResponseHandler(GetGhostsResponseHandler* handler)=0;
    public:
        virtual void removeGetGhostsResponseHandler(GetGhostsResponseHandler* handler)=0;
    public:
        virtual void addLoadGhostResponseHandler(LoadGhostResponseHandler* handler)=0;
    public:
        virtual void removeLoadGhostResponseHandler(LoadGhostResponseHandler* handler)=0;
    public:
        virtual void addSendGameChatResponseHandler(SendGameChatResponseHandler* handler)=0;
    public:
        virtual void removeSendGameChatResponseHandler(SendGameChatResponseHandler* handler)=0;
    public:
        virtual void addGetStorablesResponseHandler(GetStorablesResponseHandler* handler)=0;
    public:
        virtual void removeGetStorablesResponseHandler(GetStorablesResponseHandler* handler)=0;
    public:
        virtual void addSaveStorableResponseHandler(SaveStorableResponseHandler* handler)=0;
    public:
        virtual void removeSaveStorableResponseHandler(SaveStorableResponseHandler* handler)=0;
    public:
        virtual void addNextPlayerTurnResponseHandler(NextPlayerTurnResponseHandler* handler)=0;
    public:
        virtual void removeNextPlayerTurnResponseHandler(NextPlayerTurnResponseHandler* handler)=0;
    public:
        virtual void addSetPlayerNameResponseHandler(SetPlayerNameResponseHandler* handler)=0;
    public:
        virtual void removeSetPlayerNameResponseHandler(SetPlayerNameResponseHandler* handler)=0;
    public:
        virtual void addUpdateStorableResponseHandler(UpdateStorableResponseHandler* handler)=0;
    public:
        virtual void removeUpdateStorableResponseHandler(UpdateStorableResponseHandler* handler)=0;
    public:
        virtual void addRemoveStorableResponseHandler(RemoveStorableResponseHandler* handler)=0;
    public:
        virtual void removeRemoveStorableResponseHandler(RemoveStorableResponseHandler* handler)=0;
    public:
        virtual void addInviteThirdPartyFriendResponseHandler(InviteThirdPartyFriendResponseHandler* handler)=0;
    public:
        virtual void removeInviteThirdPartyFriendResponseHandler(InviteThirdPartyFriendResponseHandler* handler)=0;
    public:
        virtual void addPublishThirdPartyMessageResponseHandler(PublishThirdPartyMessageResponseHandler* handler)=0;
    public:
        virtual void removePublishThirdPartyMessageResponseHandler(PublishThirdPartyMessageResponseHandler* handler)=0;
    public:
        virtual void addThirdPartyLoginResponseHandler(ThirdPartyLoginResponseHandler* handler)=0;
    public:
        virtual void removeThirdPartyLoginResponseHandler(ThirdPartyLoginResponseHandler* handler)=0;
    public:
        virtual void addSaveGameResponseHandler(SaveGameResponseHandler* handler)=0;
    public:
        virtual void removeSaveGameResponseHandler(SaveGameResponseHandler* handler)=0;
    public:
        virtual void addLoadGameResponseHandler(LoadGameResponseHandler* handler)=0;
    public:
        virtual void removeLoadGameResponseHandler(LoadGameResponseHandler* handler)=0;
    public:
        virtual void addSavePlayerStorableResponseHandler(SavePlayerStorableResponseHandler* handler)=0;
    public:
        virtual void removeSavePlayerStorableResponseHandler(SavePlayerStorableResponseHandler* handler)=0;
    public:
        virtual void addUpdatePlayerStorableResponseHandler(UpdatePlayerStorableResponseHandler* handler)=0;
    public:
        virtual void removeUpdatePlayerStorableResponseHandler(UpdatePlayerStorableResponseHandler* handler)=0;
    public:
        virtual void addRemovePlayerStorableResponseHandler(RemovePlayerStorableResponseHandler* handler)=0;
    public:
        virtual void removeRemovePlayerStorableResponseHandler(RemovePlayerStorableResponseHandler* handler)=0;
    public:
        virtual void addGetPlayerStorablesResponseHandler(GetPlayerStorablesResponseHandler* handler)=0;
    public:
        virtual void removeGetPlayerStorablesResponseHandler(GetPlayerStorablesResponseHandler* handler)=0;
    public:
        virtual void addPauseSessionMonitoringResponseHandler(PauseSessionMonitoringResponseHandler* handler)=0;
    public:
        virtual void removePauseSessionMonitoringResponseHandler(PauseSessionMonitoringResponseHandler* handler)=0;
    public:
        virtual void addResumeSessionMonitoringResponseHandler(ResumeSessionMonitoringResponseHandler* handler)=0;
    public:
        virtual void removeResumeSessionMonitoringResponseHandler(ResumeSessionMonitoringResponseHandler* handler)=0;
    public:
        virtual void addPublishFriendThirdPartyMessageResponseHandler(PublishFriendThirdPartyMessageResponseHandler* handler)=0;
    public:
        virtual void removePublishFriendThirdPartyMessageResponseHandler(PublishFriendThirdPartyMessageResponseHandler* handler)=0;
    public:
        virtual void addInvitePlayerResponseHandler(InvitePlayerResponseHandler* handler)=0;
    public:
        virtual void removeInvitePlayerResponseHandler(InvitePlayerResponseHandler* handler)=0;
    public:
        virtual void addGetInvitationsResponseHandler(GetInvitationsResponseHandler* handler)=0;
    public:
        virtual void removeGetInvitationsResponseHandler(GetInvitationsResponseHandler* handler)=0;
    public:
        virtual void addAcceptInvitationResponseHandler(AcceptInvitationResponseHandler* handler)=0;
    public:
        virtual void removeAcceptInvitationResponseHandler(AcceptInvitationResponseHandler* handler)=0;
    public:
        virtual void addRefuseInvitationResponseHandler(RefuseInvitationResponseHandler* handler)=0;
    public:
        virtual void removeRefuseInvitationResponseHandler(RefuseInvitationResponseHandler* handler)=0;
    public:
        virtual ~Api(){};
};
#endif // _API