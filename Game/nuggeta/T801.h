#ifndef _T801
#define _T801
#include "T806.h"
#include "NuggetaPlugApi.h"
#include <cstring>
#include "NLogger.h"
#include "GameDispatcher.h"
#include "T804.h"
#include "T800.h"
#include <vector>
#include "T797.h"
#include "NMap.h"
#include "Pump.h"
#include "HandshakeState.h"
#include "DnsStatus.h"
#include "StartDetails.h"
#include "NLoggerFactory.h"
#include "NUtils.h"
#include "T796.h"
#include "Message.h"
#include "DnsResponse.h"
#include "StartResponse.h"
#include "StartStatus.h"
#include "DnsRequest.h"
#include "Platform.h"
#include "ConnectionLost.h"
#include "MessageListener.h"
#include "T801.h"
#include "StopPlugConnectionResponse.h"
#include "SessionExpired.h"
#include "HeartBeatRequest.h"
#include "HeartBeatResponse.h"
#include "MemoryManagement.h"
#include "LoginResponse.h"
#include "SignUpResponse.h"
#include "ThirdPartyLoginResponse.h"
#include "InviteThirdPartyFriendResponse.h"
#include "PublishThirdPartyMessageResponse.h"
#include "GetThirdPartyFriendsResponse.h"
#include "Net.h"
#include "OpenConnection.h"
#include "ConnectionReadyListener.h"
#include "Handshake.h"
#include "ConnectionLostListener.h"
#include <algorithm>
#include "ConnectionFailListener.h"
#include "HandshakeResponse.h"
#include "BuyProductUrl.h"
#include "JoinGameResponse.h"
#include "NGame.h"
#include "SwitchToServerInformation.h"
#include "ExecutionStatus.h"
#include "ConnectionResumed.h"
#include "NPlayer.h"
#include "PlayerSessionType.h"
#include "OpenUrl.h"
#include "GameMessageListener.h"
#include "NuggetaMessageListener.h"
#include "ConnectionInvalidVersionDetectedListener.h"
#include "InvalidVersion.h"
#include "GameStore.h"
#include "ConnectionInterrupted.h"
#include "StopPlugConnectionRequest.h"
#include "ConnectionStop.h"
#include "GameMessage.h"
#include "Serializable.h"
#include "Notifications.h"
#include "NStorage.h"

class T801 :public  T806, NuggetaPlugApi {
    private:
         static int _j14118;
    protected:
         static const char* _i14119;
    protected:
        NLogger* _w14120;
    protected:
        GameDispatcher* _h14121;
    protected:
        T804* _e14122;
    private:
        std::vector<T800*>* _k14123;
    private:
        T800* _v14124;
    protected:
        T804* _f14125;
    protected:
        T797* _v14126;
    private:
        NMap* _r14127;
    private:
        Pump* _y14128;
    private:
        int _p14129;
    private:
        int _t14130;
    private:
        const char* _f6037;
    private:
        const char* _v14132;
    private:
        const char* _r14133;
    private:
        HandshakeState* _q14134;
    private:
        const char* _s14135;
    private:
         static const char* _o14136;
    private:
         static const char* _t14137;
    protected:
        bool _j14138;
    private:
        bool _q14139;
    private:
        bool _k14140;
    private:
        const char* _b14141;
    private:
        DnsStatus* _c14142;
    private:
        StartDetails* _y14143;
    public:
        T801(const char* _x14131);
    private:
        void _m16917(Message* _o14145);
    private:
        void _m16918(const char* _y14156);
    private:
        void _m16923(Message* _n14158);
    public:
        void _m16920(Message* message, bool _y14184, bool _t14185, bool _i14186);
    public:
        //@Override
        void addGameMessageListener(GameMessageListener* listener);
    public:
        //@Override
        void removeGameMessageListener(GameMessageListener* listener);
    public:
        //@Override
        void addNuggetaMessageListener(NuggetaMessageListener* listener);
    public:
        //@Override
        void removeNuggetaMessageListener(NuggetaMessageListener* listener);
    private:
        void _m16930();
    public:
        //@Override
        void start();
    private:
        void _m16935();
    private:
        void _m16934();
    private:
        void _m16933();
    private:
        void _m16932();
    public:
        //@Override
        void stop();
    protected:
        void _m16924();
    public:
        //@Override
        const char* sendMessage(Message* message);
    public:
        //@Override
        const char* _sendMessage0(Message* message);
    public:
        const char* _request0(Message* message, void* handler);
    private:
        Message* _m16937(Message* _e14200, void* _n14201);
    public:
        const char* _m16938();
    public:
        const char* _m16936();
    public:
        //@Override
        const char* sendGameMessage(GameMessage* gameMessage, const char* gameId);
    public:
        void* _cloneSerializable(Serializable* _h14198);
    public:
        //@Override
        std::vector<Message*>* pump();
    public:
        void _m16928(StartDetails* warningDetails);
    public:
        void _m16919(StartDetails* _c14210);
    public:
        const char* _m16931();
    public:
        int _m16921();
    protected:
        int _m16922();
    public:
        void _m16927(const char* _o14212);
    private:
        const char* _dupString(const char* str);
    public:
        void _m16929(BuyProductUrl* _s14213);
    public:
        void openWebView(OpenUrl* openUrl);
    public:
        void _m16926(const char* _y14214);
    public:
        void setPlayerDebugId(const char* playerDebugId);
    public:
        virtual ~T801();
    public:
        //@Override
        void onMessage14(Message* message2);
    public:
        //@Override
        void onConnectionReady15();
    public:
        //@Override
        void onConnectionLost16();
    public:
        //@Override
        void onConnectionFail17();
    public:
        //@Override
        void onMessage18(Message* message2);
    public:
        //@Override
        void onMessage19(Message* message);
    public:
        //@Override
        void onConnectionReady20();
    public:
        //@Override
        void onConnectionLost21();
    public:
        //@Override
        void onConnectionFail22();
    public:
        //@Override
        void onInvalidVersionDetected23();
    public:
        //@Override
        void onConnectionReady24();
    public:
        //@Override
        void onConnectionFail25();
    public:
        //@Override
        void onConnectionLost26();
    public:
        //@Override
        void onInvalidVersionDetected27();
};
#endif // _T801