#ifndef _T807
#define _T807
#include "Api.h"
#include "NuggetaDispatcher.h"
#include <cstring>
#include "Message.h"
#include "Serializable.h"
#include "AskForFriendByIdRequest.h"
#include "AskForFriendResponseHandler.h"
#include "AskForFriendResponse.h"
#include <functional>
#include "AskForFriendByLoginRequest.h"
#include "SignUpRequest.h"
#include "SignUpResponseHandler.h"
#include "SignUpResponse.h"
#include "LoginRequest.h"
#include "LoginResponseHandler.h"
#include "LoginResponse.h"
#include "NPlayerProfile.h"
#include "SavePlayerProfileRequest.h"
#include "SavePlayerProfileResponseHandler.h"
#include "SavePlayerProfileResponse.h"
#include "GetPlayerProfileRequest.h"
#include "GetPlayerProfileResponseHandler.h"
#include "GetPlayerProfileResponse.h"
#include "GetPlayerProfileByPlayerIdRequest.h"
#include "LogoutRequest.h"
#include "LogoutResponseHandler.h"
#include "LogoutResponse.h"
#include "GetFriendsRequest.h"
#include "GetFriendsResponseHandler.h"
#include "GetFriendsResponse.h"
#include "GetFriendsByPlayerIdRequest.h"
#include "ThirdPartySource.h"
#include "GetThirdPartyFriendsRequest.h"
#include "GetThirdPartyFriendsResponseHandler.h"
#include "GetThirdPartyFriendsResponse.h"
#include "GetFriendDemandsRequest.h"
#include "GetFriendDemandsResponseHandler.h"
#include "GetFriendDemandsResponse.h"
#include "AcceptFriendDemandRequest.h"
#include "AcceptFriendDemandResponseHandler.h"
#include "AcceptFriendDemandResponse.h"
#include "RefuseFriendDemandRequest.h"
#include "RefuseFriendDemandResponseHandler.h"
#include "RefuseFriendDemandResponse.h"
#include "NScore.h"
#include "SubmitScoreRequest.h"
#include "SubmitScoreResponseHandler.h"
#include "SubmitScoreResponse.h"
#include "SubmitScoreWithPlayerNameRequest.h"
#include "LeaderboardPeriod.h"
#include "GetLeaderboardRequest.h"
#include "GetLeaderboardResponseHandler.h"
#include "GetLeaderboardResponse.h"
#include "BuyItemRequest.h"
#include "BuyItemResponseHandler.h"
#include "BuyItemResponse.h"
#include "GetStoreRequest.h"
#include "GetStoreResponseHandler.h"
#include "GetStoreResponse.h"
#include "ConsumeItemRequest.h"
#include "ConsumeItemResponseHandler.h"
#include "ConsumeItemResponse.h"
#include "IncreasePlayerWalletRequest.h"
#include "IncreasePlayerWalletResponseHandler.h"
#include "IncreasePlayerWalletResponse.h"
#include "GetPlayerWalletRequest.h"
#include "GetPlayerWalletResponseHandler.h"
#include "GetPlayerWalletResponse.h"
#include "GetAchievementBoardRequest.h"
#include "GetAchievementBoardResponseHandler.h"
#include "GetAchievementBoardResponse.h"
#include "AchieveRequest.h"
#include "AchieveResponseHandler.h"
#include "AchieveResponse.h"
#include "AchieveWithProgressRequest.h"
#include "SearchImmediateGameRequest.h"
#include "SearchImmediateGameResponseHandler.h"
#include "SearchImmediateGameResponse.h"
#include "NuggetaQuery.h"
#include "NMatchMakingConditions.h"
#include "SearchImmediateGameByConditionsRequest.h"
#include "JoinGameRequest.h"
#include "JoinGameResponseHandler.h"
#include "JoinGameResponse.h"
#include "UnjoinGameRequest.h"
#include "UnjoinGameResponseHandler.h"
#include "UnjoinGameResponse.h"
#include "StartGameRequest.h"
#include "StartGameResponseHandler.h"
#include "StartGameResponse.h"
#include "StopGameRequest.h"
#include "StopGameResponseHandler.h"
#include "StopGameResponse.h"
#include "NGame.h"
#include "CreateGameRequest.h"
#include "CreateGameResponseHandler.h"
#include "CreateGameResponse.h"
#include "GetGamesRequest.h"
#include "GetGamesResponseHandler.h"
#include "GetGamesResponse.h"
#include "SaveAsGhostRequest.h"
#include "SaveAsGhostResponseHandler.h"
#include "SaveAsGhostResponse.h"
#include "GetGhostsRequest.h"
#include "GetGhostsResponseHandler.h"
#include "GetGhostsResponse.h"
#include "LoadGhostRequest.h"
#include "LoadGhostResponseHandler.h"
#include "LoadGhostResponse.h"
#include "SendGameChatRequest.h"
#include "SendGameChatResponseHandler.h"
#include "SendGameChatResponse.h"
#include "SendGameChatToPlayerRequest.h"
#include "SendGameChatToPlayerListRequest.h"
#include "GetStorablesRequest.h"
#include "GetStorablesResponseHandler.h"
#include "GetStorablesResponse.h"
#include "Storable.h"
#include "SaveStorableRequest.h"
#include "SaveStorableResponseHandler.h"
#include "SaveStorableResponse.h"
#include "NextPlayerTurnRequest.h"
#include "NextPlayerTurnResponseHandler.h"
#include "NextPlayerTurnResponse.h"
#include "SetPlayerNameRequest.h"
#include "SetPlayerNameResponseHandler.h"
#include "SetPlayerNameResponse.h"
#include "UpdateStorableRequest.h"
#include "UpdateStorableResponseHandler.h"
#include "UpdateStorableResponse.h"
#include "RemoveStorableRequest.h"
#include "RemoveStorableResponseHandler.h"
#include "RemoveStorableResponse.h"
#include "InviteThirdPartyFriendRequest.h"
#include "InviteThirdPartyFriendResponseHandler.h"
#include "InviteThirdPartyFriendResponse.h"
#include "PublishThirdPartyMessageRequest.h"
#include "PublishThirdPartyMessageResponseHandler.h"
#include "PublishThirdPartyMessageResponse.h"
#include "ThirdPartyLoginRequest.h"
#include "ThirdPartyLoginResponseHandler.h"
#include "ThirdPartyLoginResponse.h"
#include "ThirdPartyLoginWithTokenRequest.h"
#include "SaveGameRequest.h"
#include "SaveGameResponseHandler.h"
#include "SaveGameResponse.h"
#include "LoadGameRequest.h"
#include "LoadGameResponseHandler.h"
#include "LoadGameResponse.h"
#include "SavePlayerStorableRequest.h"
#include "SavePlayerStorableResponseHandler.h"
#include "SavePlayerStorableResponse.h"
#include "UpdatePlayerStorableRequest.h"
#include "UpdatePlayerStorableResponseHandler.h"
#include "UpdatePlayerStorableResponse.h"
#include "RemovePlayerStorableRequest.h"
#include "RemovePlayerStorableResponseHandler.h"
#include "RemovePlayerStorableResponse.h"
#include "GetPlayerStorablesRequest.h"
#include "GetPlayerStorablesResponseHandler.h"
#include "GetPlayerStorablesResponse.h"
#include "PauseSessionMonitoringRequest.h"
#include "PauseSessionMonitoringResponseHandler.h"
#include "PauseSessionMonitoringResponse.h"
#include "ResumeSessionMonitoringRequest.h"
#include "ResumeSessionMonitoringResponseHandler.h"
#include "ResumeSessionMonitoringResponse.h"
#include "PublishFriendThirdPartyMessageRequest.h"
#include "PublishFriendThirdPartyMessageResponseHandler.h"
#include "PublishFriendThirdPartyMessageResponse.h"
#include "InvitePlayerRequest.h"
#include "InvitePlayerResponseHandler.h"
#include "InvitePlayerResponse.h"
#include "GetInvitationsRequest.h"
#include "GetInvitationsResponseHandler.h"
#include "GetInvitationsResponse.h"
#include "AcceptInvitationRequest.h"
#include "AcceptInvitationResponseHandler.h"
#include "AcceptInvitationResponse.h"
#include "RefuseInvitationRequest.h"
#include "RefuseInvitationResponseHandler.h"
#include "RefuseInvitationResponse.h"
#include "GameStateChange.h"
#include "GameStateChangeHandler.h"
#include "PlayerEnterGame.h"
#include "PlayerEnterGameHandler.h"
#include "FriendshipNotification.h"
#include "FriendshipNotificationHandler.h"
#include "PlayerUnjoinGame.h"
#include "PlayerUnjoinGameHandler.h"
#include "ConnectionLost.h"
#include "ConnectionLostHandler.h"
#include "ConnectionInterrupted.h"
#include "ConnectionInterruptedHandler.h"
#include "ConnectionResumed.h"
#include "ConnectionResumedHandler.h"
#include "ConnectionStop.h"
#include "ConnectionStopHandler.h"
#include "FriendConnectedNotification.h"
#include "FriendConnectedNotificationHandler.h"
#include "FriendDisconnectedNotification.h"
#include "FriendDisconnectedNotificationHandler.h"
#include "NuggetaException.h"
#include "NuggetaExceptionHandler.h"
#include "NRawMessage.h"
#include "RawMessageHandler.h"
#include "SessionExpired.h"
#include "SessionExpiredHandler.h"
#include "GameMessageError.h"
#include "GameMessageErrorHandler.h"
#include "FriendDemandNotification.h"
#include "FriendDemandNotificationHandler.h"
#include "MyTurnNotification.h"
#include "MyTurnNotificationHandler.h"
#include "PlayerTurnNotification.h"
#include "PlayerTurnNotificationHandler.h"
#include "StartResponse.h"
#include "StartResponseHandler.h"

