#include <Arduino.h>
#include "interpreter.h"
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "sdCard.h"
void setUpOledDisplay(); 
void mainMenu(int,String);
void menu1(int,String);
void menu2(int,String);
void menu3(int,String);
extern void (*menu)(int,String);