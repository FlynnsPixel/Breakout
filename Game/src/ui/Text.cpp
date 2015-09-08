#include "Text.h"
#include "ATBasicFont.h"

Text::Text(float posx, float posy, char* text, int fontsize, const ATVector4 &fontcolour, Align alignment) {
	x = posx;
	y = posy;
	size = fontsize;
	colour = fontcolour;
	align = alignment;
	textupdate(text);
}

void Text::textupdate(char* text) {
	switch (align) {
		case Align::left:
			pos.v.x = x;
			break;
		case Align::center:
			pos.v.x = x - (strlen(text) * size) / 4;
			break;
		case Align::right:
			pos.v.x = x - (strlen(text) * size) / 2;
			break;
	}
	pos.v.y = y;
	pos.v.z = 1;
	rendertext = text;
}

bool Text::render() {
	ATBasicFont_RenderText(pos, rendertext, size, colour);

	return true;
}

bool Text::deinit() {
	return true;
}
