#include <Adafruit_NeoPixel.h>

#define PIN 0

#define NUMPIXELS 16

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

#define DELAYVAL 500 // Time (in milliseconds) to pause between pixels

void setup() {
  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
}

void loop() { 
  pixels.clear(); // Set all pixel colors to 'off'
  int r = random(255); 
  int g = random(255); 
  int b = random(255);
  for(int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(r, g, b));
    pixels.show();
  }
  delay(DELAYVAL); // Pause before next pass through loop
}
