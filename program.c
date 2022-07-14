#include<Servo.h>
Servo servo1;
Servo servo2;
int irsensor = 7;
int servoPin1 = 11;
int servoPin2 = 10;
void setup() {
pinMode (irsensor, INPUT);
servo1.attach(servoPin1);
servo2.attach(servoPin2);
}
void loop()
{
int status = digitalRead(irsensor);
if (status == 1)
{
servo1.write(100);
servo2.write(100);
} 
else
{
servo1.write(0);
servo2.write(0);
}