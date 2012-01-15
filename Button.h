/*
 * Button.h
 *
 *  Created on: Jan 14, 2012
 *      Author: robert
 *
 *	Button represents a switch in the arcade controller system.
 *	A button is assigned a pin on the Arduino and assigned a
 *	character that it sends when triggered.
 */

#ifndef BUTTON_H_
#define BUTTON_H_

class Button {
private:
	char buttonCharacter;
	int pinNumber;
public:
	Button();
	Button(char button, int pin);
	char getCharacter();
	void setCharacter(char);
	int getPinNumber();
	void setPinNumber(int);
};

#endif /* BUTTON_H_ */
