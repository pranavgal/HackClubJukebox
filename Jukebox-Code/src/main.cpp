#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft;

void setup() {
  Serial.begin(115200);
  tft.init();
  tft.setRotation(0);

  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.setTextSize(2);
  tft.setCursor(20, 30);
  tft.println("ESP32 + ST7796");
  tft.setCursor(20, 65);
  tft.println("320 x 480 display");

  tft.fillRect(20, 120, 280, 60, TFT_RED);
  tft.fillRect(20, 200, 280, 60, TFT_GREEN);
  tft.fillRect(20, 280, 280, 60, TFT_BLUE);

  Serial.println("ST7796 display test initialized");
}

void loop() {}