class T807 :public  Api {
    protected:
        NuggetaDispatcher* _f10395;
    public:
        T807();
    public:
        virtual const char* _sendMessage0(Message* message);
    public:
        virtual const char* _request0(Message* message, void* handler);
    public:
        virtual void* _cloneSerializable(Serializable* serializable);
    public:
        //@Override
        const char* askForFriendById(const char* id);
    public:
        //@Override
        const char* askForFriendByIdRequest(const char* id, AskForFriendResponseHandler* askForFriendResponseHandler);
    public:
        //@Override
        const char* askForFriendByLogin(const char* login);
    public:
        //@Override
        const char* askForFriendByLoginRequest(const char* login, AskForFriendResponseHandler* askForFriendResponseHandler);
    public:
        //@Override
        const char* signUp();
    public:
        //@Override
        const char* signUpRequest(SignUpResponseHandler* signUpResponseHandler);
    public:
        //@Override
        const char* login();
    public:
        //@Override
        const char* loginRequest(LoginResponseHandler* loginResponseHandler);
    public:
        //@Override
        const char* savePlayerProfile(NPlayerProfile* profile);
    public:
        //@Override
        const char* savePlayerProfileRequest(NPlayerProfile* profile, SavePlayerProfileResponseHandler* savePlayerProfileResponseHandler);
    public:
        //@Override
        const char* getPlayerProfile();
    public:
        //@Override
        const char* getPlayerProfileRequest(GetPlayerProfileResponseHandler* getPlayerProfileResponseHandler);
    public:
        //@Override
        const char* getPlayerProfileByPlayerId(const char* playerId);
    public:
        //@Override
        const char* getPlayerProfileByPlayerIdRequest(const char* playerId, GetPlayerProfileResponseHandler* getPlayerProfileResponseHandler);
    public:
        //@Override
        const char* logout();
    public:
        //@Override
        const char* logoutRequest(LogoutResponseHandler* logoutResponseHandler);
    public:
        //@Override
        const char* getFriends();
    public:
        //@Override
        const char* getFriendsRequest(GetFriendsResponseHandler* getFriendsResponseHandler);
    public:
        //@Override
        const char* getFriendsByPlayerId(const char* playerId);
    public:
        //@Override
        const char* getFriendsByPlayerIdRequest(const char* playerId, GetFriendsResponseHandler* getFriendsResponseHandler);
    public:
        virtual //@Override
        const char* getThirdPartyFriends(ThirdPartySource* thirdPartySource);
    public:
        virtual //@Override
        const char* getThirdPartyFriendsRequest(ThirdPartySource* thirdPartySource, GetThirdPartyFriendsResponseHandler* getThirdPartyFriendsResponseHandler);
    public:
        //@Override
        const char* getFriendDemands();
    public:
        //@Override
        const char* getFriendDemandsRequest(GetFriendDemandsResponseHandler* getFriendDemandsResponseHandler);
    public:
        //@Override
        const char* acceptFriendDemand(const char* friendDemandId);
    public:
        //@Override
        const char* acceptFriendDemandRequest(const char* friendDemandId, AcceptFriendDemandResponseHandler* acceptFriendDemandResponseHandler);
    public:
        //@Override
        const char* refuseFriendDemand(const char* friendDemandId);
    public:
        //@Override
        const char* refuseFriendDemandRequest(const char* friendDemandId, RefuseFriendDemandResponseHandler* refuseFriendDemandResponseHandler);
    public:
        //@Override
        const char* submitScore(NScore* score, const char* leaderboardId);
    public:
        //@Override
        const char* submitScoreRequest(NScore* score, const char* leaderboardId, SubmitScoreResponseHandler* submitScoreResponseHandler);
    public:
        //@Override
        const char* submitScoreWithPlayerName(const char* name, NScore* score, const char* leaderboardId);
    public:
        //@Override
        const char* submitScoreWithPlayerNameRequest(const char* name, NScore* score, const char* leaderboardId, SubmitScoreResponseHandler* submitScoreResponseHandler);
    public:
        //@Override
        const char* getLeaderboard(const char* leaderboardId, LeaderboardPeriod* period, int start, int limit);
    public:
        //@Override
        const char* getLeaderboardRequest(const char* leaderboardId, LeaderboardPeriod* period, int start, int limit, GetLeaderboardResponseHandler* getLeaderboardResponseHandler);
    public:
        //@Override
        const char* buyItem(const char* itemId, int quantity);
    public:
        //@Override
        const char* buyItemRequest(const char* itemId, int quantity, BuyItemResponseHandler* buyItemResponseHandler);
    public:
        //@Override
        const char* getStore();
    public:
        //@Override
        const char* getStoreRequest(GetStoreResponseHandler* getStoreResponseHandler);
    public:
        //@Override
        const char* consumeItem(const char* itemId, int quantity);
    public:
        //@Override
        const char* consumeItemRequest(const char* itemId, int quantity, ConsumeItemResponseHandler* consumeItemResponseHandler);
    public:
        //@Override
        const char* increasePlayerWallet(int value);
    public:
        //@Override
        const char* increasePlayerWalletRequest(int value, IncreasePlayerWalletResponseHandler* increasePlayerWalletResponseHandler);
    public:
        //@Override
        const char* getPlayerWallet();
    public:
        //@Override
        const char* getPlayerWalletRequest(GetPlayerWalletResponseHandler* getPlayerWalletResponseHandler);
    public:
        //@Override
        const char* getAchievementBoard();
    public:
        //@Override
        const char* getAchievementBoardRequest(GetAchievementBoardResponseHandler* getAchievementBoardResponseHandler);
    public:
        //@Override
        const char* achieve(const char* achivementId);
    public:
        //@Override
        const char* achieveRequest(const char* achivementId, AchieveResponseHandler* achieveResponseHandler);
    public:
        //@Override
        const char* achieveWithProgress(const char* achivementId, int value);
    public:
        //@Override
        const char* achieveWithProgressRequest(const char* achivementId, int value, AchieveResponseHandler* achieveResponseHandler);
    public:
        //@Override
        const char* searchImmediateGame();
    public:
        //@Override
        const char* searchImmediateGameRequest(SearchImmediateGameResponseHandler* searchImmediateGameResponseHandler);
    public:
        //@Override
        const char* searchImmediateGameByConditions(NuggetaQuery* query, NMatchMakingConditions* matchMakingConditions);
    public:
        //@Override
        const char* searchImmediateGameByConditionsRequest(NuggetaQuery* query, NMatchMakingConditions* matchMakingConditions, SearchImmediateGameResponseHandler* searchImmediateGameResponseHandler);
    public:
        //@Override
        const char* joinGame(const char* gameId);
    public:
        //@Override
        const char* joinGameRequest(const char* gameId, JoinGameResponseHandler* joinGameResponseHandler);
    public:
        //@Override
        const char* unjoinGame(const char* gameId);
    public:
        //@Override
        const char* unjoinGameRequest(const char* gameId, UnjoinGameResponseHandler* unjoinGameResponseHandler);
    public:
        //@Override
        const char* startGame(const char* gameId);
    public:
        //@Override
        const char* startGameRequest(const char* gameId, StartGameResponseHandler* startGameResponseHandler);
    public:
        //@Override
        const char* stopGame(const char* gameId);
    public:
        //@Override
        const char* stopGameRequest(const char* gameId, StopGameResponseHandler* stopGameResponseHandler);
    public:
        //@Override
        const char* createGame(NGame* game);
    public:
        //@Override
        const char* createGameRequest(NGame* game, CreateGameResponseHandler* createGameResponseHandler);
    public:
        //@Override
        const char* getGames(NuggetaQuery* dbQuery);
    public:
        //@Override
        const char* getGamesRequest(NuggetaQuery* dbQuery, GetGamesResponseHandler* getGamesResponseHandler);
    public:
        //@Override
        const char* saveAsGhost(NGame* game);
    public:
        //@Override
        const char* saveAsGhostRequest(NGame* game, SaveAsGhostResponseHandler* saveAsGhostResponseHandler);
    public:
        //@Override
        const char* getGhosts(NuggetaQuery* dbQuery);
    public:
        //@Override
        const char* getGhostsRequest(NuggetaQuery* dbQuery, GetGhostsResponseHandler* getGhostsResponseHandler);
    public:
        //@Override
        const char* loadGhost(const char* gameId);
    public:
        //@Override
        const char* loadGhostRequest(const char* gameId, LoadGhostResponseHandler* loadGhostResponseHandler);
    public:
        //@Override
        const char* sendGameChat(const char* gameId, const char* message);
    public:
        //@Override
        const char* sendGameChatRequest(const char* gameId, const char* message, SendGameChatResponseHandler* sendGameChatResponseHandler);
    public:
        //@Override
        const char* sendGameChatToPlayer(const char* gameId, const char* playerId, const char* message);
    public:
        //@Override
        const char* sendGameChatToPlayerRequest(const char* gameId, const char* playerId, const char* message, SendGameChatResponseHandler* sendGameChatResponseHandler);
    public:
        //@Override
        const char* sendGameChatToPlayerList(const char* gameId, const char* message);
    public:
        //@Override
        const char* sendGameChatToPlayerListRequest(const char* gameId, const char* message, SendGameChatResponseHandler* sendGameChatResponseHandler);
    public:
        //@Override
        const char* getStorables(NuggetaQuery* dbQuery);
    public:
        //@Override
        const char* getStorablesRequest(NuggetaQuery* dbQuery, GetStorablesResponseHandler* getStorablesResponseHandler);
    public:
        //@Override
        const char* saveStorable(Storable* storable);
    public:
        //@Override
        const char* saveStorableRequest(Storable* storable, SaveStorableResponseHandler* saveStorableResponseHandler);
    public:
        //@Override
        const char* nextPlayerTurn(const char* gameId);
    public:
        //@Override
        const char* nextPlayerTurnRequest(const char* gameId, NextPlayerTurnResponseHandler* nextPlayerTurnResponseHandler);
    public:
        //@Override
        const char* setPlayerName(const char* name);
    public:
        //@Override
        const char* setPlayerNameRequest(const char* name, SetPlayerNameResponseHandler* setPlayerNameResponseHandler);
    public:
        //@Override
        const char* updateStorable(Storable* storable);
    public:
        //@Override
        const char* updateStorableRequest(Storable* storable, UpdateStorableResponseHandler* updateStorableResponseHandler);
    public:
        //@Override
        const char* removeStorable(Storable* storable);
    public:
        //@Override
        const char* removeStorableRequest(Storable* storable, RemoveStorableResponseHandler* removeStorableResponseHandler);
    public:
        virtual //@Override
        const char* inviteThirdPartyFriend(const char* thirdPartyId, const char* title, const char* inviteMessage, const char* pictureUrl, const char* link, ThirdPartySource* thirdPartySource);
    public:
        virtual //@Override
        const char* inviteThirdPartyFriendRequest(const char* thirdPartyId, const char* title, const char* inviteMessage, const char* pictureUrl, const char* link, ThirdPartySource* thirdPartySource, InviteThirdPartyFriendResponseHandler* inviteThirdPartyFriendResponseHandler);
    public:
        virtual //@Override
        const char* publishThirdPartyMessage(const char* title, const char* message, const char* pictureUrl, const char* link, ThirdPartySource* thirdPartySource);
    public:
        virtual //@Override
        const char* publishThirdPartyMessageRequest(const char* title, const char* message, const char* pictureUrl, const char* link, ThirdPartySource* thirdPartySource, PublishThirdPartyMessageResponseHandler* publishThirdPartyMessageResponseHandler);
    public:
        virtual //@Override
        const char* thirdPartyLogin(ThirdPartySource* thirdPartySource);
    public:
        virtual //@Override
        const char* thirdPartyLoginRequest(ThirdPartySource* thirdPartySource, ThirdPartyLoginResponseHandler* thirdPartyLoginResponseHandler);
    public:
        //@Override
        const char* thirdPartyLoginWithToken(ThirdPartySource* thirdPartySource, const char* accessToken);
    public:
        //@Override
        const char* thirdPartyLoginWithTokenRequest(ThirdPartySource* thirdPartySource, const char* accessToken, ThirdPartyLoginResponseHandler* thirdPartyLoginResponseHandler);
    public:
        //@Override
        const char* saveGame(NGame* game);
    public:
        //@Override
        const char* saveGameRequest(NGame* game, SaveGameResponseHandler* saveGameResponseHandler);
    public:
        //@Override
        const char* loadGame(const char* gameId);
    public:
        //@Override
        const char* loadGameRequest(const char* gameId, LoadGameResponseHandler* loadGameResponseHandler);
    public:
        //@Override
        const char* savePlayerStorable(Storable* storable);
    public:
        //@Override
        const char* savePlayerStorableRequest(Storable* storable, SavePlayerStorableResponseHandler* savePlayerStorableResponseHandler);
    public:
        //@Override
        const char* updatePlayerStorable(Storable* storable);
    public:
        //@Override
        const char* updatePlayerStorableRequest(Storable* storable, UpdatePlayerStorableResponseHandler* updatePlayerStorableResponseHandler);
    public:
        //@Override
        const char* removePlayerStorable(Storable* storable);
    public:
        //@Override
        const char* removePlayerStorableRequest(Storable* storable, RemovePlayerStorableResponseHandler* removePlayerStorableResponseHandler);
    public:
        //@Override
        const char* getPlayerStorables(NuggetaQuery* dbQuery);
    public:
        //@Override
        const char* getPlayerStorablesRequest(NuggetaQuery* dbQuery, GetPlayerStorablesResponseHandler* getPlayerStorablesResponseHandler);
    public:
        //@Override
        const char* pauseSessionMonitoring();
    public:
        //@Override
        const char* pauseSessionMonitoringRequest(PauseSessionMonitoringResponseHandler* pauseSessionMonitoringResponseHandler);
    public:
        //@Override
        const char* resumeSessionMonitoring();
    public:
        //@Override
        const char* resumeSessionMonitoringRequest(ResumeSessionMonitoringResponseHandler* resumeSessionMonitoringResponseHandler);
    public:
        virtual //@Override
        const char* publishFriendThirdPartyMessage(const char* title, const char* message, const char* pictureUrl, const char* link, const char* thirdPartyId, ThirdPartySource* thirdPartySource);
    public:
        virtual //@Override
        const char* publishFriendThirdPartyMessageRequest(const char* title, const char* message, const char* pictureUrl, const char* link, const char* thirdPartyId, ThirdPartySource* thirdPartySource, PublishFriendThirdPartyMessageResponseHandler* publishFriendThirdPartyMessageResponseHandler);
    public:
        virtual //@Override
        const char* invitePlayer(const char* playerId, Message* invitationContent);
    public:
        virtual //@Override
        const char* invitePlayerRequest(const char* playerId, Message* invitationContent, InvitePlayerResponseHandler* invitePlayerResponseHandler);
    public:
        //@Override
        const char* getInvitations(NuggetaQuery* nuggetaQuery);
    public:
        //@Override
        const char* getInvitationsRequest(NuggetaQuery* nuggetaQuery, GetInvitationsResponseHandler* getInvitationsResponseHandler);
    public:
        //@Override
        const char* acceptInvitation(const char* invitationId);
    public:
        //@Override
        const char* acceptInvitationRequest(const char* invitationId, AcceptInvitationResponseHandler* acceptInvitationResponseHandler);
    public:
        //@Override
        const char* refuseInvitation(const char* invitationId);
    public:
        //@Override
        const char* refuseInvitationRequest(const char* invitationId, RefuseInvitationResponseHandler* refuseInvitationResponseHandler);
    public:
        virtual const char* _m16329(Message* message, void* handler);
    public:
        void _m16330(Message* _i10646, void* handler);
    public:
        //@Override
        void addGameStateChangeHandler(GameStateChangeHandler* handler);
    public:
        //@Override
        void removeGameStateChangeHandler(GameStateChangeHandler* handler);
    public:
        //@Override
        void addPlayerEnterGameHandler(PlayerEnterGameHandler* handler);
    public:
        //@Override
        void removePlayerEnterGameHandler(PlayerEnterGameHandler* handler);
    public:
        //@Override
        void addFriendshipNotificationHandler(FriendshipNotificationHandler* handler);
    public:
        //@Override
        void removeFriendshipNotificationHandler(FriendshipNotificationHandler* handler);
    public:
        //@Override
        void addPlayerUnjoinGameHandler(PlayerUnjoinGameHandler* handler);
    public:
        //@Override
        void removePlayerUnjoinGameHandler(PlayerUnjoinGameHandler* handler);
    public:
        //@Override
        void addConnectionLostHandler(ConnectionLostHandler* handler);
    public:
        //@Override
        void removeConnectionLostHandler(ConnectionLostHandler* handler);
    public:
        //@Override
        void addConnectionInterruptedHandler(ConnectionInterruptedHandler* handler);
    public:
        //@Override
        void removeConnectionInterruptedHandler(ConnectionInterruptedHandler* handler);
    public:
        //@Override
        void addConnectionResumedHandler(ConnectionResumedHandler* handler);
    public:
        //@Override
        void removeConnectionResumedHandler(ConnectionResumedHandler* handler);
    public:
        //@Override
        void addConnectionStopHandler(ConnectionStopHandler* handler);
    public:
        //@Override
        void removeConnectionStopHandler(ConnectionStopHandler* handler);
    public:
        //@Override
        void addFriendConnectedNotificationHandler(FriendConnectedNotificationHandler* handler);
    public:
        //@Override
        void removeFriendConnectedNotificationHandler(FriendConnectedNotificationHandler* handler);
    public:
        //@Override
        void addFriendDisconnectedNotificationHandler(FriendDisconnectedNotificationHandler* handler);
    public:
        //@Override
        void removeFriendDisconnectedNotificationHandler(FriendDisconnectedNotificationHandler* handler);
    public:
        //@Override
        void addNuggetaExceptionHandler(NuggetaExceptionHandler* handler);
    public:
        //@Override
        void removeNuggetaExceptionHandler(NuggetaExceptionHandler* handler);
    public:
        //@Override
        void addRawMessageHandler(RawMessageHandler* handler);
    public:
        //@Override
        void removeRawMessageHandler(RawMessageHandler* handler);
    public:
        //@Override
        void addSessionExpiredHandler(SessionExpiredHandler* handler);
    public:
        //@Override
        void removeSessionExpiredHandler(SessionExpiredHandler* handler);
    public:
        //@Override
        void addGameMessageErrorHandler(GameMessageErrorHandler* handler);
    public:
        //@Override
        void removeGameMessageErrorHandler(GameMessageErrorHandler* handler);
    public:
        //@Override
        void addFriendDemandNotificationHandler(FriendDemandNotificationHandler* handler);
    public:
        //@Override
        void removeFriendDemandNotificationHandler(FriendDemandNotificationHandler* handler);
    public:
        //@Override
        void addMyTurnNotificationHandler(MyTurnNotificationHandler* handler);
    public:
        //@Override
        void removeMyTurnNotificationHandler(MyTurnNotificationHandler* handler);
    public:
        //@Override
        void addPlayerTurnNotificationHandler(PlayerTurnNotificationHandler* handler);
    public:
        //@Override
        void removePlayerTurnNotificationHandler(PlayerTurnNotificationHandler* handler);
    public:
        //@Override
        void addStartResponseHandler(StartResponseHandler* handler);
    public:
        //@Override
        void removeStartResponseHandler(StartResponseHandler* handler);
    public:
        //@Override
        void addAskForFriendResponseHandler(AskForFriendResponseHandler* handler);
    public:
        //@Override
        void removeAskForFriendResponseHandler(AskForFriendResponseHandler* handler);
    public:
        //@Override
        void addSignUpResponseHandler(SignUpResponseHandler* handler);
    public:
        //@Override
        void removeSignUpResponseHandler(SignUpResponseHandler* handler);
    public:
        //@Override
        void addLoginResponseHandler(LoginResponseHandler* handler);
    public:
        //@Override
        void removeLoginResponseHandler(LoginResponseHandler* handler);
    public:
        //@Override
        void addSavePlayerProfileResponseHandler(SavePlayerProfileResponseHandler* handler);
    public:
        //@Override
        void removeSavePlayerProfileResponseHandler(SavePlayerProfileResponseHandler* handler);
    public:
        //@Override
        void addGetPlayerProfileResponseHandler(GetPlayerProfileResponseHandler* handler);
    public:
        //@Override
        void removeGetPlayerProfileResponseHandler(GetPlayerProfileResponseHandler* handler);
    public:
        //@Override
        void addLogoutResponseHandler(LogoutResponseHandler* handler);
    public:
        //@Override
        void removeLogoutResponseHandler(LogoutResponseHandler* handler);
    public:
        //@Override
        void addGetFriendsResponseHandler(GetFriendsResponseHandler* handler);
    public:
        //@Override
        void removeGetFriendsResponseHandler(GetFriendsResponseHandler* handler);
    public:
        //@Override
        void addGetThirdPartyFriendsResponseHandler(GetThirdPartyFriendsResponseHandler* handler);
    public:
        //@Override
        void removeGetThirdPartyFriendsResponseHandler(GetThirdPartyFriendsResponseHandler* handler);
    public:
        //@Override
        void addGetFriendDemandsResponseHandler(GetFriendDemandsResponseHandler* handler);
    public:
        //@Override
        void removeGetFriendDemandsResponseHandler(GetFriendDemandsResponseHandler* handler);
    public:
        //@Override
        void addAcceptFriendDemandResponseHandler(AcceptFriendDemandResponseHandler* handler);
    public:
        //@Override
        void removeAcceptFriendDemandResponseHandler(AcceptFriendDemandResponseHandler* _w10645);
    public:
        //@Override
        void addRefuseFriendDemandResponseHandler(RefuseFriendDemandResponseHandler* handler);
    public:
        //@Override
        void removeRefuseFriendDemandResponseHandler(RefuseFriendDemandResponseHandler* _f10647);
    public:
        //@Override
        void addSubmitScoreResponseHandler(SubmitScoreResponseHandler* handler);
    public:
        //@Override
        void removeSubmitScoreResponseHandler(SubmitScoreResponseHandler* handler);
    public:
        //@Override
        void addGetLeaderboardResponseHandler(GetLeaderboardResponseHandler* handler);
    public:
        //@Override
        void removeGetLeaderboardResponseHandler(GetLeaderboardResponseHandler* handler);
    public:
        //@Override
        void addBuyItemResponseHandler(BuyItemResponseHandler* handler);
    public:
        //@Override
        void removeBuyItemResponseHandler(BuyItemResponseHandler* handler);
    public:
        //@Override
        void addGetStoreResponseHandler(GetStoreResponseHandler* handler);
    public:
        //@Override
        void removeGetStoreResponseHandler(GetStoreResponseHandler* handler);
    public:
        //@Override
        void addConsumeItemResponseHandler(ConsumeItemResponseHandler* handler);
    public:
        //@Override
        void removeConsumeItemResponseHandler(ConsumeItemResponseHandler* handler);
    public:
        //@Override
        void addIncreasePlayerWalletResponseHandler(IncreasePlayerWalletResponseHandler* handler);
    public:
        //@Override
        void removeIncreasePlayerWalletResponseHandler(IncreasePlayerWalletResponseHandler* handler);
    public:
        //@Override
        void addGetPlayerWalletResponseHandler(GetPlayerWalletResponseHandler* handler);
    public:
        //@Override
        void removeGetPlayerWalletResponseHandler(GetPlayerWalletResponseHandler* handler);
    public:
        //@Override
        void addGetAchievementBoardResponseHandler(GetAchievementBoardResponseHandler* handler);
    public:
        //@Override
        void removeGetAchievementBoardResponseHandler(GetAchievementBoardResponseHandler* handler);
    public:
        //@Override
        void addAchieveResponseHandler(AchieveResponseHandler* handler);
    public:
        //@Override
        void removeAchieveResponseHandler(AchieveResponseHandler* handler);
    public:
        //@Override
        void addSearchImmediateGameResponseHandler(SearchImmediateGameResponseHandler* handler);
    public:
        //@Override
        void removeSearchImmediateGameResponseHandler(SearchImmediateGameResponseHandler* handler);
    public:
        //@Override
        void addJoinGameResponseHandler(JoinGameResponseHandler* handler);
    public:
        //@Override
        void removeJoinGameResponseHandler(JoinGameResponseHandler* handler);
    public:
        //@Override
        void addUnjoinGameResponseHandler(UnjoinGameResponseHandler* handler);
    public:
        //@Override
        void removeUnjoinGameResponseHandler(UnjoinGameResponseHandler* handler);
    public:
        //@Override
        void addStartGameResponseHandler(StartGameResponseHandler* handler);
    public:
        //@Override
        void removeStartGameResponseHandler(StartGameResponseHandler* handler);
    public:
        //@Override
        void addStopGameResponseHandler(StopGameResponseHandler* handler);
    public:
        //@Override
        void removeStopGameResponseHandler(StopGameResponseHandler* handler);
    public:
        //@Override
        void addCreateGameResponseHandler(CreateGameResponseHandler* handler);
    public:
        //@Override
        void removeCreateGameResponseHandler(CreateGameResponseHandler* handler);
    public:
        //@Override
        void addGetGamesResponseHandler(GetGamesResponseHandler* handler);
    public:
        //@Override
        void removeGetGamesResponseHandler(GetGamesResponseHandler* handler);
    public:
        //@Override
        void addSaveAsGhostResponseHandler(SaveAsGhostResponseHandler* handler);
    public:
        //@Override
        void removeSaveAsGhostResponseHandler(SaveAsGhostResponseHandler* handler);
    public:
        //@Override
        void addGetGhostsResponseHandler(GetGhostsResponseHandler* handler);
    public:
        //@Override
        void removeGetGhostsResponseHandler(GetGhostsResponseHandler* handler);
    public:
        //@Override
        void addLoadGhostResponseHandler(LoadGhostResponseHandler* handler);
    public:
        //@Override
        void removeLoadGhostResponseHandler(LoadGhostResponseHandler* handler);
    public:
        //@Override
        void addSendGameChatResponseHandler(SendGameChatResponseHandler* handler);
    public:
        //@Override
        void removeSendGameChatResponseHandler(SendGameChatResponseHandler* handler);
    public:
        //@Override
        void addGetStorablesResponseHandler(GetStorablesResponseHandler* handler);
    public:
        //@Override
        void removeGetStorablesResponseHandler(GetStorablesResponseHandler* handler);
    public:
        //@Override
        void addSaveStorableResponseHandler(SaveStorableResponseHandler* handler);
    public:
        //@Override
        void removeSaveStorableResponseHandler(SaveStorableResponseHandler* handler);
    public:
        //@Override
        void addNextPlayerTurnResponseHandler(NextPlayerTurnResponseHandler* handler);
    public:
        //@Override
        void removeNextPlayerTurnResponseHandler(NextPlayerTurnResponseHandler* handler);
    public:
        //@Override
        void addSetPlayerNameResponseHandler(SetPlayerNameResponseHandler* handler);
    public:
        //@Override
        void removeSetPlayerNameResponseHandler(SetPlayerNameResponseHandler* handler);
    public:
        //@Override
        void addUpdateStorableResponseHandler(UpdateStorableResponseHandler* handler);
    public:
        //@Override
        void removeUpdateStorableResponseHandler(UpdateStorableResponseHandler* handler);
    public:
        //@Override
        void addRemoveStorableResponseHandler(RemoveStorableResponseHandler* handler);
    public:
        //@Override
        void removeRemoveStorableResponseHandler(RemoveStorableResponseHandler* handler);
    public:
        //@Override
        void addInviteThirdPartyFriendResponseHandler(InviteThirdPartyFriendResponseHandler* handler);
    public:
        //@Override
        void removeInviteThirdPartyFriendResponseHandler(InviteThirdPartyFriendResponseHandler* handler);
    public:
        //@Override
        void addPublishThirdPartyMessageResponseHandler(PublishThirdPartyMessageResponseHandler* handler);
    public:
        //@Override
        void removePublishThirdPartyMessageResponseHandler(PublishThirdPartyMessageResponseHandler* handler);
    public:
        //@Override
        void addThirdPartyLoginResponseHandler(ThirdPartyLoginResponseHandler* handler);
    public:
        //@Override
        void removeThirdPartyLoginResponseHandler(ThirdPartyLoginResponseHandler* handler);
    public:
        //@Override
        void addSaveGameResponseHandler(SaveGameResponseHandler* handler);
    public:
        //@Override
        void removeSaveGameResponseHandler(SaveGameResponseHandler* handler);
    public:
        //@Override
        void addLoadGameResponseHandler(LoadGameResponseHandler* handler);
    public:
        //@Override
        void removeLoadGameResponseHandler(LoadGameResponseHandler* handler);
    public:
        //@Override
        void addSavePlayerStorableResponseHandler(SavePlayerStorableResponseHandler* handler);
    public:
        //@Override
        void removeSavePlayerStorableResponseHandler(SavePlayerStorableResponseHandler* handler);
    public:
        //@Override
        void addUpdatePlayerStorableResponseHandler(UpdatePlayerStorableResponseHandler* handler);
    public:
        //@Override
        void removeUpdatePlayerStorableResponseHandler(UpdatePlayerStorableResponseHandler* handler);
    public:
        //@Override
        void addRemovePlayerStorableResponseHandler(RemovePlayerStorableResponseHandler* handler);
    public:
        //@Override
        void removeRemovePlayerStorableResponseHandler(RemovePlayerStorableResponseHandler* handler);
    public:
        //@Override
        void addGetPlayerStorablesResponseHandler(GetPlayerStorablesResponseHandler* handler);
    public:
        //@Override
        void removeGetPlayerStorablesResponseHandler(GetPlayerStorablesResponseHandler* handler);
    public:
        //@Override
        void addPauseSessionMonitoringResponseHandler(PauseSessionMonitoringResponseHandler* handler);
    public:
        //@Override
        void removePauseSessionMonitoringResponseHandler(PauseSessionMonitoringResponseHandler* handler);
    public:
        //@Override
        void addResumeSessionMonitoringResponseHandler(ResumeSessionMonitoringResponseHandler* handler);
    public:
        //@Override
        void removeResumeSessionMonitoringResponseHandler(ResumeSessionMonitoringResponseHandler* handler);
    public:
        //@Override
        void addPublishFriendThirdPartyMessageResponseHandler(PublishFriendThirdPartyMessageResponseHandler* handler);
    public:
        //@Override
        void removePublishFriendThirdPartyMessageResponseHandler(PublishFriendThirdPartyMessageResponseHandler* handler);
    public:
        //@Override
        void addInvitePlayerResponseHandler(InvitePlayerResponseHandler* handler);
    public:
        //@Override
        void removeInvitePlayerResponseHandler(InvitePlayerResponseHandler* handler);
    public:
        //@Override
        void addGetInvitationsResponseHandler(GetInvitationsResponseHandler* handler);
    public:
        //@Override
        void removeGetInvitationsResponseHandler(GetInvitationsResponseHandler* handler);
    public:
        //@Override
        void addAcceptInvitationResponseHandler(AcceptInvitationResponseHandler* handler);
    public:
        //@Override
        void removeAcceptInvitationResponseHandler(AcceptInvitationResponseHandler* handler);
    public:
        //@Override
        void addRefuseInvitationResponseHandler(RefuseInvitationResponseHandler* handler);
    public:
        //@Override
        void removeRefuseInvitationResponseHandler(RefuseInvitationResponseHandler* handler);
    public:
        virtual ~T807();
};
#endif // _T807