/*
 * Button.cpp
 *
 *  Created on: Jan 14, 2012
 *      Author: robert
 */
#include "Button.h"
#include "Arduino.h"

Button::Button(char button, int pin) {
	setCharacter(button);
	setPinNumber(pin);
	pinMode(pin, INPUT);
}

void Button::setCharacter(char button) {
	buttonCharacter = button;
}

void Button::setPinNumber(int pin) {
	pinNumber = pin;
}

char Button::getCharacter() {
	return buttonCharacter;
}

int Button::getPinNumber() {
	return pinNumber;
}
