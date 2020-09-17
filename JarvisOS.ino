#include "menu.h"
#include <Arduino.h>

void (*menu)(int,String);//menu variable

String str="";//serial input variable

void setup() {
  // put your setup code here, to run once:
  menu=mainMenu;//initialize menu pointer on main menu
  Serial.begin(115200);//initialize serial communication with 115200 bps
  setUpOledDisplay();
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()>0) {
    str=Serial.readString();
    Serial.println("reading...");
  }
  if(str[0]-48>-1 && str[0]-48<10)  {
    Serial.println("beka");
    menu(str[0]-48,str);
    str[0]="";
  //  Serial.println("working");
  //}
  //else if(str[0]!="") {
   // menu(9,str);
  }
  //else  {
  //  Serial.println(str);
  //  str="";
  //}
}
