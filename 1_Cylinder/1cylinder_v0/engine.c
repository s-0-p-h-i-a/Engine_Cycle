#include "global.h"
#include "engine.h"
#include <stdbool.h>

const bool intakeValveCycle[TOTAL_CYCLE] 	= { true, false, false, false };
const bool exhaustValveCycle[TOTAL_CYCLE] 	= { false, false, false, true };
const bool fuelInjectionCycle[TOTAL_CYCLE] 	= { true, false, false, false };
const bool sparkPlugCycle[TOTAL_CYCLE] 		= { false, false, true, false };
const bool pistonCycle[TOTAL_CYCLE] 		= { BDC, TDC, BDC, TDC };

int currentStroke = INTAKE;

bool cylinder[CYLINDER_ELEMENTS];

bool engineON = false;

void updateStroke(void) {
	
	if (currentStroke == INTAKE) { currentStroke = COMPRESSION;}
	else if (currentStroke == COMPRESSION) { currentStroke = COMBUSTION;}
	else if (currentStroke == COMBUSTION) { currentStroke = EXHAUST;}
	else if (currentStroke == EXHAUST) { currentStroke = INTAKE;}
}

void runEngine(void) {
	
	for (int i = ZERO; i < CYLINDER_ELEMENTS; ++i) {
		
		switch(i) {
				case INTAKE_VALVE: 	{
					cylinder[i] = intakeValveCycle[currentStroke];
				}
					break;
				case EXHAUST_VALVE: 	{
					cylinder[i] = exhaustValveCycle[currentStroke];
				}
					break;
				case FUEL_INJECTOR: 	{
					cylinder[i] = fuelInjectionCycle[currentStroke];
				}
					break;
				case SPARK_PLUG: 	{
					cylinder[i] = sparkPlugCycle[currentStroke];
				}
					break;
				case PISTON: 		{
					cylinder[i] = pistonCycle[currentStroke];
				}
					break;
				
				// just to prevent program from breaking?
				default:			return 0;
					break;
		}
	}
}

