#include "global.h"
#include "engine.h"
#include <stdbool.h>

bool initCylinder(int c) {
	switch (c) {
		case INTAKE_VALVE: 	return intakeValveCycle[INTAKE];
			break;
		case EXHAUST_VALVE: return exhaustValveCycle[INTAKE];
			break;
		case FUEL_INJECTOR: return fuelInjectionCycle[INTAKE];
			break;
		case SPARK_PLUG: 	return sparkPlugCycle[INTAKE];
			break;
		case PISTON: 		return pistonCycle[INTAKE];
			break;
		
		// just to prevent program from breaking?
		default:			return 0;
			break;
	}
}

void startEngine(void) {
	
	for (int i = ZERO; i < CYLINDER_ELEMENTS; ++i) {
		
		cylinder[i] = initCylinder(i);
	}
}
