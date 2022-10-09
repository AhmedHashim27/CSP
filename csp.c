#include <Servo.h>
int ldr = A0;
int value = 0;
int ldr1 = A1;
int value1 = 0;
int val = 0;


Servo myservo;
Servo myservo1;
Servo wheel;

int pos = 0;
int pos1 = 0;

void setup() {
  myservo.attach(9);
  myservo1.attach(10);
  wheel.attach(11);
}

void setup() {
    Serial.begin(9600);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
}

void loop() {
    value=analogRead(ldr);
    value1=analogRead(ldr1);
    val = value - value1
    if(abs(val) > 2) {
        for (p = 0; p <= 180; p += 30) {
            Serial.println(val);
            pos1 += val;
            myservo.write(pos1);
            myservo1.write(pos1);
            delay(2);
            wheel.write(p);
            delay(2);
            myservo.write(pos);
            myservo1.write(pos);
            pos = pos1;
            delay(2);
        }
    }
}