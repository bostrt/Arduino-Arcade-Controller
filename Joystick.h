/*
 * Joystick.h
 *
 *  Created on: Jan 14, 2012
 *      Author: robert
 */
#ifndef JOYSTICK_H_
#define JOYSTICK_H_

#include "Button.h"

#define STICK_DIRECTION_COUNT 4

class Joystick {
private:
	Button* directions[STICK_DIRECTION_COUNT];
public:
	Joystick();
	bool addDirection(int index, Button* direction);
	Button* getJoystickDirection(int direction);
};

#endif /* JOYSTICK_H_ */

