// Only modify this file to include
// - function definitions (prototypes)
// - include files
// - extern variable definitions
// In the appropriate section
#ifndef Arcade_H_
#define Arcade_H_
#include "Arduino.h"
//add your includes for the project Arcade here

//end of add your includes here
#ifdef __cplusplus
extern "C" {
#endif
void loop();
void setup();
#ifdef __cplusplus
} // extern "C"
#endif

//add your function definitions for the project Arcade here
// Stick Direction-Pin mapping
#define STICK_UP_PIN 7
#define STICK_DOWN_PIN 8
#define STICK_LEFT_PIN 11
#define STICK_RIGHT_PIN 12

// Button-Pin mapping
#define BUTTON_START_PIN 2
#define BUTTON_SELECT_PIN 3
#define BUTTON_A_PIN 4
#define BUTTON_B_PIN 5
#define BUTTON_C_PIN 6
#define BUTTON_X_PIN 7
#define BUTTON_Y_PIN 8
#define BUTTON_Z_PIN 9

//Do not add code below this line
#endif /* Arcade_H_ */
