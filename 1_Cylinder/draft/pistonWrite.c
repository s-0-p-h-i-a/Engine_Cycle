

void pistonWrite(bool pistonUP) {
	
	if (pistonUP) {
		digitalWrite(tdcPin, HIGH);
		digitalWrite(bdcPin, LOW);
	} else {
		digitalWrite(tdcPin, LOW);
		digitalWrite(bdcPin, HIGH);
	}
}

