/*
 * Button.cpp
 *
 *  Created on: Jan 14, 2012
 *      Author: robert
 */
#include "Button.h"
#include "Arduino.h"

Button::Button(char button, int pin) {
	setButtonCharacter(button);
	setPinNumber(pin);
	pinMode(pin, INPUT);
}

void Button::setButtonCharacter(char button) {
	buttonCharacter = button;
}

void Button::setPinNumber(int pin) {
	pinNumber = pin;
}

char Button::getButtonCharacter() {
	return buttonCharacter;
}

int Button::getPinNumber() {
	return pinNumber;
}
