#include<Servo.h>

Servo servo_pan, servo_tilt;

void setup() 
{
  Serial.begin(57600);
  servo_pan.attach(6);
  servo_pan.write(0);
  servo_tilt.attach(3); 
  servo_tilt.write(0);
  
  Serial.setTimeout(350);
  delay(3000); 
}
int p,t;
void loop() 
{
  while(!Serial.available()){}
  while(Serial.available()){
    p = Serial.parseInt();
    t = Serial.parseInt();
  }
  
  servo_pan.write(p);
  servo_tilt.write(t);
}
