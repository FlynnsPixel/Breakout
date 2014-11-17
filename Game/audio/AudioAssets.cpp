#include "AudioAssets.h"

ATAudio* AudioAssets::blockhit;
ATAudio* AudioAssets::bounce1;
ATAudio* AudioAssets::bounce2;
ATAudio* AudioAssets::gameover;
ATAudio* AudioAssets::lostball;
ATAudio* AudioAssets::menuselect;
uint32 AudioAssets::blockhitref = 0;
uint32 AudioAssets::bounce1ref = 1;
uint32 AudioAssets::bounce2ref = 2;
uint32 AudioAssets::gameoverref = 3;
uint32 AudioAssets::lostballref = 4;
uint32 AudioAssets::menuselectref = 5;

void AudioAssets::init() {
	//creates audio assets
	ATAudio_Create(&blockhit, "blockhit.wav");
	ATAudio_Create(&bounce1, "bounce1.wav");
	ATAudio_Create(&bounce2, "bounce2.wav");
	ATAudio_Create(&gameover, "gameover.wav");
	ATAudio_Create(&lostball, "lostball.wav");
	ATAudio_Create(&menuselect, "menuselect.wav");
}

void AudioAssets::deinit() {
	//destroys audio assets
	ATAudio_Destroy(blockhit);
	ATAudio_Destroy(bounce1);
	ATAudio_Destroy(bounce2);
	ATAudio_Destroy(gameover);
	ATAudio_Destroy(lostball);
	ATAudio_Destroy(menuselect);
}
