// This sketch reads voltage from each of the sensors and
// writes it to serial. A character is prepended to each to
// differentiate between pins.

#include <stdio.h>

char str[32];
int sensorVal;

//do this once
void setup(){

  //open the serial port at 9600 baud
  Serial.begin(9600);
  
}

//do this over and over again
void loop(){
  for (int i=0; i<6; ++i) {
    sensorVal = analogRead(i);
    snprintf(str, 32, "%d:%d", i, sensorVal);
    Serial.println(str);
  }
}

