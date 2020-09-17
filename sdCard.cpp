#include "sdCard.h"

File myFile;

void initializeSD() {
    Serial.print("Initializing SD card...");
    if (!SD.begin(10)) {
    Serial.println("initialization failed!");
    //while (1);
    }
    Serial.println("initialization done.");

}

void createNewRoute(String name)  {
    //myFile = SD.open(String,FILE_WRITE);
}

void readRoute(String name,int i)   {

}
void saveRoute(String name,int i)   {

}