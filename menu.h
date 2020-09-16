#include <Arduino.h>
#include "interpreter.h"
void mainMenu(int,String);
void menu1(int,String);
void menu2(int,String);
extern void (*menu)(int,String);