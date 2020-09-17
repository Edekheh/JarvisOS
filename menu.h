#include <Arduino.h>
#include "interpreter.h"
#include "oledDisplay.h"
void mainMenu(int,String);
void menu1(int,String);
void menu2(int,String);
extern void (*menu)(int,String);
void setUpOledDisplay();