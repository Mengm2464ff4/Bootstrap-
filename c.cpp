#include "ESP32_WS2812_Lib.h"
#include <Adafruit_SSD1306.h>

#define LEDS_COUNT 16
#define LEDS_PIN 0
#define CHANNEL 0
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define SCREEN_ADDRESS 0x3C

ESP32_WS2812 strip = ESP32_WS2812(LEDS_COUNT, LEDS_PIN, CHANNEL, TYPE_GRB);
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define LOGO_HEIGHT 16
#define LOGO_WIDTH 16
/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file 'paris35064.jpg'
 */

const unsigned char Japan[] PROGMEM = {
    B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
    B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
    B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
    B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
    B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
    B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
    B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
    B11100000, B00000000, B00000000, B00000000, B00000000, B00110000,
    B01111100, B00000000, B00000000, B00000000, B00000011, B11110000,
    B01111111, B11100000, B00000000, B00000000, B01111111, B11100000,
    B00111111, B11111111, B11111111, B11111111, B11111111, B11100000,
    B00111111, B11111111, B11111111, B11111111, B11111111, B11000000,
    B00011111, B11111111, B11111111, B11111111, B11111111, B11000000,
    B00011111, B11111111, B11111111, B11111111, B11111001, B10000000,
    B00000000, B01111100, B00001111, B00000001, B11110000, B00000000,
    B00000000, B00011000, B00000111, B00000001, B11000000, B00000000,
    B00000000, B00011000, B00000111, B00000000, B11000000, B00000000,
    B00000000, B00111100, B00000111, B00000000, B11100000, B00000000,
    B00011111, B11111111, B11111111, B11111111, B11111111, B10000000,
    B00011111, B11111111, B11111111, B11111111, B11111111, B11000000,
    B00011111, B11111111, B11111111, B11111111, B11111111, B10000000,
    B00000000, B00111000, B00000000, B00000000, B11100000, B10000000,
    B00000000, B00111000, B00000000, B00000000, B11000000, B00000000,
    B00000000, B00111000, B00000000, B00000000, B11100001, B11000000,
    B00000000, B00111000, B00000000, B00000000, B11100111, B11110000,
    B00000000, B00110000, B00000000, B00000000, B11100000, B10000000,
    B00000000, B00110000, B00000000, B00000000, B11100000, B10000000,
    B00000000, B00110000, B00000000, B00000000, B11100111, B10000000,
    B00000000, B00110000, B00000000, B00000000, B11100000, B00000000,
    B00000000, B00110000, B00000000, B00000000, B11100000, B00000000,
    B00000000, B00110000, B00000000, B00000000, B11100100, B00000000,
    B00000000, B00110000, B00000000, B00000000, B11100000, B00000000,
    B00000000, B00110000, B00000000, B00000000, B01100000, B00000000,
    B00000000, B00110000, B00000000, B00000000, B01100000, B00000000,
    B00000000, B00110000, B00000000, B00000000, B01100000, B00000000,
    B00000000, B00110000, B00000000, B00000000, B01100000, B00000000,
    B00000000, B00110000, B00000000, B00000000, B11100000, B00000000,
    B00000000, B01110000, B00000000, B00000000, B11100000, B00000000,
    B00000111, B01110000, B00000000, B00000000, B01111111, B00000000,
    B00111111, B11111000, B00000000, B00000000, B11111111, B11101000,
    B00011111, B11111111, B10000000, B00001111, B11111111, B11000000,
    B00011111, B11111111, B11111000, B11111111, B11111111, B11000000,
    B00011111, B11111111, B11100000, B01111111, B11111111, B11000000,
    B00111111, B11111111, B11000000, B00011111, B11111111, B11100000,
    B00111111, B11111111, B00000000, B00000111, B11111111, B11100000,
    B00111111, B11111100, B00000000, B00000001, B11111111, B11100000,
    B00111111, B11111000, B00000000, B00000000, B11111111, B11100000,
    B00111111, B11111000, B00000000, B00000000, B11111111, B11100000,
    B00111111, B11111000, B00000000, B00000000, B11111111, B11101000,
    B11111110, B11111000, B00000000, B00000000, B11111011, B11101000,
    B10111000, B11110000, B00000000, B00000000, B11111000, B11111000,
    B11110001, B11100000, B00000000, B00000001, B01111000, B00101000,
    B10000011, B11001100, B11111110, B11111111, B10011110, B00001000,
    B10001111, B00011111, B11111111, B11111111, B10001101, B00001000,
    B11011110, B00011000, B00000000, B00000000, B11000111, B11011000,

    B11111110, B00100000, B00000000, B00000000, B00110011, B11111000,
    B11111100, B11110000, B00000000, B00000000, B00111001, B11111000,
    B11111010, B11110111, B11111111, B11111111, B11111000, B11111000,
    B11110011, B11111111, B11111111, B11111111, B11111100, B01111000,
    B11100101, B11111101, B11111111, B11111111, B11111110, B00111000,
    B11001011, B10000000, B00000000, B00000000, B00001111, B00011000,
    B00001111, B10000000, B00000000, B00000000, B00001111, B10001000,
    B00111111, B11111111, B11111111, B11111111, B11111111, B11000000,
    B00111111, B11011001, B11111111, B11111111, B01101111, B11100000};

String Serial_input = "";

void setup()
{
    // Initialize serial and display
    Serial.begin(9600);
    if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS))
    {
        Serial.println(F("SSD1306 allocation failed"));
        for (;;)
            ; // Don't proceed, loop forever
    }
    display.display();
    delay(2000);
    display.clearDisplay();
    display.display();

    // Initialize WS2812 LEDs
    strip.begin();
    strip.setBrightness(10);
}

