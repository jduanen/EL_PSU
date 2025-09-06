/*
* Just blink the Green LED
*/

#define PIN_GREEN_LED	12  // PA10


bool state = false;


void setup () {
	pinMode(PIN_GREEN_LED, OUTPUT);
	digitalWrite(PIN_GREEN_LED, LOW);
};


void loop() {
	if (state) {
		state = false;
	} else {
		state = true;
	};
	digitalWrite(PIN_GREEN_LED, state);
	delay(1000);
};
