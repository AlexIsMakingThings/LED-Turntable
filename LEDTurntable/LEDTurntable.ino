#include <FastLED.h>
#define LED_PIN 2
#define NUM_LEDS 142
#define BRIGHTNESS 75

CRGBArray<NUM_LEDS> leds;

// Define the segments
CRGBSet core(leds(0,15)); // 16 lights
// gap is 6 lights
CRGBSet ring(leds(23,77)); // 55 lights
// gap is 1 light
CRGBSet outer(leds(79,142)); // 64 lights

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setMaxPowerInVoltsAndMilliamps(5, 500);
  FastLED.setBrightness(BRIGHTNESS);
  FastLED.clear();
  FastLED.show();
}

void loop() {
  core = CRGB::Green;
  ring = CRGB::Red;
  outer = CRGB::Blue;

  FastLED.show();

  
}
