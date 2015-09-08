#include "AT.h"
#include "ATSprite.h"

#pragma once

enum Align {
	left,
	center,
	right
};

class Text {
	
	public:
		Text(float x, float y, char* text, int fontsize, 
			const ATVector4 &fontcolour = ATVector4::White, Align align = Align::left);

		float x;
		float y;
		ATVector4 pos;
		char* rendertext;
		int size;
		ATVector4 colour;
		Align align;

		void textupdate(char* text);
		bool render();
		bool deinit();
};
