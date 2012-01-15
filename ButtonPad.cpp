/*
 * Buttonpad.cpp
 *
 *  Created on: Jan 14, 2012
 *      Author: robert
 */
#include <stdlib.h>
#include "ButtonPad.h"

ButtonPad::ButtonPad() {

}

void ButtonPad::addButton(Button* b) {
	// First look for a button with same pin to replace
	Button* bTemp;
	for(int i = 0; i < BUTTON_COUNT; i++){
		bTemp = buttons[i];
		if(bTemp->getPinNumber() == b->getPinNumber()){
			buttons[i] = b;
			return;
		}
	}

	// If a button with this one's pin number does not exist
	// just append it to the array.
	for(int i = 0; i < BUTTON_COUNT; i++){
		bTemp = buttons[i];
		if(bTemp == NULL) {
			buttons[i] = b;
		}
	}
}
