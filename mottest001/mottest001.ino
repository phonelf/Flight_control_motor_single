#include <Servo.h>
Servo motor0;


void setup() {
  Serial.begin(9600);
  Serial.println("OG!");
  motor0.attach(9);
  for (int i = 0; i<1502;i++){
    motor0.writeMicroseconds(i);
  }
  for (int i = 0; i<499;i++){
    motor0.writeMicroseconds(1500-i);
  }
  motor0.writeMicroseconds(1000);
  Serial.println("FSED!");
}

void loop() {
  // put your main code here, to run repeatedly:
for (int i = 1000; i<2000;i++){
    motor0.writeMicroseconds(i);
  }
}
