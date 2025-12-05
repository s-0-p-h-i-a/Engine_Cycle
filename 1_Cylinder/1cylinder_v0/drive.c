#include "global.h"
#include "engine.h"
#include "joystick.h"
#include "drive.h"
#include "engineVisuals.h"
#include <stdbool.h>

//int speedPause = IDLE;
unsigned long lastEngineCycle = ZERO;

//int getSpeedPause(void) {

void driveCar(void) {

	int enginePause = IDLE;

	if (z && now - lastEngineCycle > PAUSE) {
		lastEngineCycle = now;
		engineON 				= !engineON;
	}
	
	if (engineON) {

		runEngine();
		delay(IDLE);

		/*if (x > 600 && x <= 750) {
			runEngine();
			delay(IDLE);
		}
		else if (x > 750 && x <= 850) {
			runEngine();
			delay(SPEED_ONE);
		}
		else if (x > 850 && x <= 1000) {
			runEngine();
			delay(SPEED_TWO);
		}*/
	}
}
	
	
