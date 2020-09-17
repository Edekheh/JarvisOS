#include "menu.h"



char stringToCharArrayFunction(String str)   {
    //delete 1 sign;
    for(int i=1;i<str.length();i++) {
        str[i-1]=str[i];
    }
    char *input = new char[40];
    str.toCharArray(input,str.length());
    return *input;
}

void mainMenu(int i,String str)
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
          // display.clearDisplay();
        
    }
    else if (i == 2)
    {
        menu = menu2;
         //  display.clearDisplay();
        
        //Serial.println("dzaaaaaaaaaaaaaaaaaaa2");
    }
}
void menu1(int i,String str)   {
    
    Serial.println(" Commands mode  ");
    Serial.println("input anything");
    Serial.println("");
   /* display.clearDisplay();
    display.setCursor(0,0);
    display.print("Welcome in JarvisOs!");
    display.setCursor(0,8);
    display.print("~~~~~~~~~~~~~~~~~~~~");
    display.setCursor(0,8*2);
    display.print("  Commands mode  ");
    display.setCursor(0,8*3);
    display.print("1. Commands mode");
    display.setTextSize(2);
    display.setCursor(0,8*5);
    display.print("INPUT ANYTHING");
    display.display();*/
    
    
    if(i==0) menu=mainMenu;
    interpreter(stringToCharArrayFunction(str));
}
void menu2(int i,String str)   {

}

