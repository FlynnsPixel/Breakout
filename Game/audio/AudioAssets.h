#include "AT.h"
#include "ATAudio.h"

#pragma once

class AudioAssets {

	public:
		static ATAudio* blockhit;
		static ATAudio* bounce1;
		static ATAudio* bounce2;
		static ATAudio* gameover;
		static ATAudio* lostball;
		static ATAudio* menuselect;
		static uint32 blockhitref;
		static uint32 bounce1ref;
		static uint32 bounce2ref;
		static uint32 gameoverref;
		static uint32 lostballref;
		static uint32 menuselectref;

		static void init();
		static void deinit();
};


