#include <SPI.h>
#include <SD.h>

void initializeSD();
void createNewRoute(String name);
void readRoute(String name,int i);
void saveRoute(String name,int i);
String getFolderName(int i);
String getFileName(int i);
int getFolderNumber();
int getFileNumber(int i);