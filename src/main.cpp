#include <LiquidCrystal.h>
#include <countries.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const char* pick_country() {
	return countries[random(total_countries)];
}

void setup() {
	lcd.begin(16, 2);
	lcd.print("Spin the Wheel!");
}

void loop() {
	delay(1000);
	lcd.clear();

	const char* country = pick_country();

	for (int i = 0; i < (int) strlen(country); ++i) {
		if (country[i] == '#') lcd.setCursor(0, 1);
		else lcd.print(country[i]);
	}
}