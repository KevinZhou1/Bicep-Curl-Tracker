#include <SparkFunLSM6DS3.h>
LSM6DS3 myIMU;
void setup() {
  // put your setup code here, to run once:

myIMU.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("hi");
  Serial.println(myIMU.readFloatAccelX(), 4);
}
