

bool initCylinder(cylinderElements c) {
	switch (c) {
		case intakeValve: 	return intakeValveCycle[INTAKE];
			break;
		case exhaustValve: 	return exhaustValveCycle[INTAKE];
			break;
		case fuelInjector: 	return fuelInjectionCycle[INTAKE];
			break;
		case sparkPlug: 	return sparkPlugCycle[INTAKE];
			break;
		case piston: 		return pistonCycle[INTAKE];
			break;
		
		// just to prevent program from breaking?
		default:			return 0;
			break;
	}
}
