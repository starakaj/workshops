/**
 * Trying to learn how to talk to a servo
 */
 
#include <Servo.h>

Servo servo;
int servoPin = 5;
int angle = 0;
int angleMax = 180;
int inc = 1;

char readBuffer[256];
int readBufferLen = 256;
int bytesRead;
 
void setup() {
  servo.attach(servoPin);
}

void loop() {
  angle += inc;
  if (angle >= angleMax) inc = -1;
  if (angle <= 0) inc = 1;
  servo.write(angle);
  delay(10);
}
