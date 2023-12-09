#include <Wire.h>

char myData[] = "Hello Todaygfhfgh"; //test data
 
void setup()
{
  Serial.begin(115200);
  Wire.begin(8);
  Wire.onRequest(sendEvent);
}

void loop()
{
 
}

void sendEvent()
{
  Wire.write(myData, sizeof myData);
}
