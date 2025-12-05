/*
 
 arduino-cli compile --fqbn arduino:avr:uno 1cylinder_v0.ino

 */




#include "global.h"
#include "engine.h"
#include "startEngine.h"
#include "joystick.h"
#include "drive.h"
#include "engineVisuals.h"
#include <arduino.h>

void setup() {

	startEngine();
	
	pinMode(joystick_X, INPUT);
	pinMode(joystick_Y, INPUT);
	pinMode(joystick_Z, INPUT);
	
	pinMode(intakeValvePin, OUTPUT);
	pinMode(exhaustValvePin, OUTPUT);
	pinMode(fuelInjectorPin, OUTPUT);
	pinMode(sparkPlugPin, OUTPUT);
	pinMode(tdcPin1, OUTPUT);
	pinMode(tdcPin2, OUTPUT);
	pinMode(bdcPin1, OUTPUT);
	pinMode(bdcPin2, OUTPUT);
	
	Serial.begin(9600);
}

void loop() {

	updateStroke();

	readJoystick();

	//updateSpeed();
	
	driveCar();
	
	displayEngine();

	Serial.print("x:");
	Serial.print(x);
	//Serial.print(",");
	//Serial.print("z:");
	//Serial.println(z+100);	

	now = millis();
}
