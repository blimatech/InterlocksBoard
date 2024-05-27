#include <Arduino.h>

uint64_t chipId;

// put function declarations here:
int myFunction(int, int);

void setup()
{
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  Serial.begin(115200);
}

void loop()
{
  // put your main code here, to run repeatedly:
  chipId = ESP.getEfuseMac();
  Serial.printf("ESP32 Chip DI = %04X%", (uint16_t)(chipId >> 32));
  Serial.printf("%08X\n", (uint32_t)chipId);
  delay(3000);
}

// put function definitions here:
int myFunction(int x, int y)
{
  return x + y;
}