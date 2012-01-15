/*
 * JoystickDirection.cpp
 *
 *  Created on: Jan 14, 2012
 *      Author: robert
 */
#include "JoystickDirection.h"

JoystickDirection::JoystickDirection(char pinNumber, int dir) {
	setPinNumber(pinNumber);
	setDirection(dir);
}

void JoystickDirection::setDirection(int dir) {
	direction = dir;
}

void JoystickDirection::setPinNumber(char p) {
	pinNumber = p;
}

char JoystickDirection::getPinNumber() {
	return pinNumber;
}

int JoystickDirection::getDirection() {
	return direction;
}
