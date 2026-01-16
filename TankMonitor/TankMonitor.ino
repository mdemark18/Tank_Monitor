#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <math.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// ----- NTC CONFIG -----
const int analogPin = 36;        // VP pin
const float resistorValue = 10000.0; // 10k fixed resistor
const float beta = 3950.0;
const float nominalResistance = 10000.0;
const float nominalTemp = 25.0;

void setup() {
  Serial.begin(115200);

  // ESP32 ADC setup
  analogSetAttenuation(ADC_11db); // allow 0–3.3V

  // OLED init
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("SSD1306 allocation failed");
    for (;;);
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
}

void loop() {
  // ----- READ ADC (averaged) -----
  int samples = 20;
  int adc = 0;
  for (int i = 0; i < samples; i++) {
    adc += analogRead(analogPin);
    delay(2);
  }
  adc /= samples;
  adc = constrain(adc, 1, 4094);

  // ----- CALCULATE TEMP -----
  float resistance = resistorValue * (4095.0 / adc - 1.0);

  float temperatureK = 1.0 / (
    (log(resistance / nominalResistance) / beta) +
    (1.0 / (nominalTemp + 273.15))
  );

  float temperatureC = temperatureK - 273.15;
  float temperatureF = temperatureC * 9.0 / 5.0 + 32.0;

  // ----- OLED DISPLAY -----
  display.clearDisplay();

  display.setCursor(0, 0);
  display.setTextSize(1);
  display.println("Miller's Tank");

  display.setCursor(0, 20);
  display.print("Temp: ");
  display.print(temperatureF, 1);
  display.println(" F");

  display.display();

  // ----- SERIAL (OPTIONAL) -----
  Serial.print("Temp: ");
  Serial.print(temperatureC);
  Serial.print(" C | ");
  Serial.print(temperatureF);
  Serial.println(" F");

  delay(1000);
}
