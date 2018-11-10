#include <avr/io.h>
#include <util/delay.h>

#include "libraries/FastLED/FastLED.h"

#define DATA_PIN PINB5

#define NUM_LEDS 8

CRGB leds[NUM_LEDS];

int main() {
	FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
	for (int i = 0; i < 8; i++) {
		leds[i] = CRGB::Red;
	}

	FastLED.show();
	_delay_ms(500);

	for (int i = 0; i < 8; i++) {
			leds[i] = CRGB::Black;
	}

	FastLED.show();
	_delay_ms(500);
}
