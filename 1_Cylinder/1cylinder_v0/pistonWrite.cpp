#include "pistonWrite.h"
#include "engineVisuals.h"
#include <arduino.h>

void pistonWrite(bool pistonUP) {
	
	if (pistonUP) {
		digitalWrite(tdcPin1, HIGH);
		digitalWrite(tdcPin2, HIGH);
		digitalWrite(bdcPin1, LOW);
		digitalWrite(bdcPin2, LOW);
	} else {
		digitalWrite(tdcPin1, LOW);
		digitalWrite(tdcPin2, LOW);
		digitalWrite(bdcPin1, HIGH);
		digitalWrite(bdcPin2, HIGH);
	}
}

