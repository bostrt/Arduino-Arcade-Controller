/*
 * JoystickDirection.h
 *
 *  Created on: Jan 14, 2012
 *      Author: robert
 */
#ifndef JOYSTICKDIRECTION_H_
#define JOYSTICKDIRECTION_H_

#define UP 0
#define DOWN 0
#define LEFT 0
#define RIGHT 0

class JoystickDirection {
private:
	char pinNumber;
	int direction;
public:
	JoystickDirection();
	JoystickDirection(char pinNumber, int direction);
	void setPinNumber(char pin);
	void setDirection(int dir);
	char getPinNumber();
	int getDirection();
	bool isTriggered();
};

#endif /* JOYSTICKDIRECTION_H_ */

