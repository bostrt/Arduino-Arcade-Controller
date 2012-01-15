/*
 * ButtonPad.h
 *
 *  Created on: Jan 14, 2012
 *      Author: robert
 */

#ifndef BUTTONPAD_H_
#define BUTTONPAD_H_

#include "Button.h"

#define BUTTON_COUNT 8

class ButtonPad {
private:
	Button* buttons[BUTTON_COUNT]; // Exactly 8 buttons supported
public:
	ButtonPad();
	void addButton(Button* b);
	Button getButtonByCharacter(char c);
	Button getButtonByPin(char p);
	Button** getPressedButtons();
};


#endif /* BUTTONPAD_H_ */
