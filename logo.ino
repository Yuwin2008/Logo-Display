#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);


//Please paste your bitMap Code here













void setup() {
  Serial.begin(115200);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  };
  
  delay(2000);         // wait two seconds for initializing
  display.clearDisplay(); // clear display


  display.drawBitmap(0, 0, bitmap_14v9pq, 128, 64, 1);       //please change thus bitmap name here ....

  
  
  display.display(); 
}

void loop() {
}