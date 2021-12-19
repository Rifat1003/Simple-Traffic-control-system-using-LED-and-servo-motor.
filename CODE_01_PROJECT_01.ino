
#include <Servo.h>

int i = 0;

Servo servo_10;

void setup()
{
pinMode(11, OUTPUT);
servo_10.attach(10, 500, 2500);

Serial.begin(9600);

pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
}

void loop()
{
digitalWrite(11, HIGH);
servo_10.write(180);
Serial.println("g");
delay(5000); // Wait for 5000 millisecond(s)
digitalWrite(11, LOW);
digitalWrite(12, HIGH);
servo_10.write(0);
Serial.println("y");
delay(5000); // Wait for 5000 millisecond(s)
digitalWrite(11, LOW);
digitalWrite(12, LOW);
digitalWrite(13, HIGH);
servo_10.write(0);
Serial.println("r");
delay(5000); // Wait for 5000 millisecond(s)
digitalWrite(13, LOW);
delay(5000); // Wait for 5000 millisecond(s)
}
