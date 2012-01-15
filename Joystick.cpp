/*
 * Joystick.cpp
 *
 *  Created on: Jan 14, 2012
 *      Author: robert
 */
#include <stdlib.h>
#include "Joystick.h"
#include "Button.h"

Joystick::Joystick() {

}

bool Joystick::addDirection(int index, Button* dir) {
	if(index >= 0 && index < STICK_DIRECTION_COUNT){
		directions[index] = dir;
		return true;
	}
	return false;
}

Button* Joystick::getJoystickDirection(int index) {
	if(index >= 0 && index < STICK_DIRECTION_COUNT){
		return directions[index];
	}
	return NULL;
}


