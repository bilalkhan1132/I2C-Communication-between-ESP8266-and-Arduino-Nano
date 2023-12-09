#include <Wire.h>

void setup() 
{
  Wire.begin(D4, D3);   // SDA = D4 (GPIO/DPin-2), SCL = D3 (GPIO-0)
  Serial.begin(115200);
  Serial.print("  ");
}

void loop() 
{
  byte n = Wire.requestFrom(8, 11); //request 11 bytes byte y = Wire.read();
  for(int i = 0; i < n; i++)
  {
    char y = Wire.read();
    Serial.print(y);
  }
  Serial.println();
  delay(1000);
}
