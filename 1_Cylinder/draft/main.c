



unsigned long int timestamp = 0;

bool cylinder[CYLINDER_ELEMENTS];

for (cylinderElements c = intakeValve; c <= piston; ++c) {
	
	cylinder[c] = initCylinder(c);
}

strokes currentStroke = INTAKE;


void loop () {
	
	runEngine(currentStroke);
	
	++currentStroke;
}
