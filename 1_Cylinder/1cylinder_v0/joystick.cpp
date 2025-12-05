#include "global.h"
#include "joystick.h"
#include <arduino.h>

int x = 0;
bool z = false;
//unsigned long lastInput_X = 0;
//unsigned long lastInput_Z = 0;

void readJoystick(void) {

	x = analogRead(joystick_X);
	//x = map(analogRead(joystick_X), 0, 1023, 1800, 10) + 20;
	z = digitalRead(joystick_Z) > ZERO;
	
	//int newX = analogRead(joystick_X) - correction;
	
	/*if (now-lastInput_X > debounceDelay) {
		
		lastInput_X = now;
		x = newX;
	}*/
}
