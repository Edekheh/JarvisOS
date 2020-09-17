#include "oledDisplay.h"
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define OLED_RESET 4
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
void setUpOledDisplay() {
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(WHITE);
}

void drawMainMenu() {
    display.setCursor(0,0);
    display.print("Welcome in JarvisOs!");
    display.setCursor(0,8);
    display.print("~~~~~~~~~~~~~~~~~~~~");
    display.setCursor(0,8*2);
    display.print("Choose program mode : ");
    display.setCursor(0,8*3);
    display.print("1. Commands mode");
    display.setCursor(0,8*4);
    display.print("2. Joystick mode");
    display.display();
}