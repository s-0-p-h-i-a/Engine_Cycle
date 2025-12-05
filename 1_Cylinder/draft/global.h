
typedef enum {
	INTAKE 		= 0,
	COMPRESSION = 1,
	COMBUSTION 	= 2,
	EXHAUST 	= 3
} strokes;

typedef enum {
	intakeValve 	= 0,
	exhaustValve 	= 1,
	fuelInjector	= 2,
	sparkPlug 		= 3,
	piston			= 4,
} cylinderElements;

extern const bool TOTAL_CYCLE;
extern const bool CYLINDER_ELEMENTS;
extern const bool TOTAL_PINS;

extern const bool TDC;
extern const bool BDC;

extern const bool intakeValveCycle[4];
extern const bool exhaustValveCycle[4];
extern const bool fuelInjectionCycle[4];
extern const bool sparkPlugCycle[4];
extern const bool pistonCycle[4];

extern const bool clear[4];

extern const bool intakeValvePin;
extern const bool exhaustValvePin;
extern const bool fuelInjectorPin;
extern const bool sparkPlugPin;
extern const bool tdcPin;
extern const bool bdcPin;

extern const bool pinMap[6];

