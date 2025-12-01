

const bool TOTAL_CYCLE 			= 4;
const bool CYLINDER_ELEMENTS 	= 5;
extern const bool TOTAL_PINS	= 6;

const bool TDC = true;
const bool BDC = false;

const bool intakeValveCycle[TOTAL_CYCLE] 	= { true, false, false, false};
const bool exhaustValveCycle[TOTAL_CYCLE] 	= { false, false, false, true};
const bool fuelInjectionCycle[TOTAL_CYCLE] 	= { true, false, false, false};
const bool sparkPlugCycle[TOTAL_CYCLE] 		= { false, false, true, false};
const bool pistonCycle[TOTAL_CYCLE] 		= { BDC, TDC, BDC, TDC};

const bool intakeValvePin 	= 1;
const bool exhaustValvePin	= 2;
const bool fuelInjectorPin	= 3;
const bool sparkPlugPin		= 4;
const bool tdcPin			= 5;
const bool bdcPin			= 6;

const bool pinMap[TOTAL_PINS] = { intakeValvePin, exhaustValvePin, fuelInjectorPin, sparkPlugPin, tdcPin, bdcPin };
