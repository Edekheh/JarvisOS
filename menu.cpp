#include "menu.h"

void mainMenu(int i,String str)
{
    Serial.println("Welcome in JarvisOS ! ");
    Serial.println("Choose program mode : ");
    Serial.println("1. Commands mode");
    Serial.println("2. Joystick mode");
    if (i == 1)
    {
        //Serial.println("dzaaaaaaaaaaaaaaaaaaa");
        menu = menu1;
    }
    else if (i == 2)
    {
        menu = menu2;
        //Serial.println("dzaaaaaaaaaaaaaaaaaaa2");
    }
}
void menu1(int i,String str)   {
    Serial.println(" Commands mode  ");
    Serial.println("input anything");
    Serial.println("");
    if(i==0) menu=mainMenu;
}
void menu2(int i,String str)   {

}

char stringToCharArrayFunction(String str)   {
    //delete 1 sign;
    for(int i=1;i<str.length();i++) {
        str[i-1]=str[i];
    }
    char *input = new char[40];
    str.toCharArray(input,str.length());
    return *input;
}