#include <LiquidCrystal.h>
#include <countries.h>

#define PIN_SWITCH 5
#define PIN_RS 2
#define PIN_EN 3
#define PIN_D4 7
#define PIN_D5 8
#define PIN_D6 9
#define PIN_D7 10

LiquidCrystal lcd(PIN_RS, PIN_EN, PIN_D4, PIN_D5, PIN_D6, PIN_D7);

bool p_pin_state = LOW;

void tick() {
	lcd.clear();

	const char *country = pick_country();
	for (int i = 0; i < (int) strlen(country); ++i) {
		if (country[i] == '#') lcd.setCursor(0, 1);
		else lcd.print(country[i]);
	}
}

void setup() {
	lcd.begin(16, 2);
	lcd.clear();
	lcd.print("Spin the Wheel!");

	pinMode(PIN_SWITCH, INPUT_PULLUP);
}

void loop() {
	bool pin_state = digitalRead(PIN_SWITCH);
	if (p_pin_state == HIGH && pin_state == LOW)
		tick();
	p_pin_state = pin_state;

	delay(20);
}