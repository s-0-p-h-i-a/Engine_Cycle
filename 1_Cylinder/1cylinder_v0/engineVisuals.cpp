#include "global.h"
#include "engine.h"
#include "pistonWrite.h"
#include "engineVisuals.h"
#include <arduino.h>

const bool pinMap[TOTAL_PINS] = { intakeValvePin, exhaustValvePin, fuelInjectorPin, sparkPlugPin, tdcPin1, tdcPin2, bdcPin1, bdcPin2 };

void displayEngine(void) {
	
	for (int c = ZERO; c <= CYLINDER_ELEMENTS; ++c) {
			
			switch (c) {
				case INTAKE_VALVE: 	{
					cylinder[c] ? digitalWrite(intakeValvePin, HIGH) : digitalWrite(intakeValvePin, LOW);
				}
					break;
				case EXHAUST_VALVE: 	{
					cylinder[c] ? digitalWrite(exhaustValvePin, HIGH) : digitalWrite(exhaustValvePin, LOW);
				}
					break;
				case FUEL_INJECTOR: 	{
					cylinder[c] ? digitalWrite(fuelInjectorPin, HIGH) : digitalWrite(fuelInjectorPin, LOW);
				}
					break;
				case SPARK_PLUG: 	{
					cylinder[c] ? digitalWrite(sparkPlugPin, HIGH) : digitalWrite(sparkPlugPin, LOW);
				}
					break;
				case PISTON: 		{
					cylinder[c] ? pistonWrite(TDC) : pistonWrite(BDC);
				}
					break;
		}			
	}
}
