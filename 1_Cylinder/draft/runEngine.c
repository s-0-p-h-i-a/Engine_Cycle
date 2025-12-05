
void runEngine(strokes now) {
	
	for (cylinderElements c = intakeValve; c <= piston; ++c) {
			
			switch (c) {
			case intakeValve: 	{
				intakeValveCycle[now] ? digitalWrite(intakeValvePin, HIGH) : digitalWrite(intakeValvePin, LOW);
			}
				break;
			case exhaustValve: 	{
				exhaustValveCycle[now] ? digitalWrite(exhaustValvePin, HIGH) : digitalWrite(exhaustValvePin, LOW);
			}
				break;
			case fuelInjector: 	{
				fuelInjectionCycle[now] ? digitalWrite(fuelInjectorPin, HIGH) : digitalWrite(fuelInjectorPin, LOW);
			}
				break;
			case sparkPlug: 	{
				sparkPlugCycle[now] ? digitalWrite(sparkPlugPin, HIGH) : digitalWrite(sparkPlugPin, LOW);
			}
				break;
			case piston: 		{
				pistonCycle[now] ? pistonWrite(TDC) : pistonWrite(BDC);
			}
				break;
			
			// just to prevent program from breaking?
			default:			return 0;
				break;
		}
			
	}
}
