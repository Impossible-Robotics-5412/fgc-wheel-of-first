#include <LiquidCrystal.h>
#include <countries.h>

const int rs = 2, en = 3, d4 = 7, d5 = 8, d6 = 9, d7 = 10;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
	lcd.begin(16, 2);
	lcd.clear();
	lcd.print("Spin the Wheel!");
}

void loop() {
	delay(1000);
	lcd.clear();

	const char *country = pick_country();
	for (int i = 0; i < (int) strlen(country); ++i) {
		if (country[i] == '#') lcd.setCursor(0, 1);
		else lcd.print(country[i]);
	}
}