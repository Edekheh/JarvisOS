#include "menu.h"

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define OLED_RESET 4
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
void setUpOledDisplay()
{
    if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
    {
        Serial.println(F("SSD1306 allocation failed"));
    }
    display.display();
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(WHITE);
    Serial.println("OLED INITIALIZED");
    display.setCursor(0, 0);
    display.print("Welcome in JarvisOS!");
    display.setCursor(0, 8);
    display.print("<------------------->");
    display.setCursor(0, 8 * 2);
    display.print("Choose program mode : ");
    display.setCursor(0, 8 * 3);
    display.print("1. Commands mode");
    display.setCursor(0, 8 * 4);
    display.print("2. Joystick mode");
    display.display();
}

void drawMainMenu()
{
    display.setCursor(0, 0);
    display.print("Welcome in JarvisOS!");
    display.setCursor(0, 8);
    display.print("<------------------->");
    display.setCursor(0, 8 * 2);
    display.print("Choose program mode : ");
    display.setCursor(0, 8 * 3);
    display.print("1. Commands mode");
    display.setCursor(0, 8 * 4);
    display.print("2. Joystick mode");
    display.display();
}

void mainMenu(int i, String str)
{
    Serial.println("Welcome in JarvisOS ! ");
    Serial.println("Choose program mode : ");
    Serial.println("1. Commands mode");
    Serial.println("2. Joystick mode");
    /*  */
    drawMainMenu();
    if (i == 1)
    {
        //Serial.println("dzaaaaaaaaaaaaaaaaaaa");
        menu = menu1;
        display.clearDisplay();
    }
    else if (i == 2)
    {
        menu = menu2;
        //  display.clearDisplay();

        //Serial.println("dzaaaaaaaaaaaaaaaaaaa2");
    }
}

void drawMenu1()
{
    display.clearDisplay();
    display.setCursor(0, 0);
    display.print("Welcome in JarvisOs!");
    display.setCursor(0, 8);
    display.print("~~~~~~~~~~~~~~~~~~~~");
    display.setCursor(0, 8 * 2);
    display.print("  Commands mode  ");
    display.setTextSize(1);
    display.setCursor(0, 8 * 4);
    display.print("   INPUT ANYTHING");
    display.display();
}

void menu1(int i, String str)
{

    Serial.println(" Commands mode  ");
    Serial.println("input anything");
    Serial.println("");

    drawMenu1();
    display.setCursor(0, 8 * 7);
    display.setTextSize(1);
    display.print(str);
    display.display();
    if (i == 0)
        menu = mainMenu;

    char *input = new char[60];
    str.toCharArray(input, str.length());
    Serial.println(str);
    if (interpreter(input) == -1)
        Serial.println("Null error or invalid command");
}
void menu2(int i, String str)
{
}
