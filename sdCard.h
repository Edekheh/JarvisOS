#include <SPI.h>
#include <SD.h>

void initializeSD();
void createNewRoute(String name);
void readRoute(String name,int i);
void saveRoute(String name,int i);