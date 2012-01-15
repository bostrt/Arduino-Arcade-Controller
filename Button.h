/*
 * Button.h
 *
 *  Created on: Jan 14, 2012
 *      Author: robert
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
	char getButtonCharacter();
	void setButtonCharacter(char);
	int getPinNumber();
	void setPinNumber(int);
};

#endif /* BUTTON_H_ */