void loop()
{
    // Set all LEDs to a dynamic color
    for (int j = 0; j < 255; j += 2)
    {
        for (int i = 0; i < strip.getLedCount(); i++)
        {
            strip.setLedColorData(i, strip.Wheel((i * 256 / strip.getLedCount() + j) & 255));
        }
        strip.show();
    }
    // Set all LEDs to red, green, and blue in sequence
    // Draw a line on the display
    display.drawLine(1, 32, 127, 32, SSD1306_WHITE);
    display.display(); // Update screen with each newly-drawn line
    delay(600);
    display.clearDisplay();

    for (int i = 0; i < strip.getLedCount(); i++)
    {
        strip.setLedColorData(i, 10, 0, 255); // Blue color for all LEDs
    }
    strip.show();

    // Display bitmap on OLED screen
    display.drawBitmap(0, 0, Japan, 45, 64, SSD1306_WHITE);
    display.display();
    delay(600);
    display.clearDisplay();

    for (int i = 0; i < strip.getLedCount(); i++)
    {
        strip.setLedColorData(i, 0, 255, 0); // Green color for all LEDs
    }
    strip.show();

    // Add a filled rounded rectangle
    display.fillRoundRect(10, 10, 100, 30, 10, SSD1306_WHITE); // Draw a white rounded rectangle
    display.display();                                         // Update the screen
    delay(600);                                                // Delay to view the rectangle
    display.clearDisplay();

    for (int i = 0; i < strip.getLedCount(); i++)
    {
        strip.setLedColorData(i, 225, 0, 0); // Green color for all LEDs
    }
    strip.show();

    display.drawPixel(20, 20, SSD1306_WHITE); // Draw a white pixel at (20, 20)
    display.drawPixel(30, 30, SSD1306_WHITE); // Draw a white pixel at (30, 30)
    display.drawPixel(40, 40, SSD1306_WHITE); // Draw a white pixel at (40, 40)
    display.display();                        // Update the screen to show the pixels
    delay(600);

    for (int i = 0; i < strip.getLedCount(); i++)
    {
        strip.setLedColorData(9, 225, 200, 100); // Green color for all LEDs
    }
    strip.show();

    display.drawRoundRect(10, 50, 100, 30, 10, SSD1306_WHITE);
    display.display();
    delay(600);
    display.clearDisplay();

    for (int i = 0; i < strip.getLedCount(); i++)
    {
        strip.setLedColorData(i, 100, 200, 0); // Green color for all LEDs
    }
    strip.show();

    display.drawRect(10, 20, 100, 30, SSD1306_WHITE);
    display.display();
    delay(600);
    display.clearDisplay();

    for (int i = 0; i < strip.getLedCount(); i++)
    {
        strip.setLedColorData(i, 100, 0, 100); // Green color for all LEDs
    }
    strip.show();

    display.setTextSize(2);              // Normal 1:1 pixel scale
    display.setTextColor(SSD1306_WHITE); // Draw white text
                                         // (x ដេក, yឈរ)
    display.setCursor(0, 16);            // Start at top-left corner
    display.cp437(true);                 // Use full 256 char 'Code Page 437' font
    display.println(F("Liv Chhenging"));
    display.display();
    delay(1000);
    display.clearDisplay();

    for (int i = 0; i < strip.getLedCount(); i++)
    {
        strip.setLedColorData(i, 20, 60, 10); // Green color for all LEDs
    }
    strip.show();

    display.drawLine(1, 32, 127, 32, SSD1306_WHITE);
    display.display();
    display.drawLine(64, 1, 64, 32, SSD1306_WHITE);
    display.display(); // Update screen with each newly-drawn line
    delay(600);
    display.clearDisplay();

    for (int i = 0; i < strip.getLedCount(); i++)
    {
        strip.setLedColorData(6, 60, 60, 60); // Green color for all LEDs
    }
    strip.show();

    display.drawTriangle(10, 50,         // First point (x1, y1)
                         60, 30,         // Second point (x2, y2)
                         110, 50,        // Third point (x3, y3)
                         SSD1306_WHITE); // White color for the triangle
    display.display();                   // Update the screen
    delay(600);
    display.clearDisplay();

    for (int i = 0; i < strip.getLedCount(); i++)
    {
        strip.setLedColorData(8, 30, 80, 30); // Green color for all LEDs
    }
    strip.show();

    // Draw a filled circle at (x, y) with radius 20
    display.fillCircle(64, 32, 20, SSD1306_WHITE); // x, y, radius, color
    display.display();                             // Update the display
    delay(600);                                    // Delay to show the circle before clearing
    display.clearDisplay();                        // Clear the display

    for (int i = 0; i < strip.getLedCount(); i++)
    {
        strip.setLedColorData(i, 30, 80, 30); // Green color for all LEDs
    }
    strip.show();

    // Loop through WS2812 LEDs and set colors
    for (int j = 0; j < 255; j += 2)
    {
        for (int i = 0; i < strip.getLedCount(); i++)
        {
            strip.setLedColorData(i, strip.Wheel((i * 256 / strip.getLedCount() + j) & 255));
        }
        strip.show();
        delay(10);
        display.clearDisplay();
    }

    // Handle Serial Input
    while (Serial.available())
    {
        Serial_input += char(Serial.read());
    }

    if (Serial_input.length() > 0)
    {
        Serial.println(Serial_input);
        display.clearDisplay();
        display.setTextSize(3);
        display.setTextColor(SSD1306_WHITE); // Draw white text
        display.setCursor(0, 0);             // Start at top-left corner
        display.cp437(true);                 // Use full 256 char 'Code Page 437' font
        display.println(Serial_input);
        display.display();
        Serial_input = "";
        delay(1000);
    }
}