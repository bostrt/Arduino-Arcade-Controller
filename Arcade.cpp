// Do not remove the include below
#include "Arcade.h"
#include "Button.h"
#include "ButtonPad.h"
#include "Joystick.h"
#include "SoftwareSerial.h"

Joystick* stick = new Joystick();
ButtonPad* pad = new ButtonPad();
SoftwareSerial serial = SoftwareSerial(0,1);

void setup()
{
	// TESTING
	serial.begin(9600);

	// Add Up, Down, Left, and Right to the joystick obj.
	stick->addDirection(0, new Button('i',STICK_UP_PIN));
	stick->addDirection(1, new Button('k',STICK_DOWN_PIN));
	stick->addDirection(2, new Button('j',STICK_LEFT_PIN));
	stick->addDirection(3, new Button('l',STICK_RIGHT_PIN));

	// Add Buttons 1-8
	pad->addButton(new Button('s', BUTTON_START_PIN));
	pad->addButton(new Button('S', BUTTON_SELECT_PIN));
	pad->addButton(new Button('a', BUTTON_A_PIN));
	pad->addButton(new Button('b', BUTTON_B_PIN));
	pad->addButton(new Button('c', BUTTON_C_PIN));
	pad->addButton(new Button('x', BUTTON_X_PIN));
	pad->addButton(new Button('y', BUTTON_Y_PIN));
	pad->addButton(new Button('z', BUTTON_Z_PIN));
}

void loop()
{

}

