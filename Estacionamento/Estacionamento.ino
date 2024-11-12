// C++ code
//
#include <Servo.h>

Servo servo_A1;

void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  servo_A1.attach(A1, 500, 2500);
  pinMode(7, INPUT);
  pinMode(A0, OUTPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);

  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  servo_A1.write(90);
}

void loop()
{
  if (digitalRead(7) == 0) {
    digitalWrite(A0, HIGH);
  } else {
    digitalWrite(A0, LOW);
  }
  if (digitalRead(8) == 0) {
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(12, LOW);
  }
  if (digitalRead(9) == 0) {
    digitalWrite(11, HIGH);
  } else {
    digitalWrite(11, LOW);
  }
  if (digitalRead(10) == 0) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }

  if ((digitalRead(7) == 1 && digitalRead(8) == 1) && (digitalRead(9) == 1 && digitalRead(10) == 1)) {
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    servo_A1.write(90);
  } else {
  }
  if ((digitalRead(7) == 1 && digitalRead(8) == 1) && (digitalRead(9) == 1 && digitalRead(10) == 0)) {
    digitalWrite(0, LOW);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    servo_A1.write(90);
  } else {
  }
  if ((digitalRead(7) == 1 && digitalRead(8) == 1) && (digitalRead(9) == 0 && digitalRead(10) == 1)) {
    digitalWrite(0, LOW);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    servo_A1.write(90);
  } else {
  }
  if ((digitalRead(7) == 1 && digitalRead(8) == 1) && (digitalRead(9) == 0 && digitalRead(10) == 0)) {
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    servo_A1.write(90);
  } else {
  }
  if ((digitalRead(7) == 1 && digitalRead(8) == 0) && (digitalRead(9) == 1 && digitalRead(10) == 1)) {
    digitalWrite(0, LOW);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    servo_A1.write(90);
  } else {
  }
  if ((digitalRead(7) == 1 && digitalRead(8) == 0) && (digitalRead(9) == 1 && digitalRead(10) == 0)) {
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    servo_A1.write(90);
  } else {
  }
  if ((digitalRead(7) == 1 && digitalRead(8) == 0) && (digitalRead(9) == 0 && digitalRead(10) == 1)) {
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    servo_A1.write(90);
  } else {
  }
  if ((digitalRead(7) == 1 && digitalRead(8) == 0) && (digitalRead(9) == 0 && digitalRead(10) == 0)) {
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    servo_A1.write(90);
  } else {
  }
  if ((digitalRead(7) == 0 && digitalRead(8) == 1) && (digitalRead(9) == 1 && digitalRead(10) == 1)) {
    digitalWrite(0, LOW);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    servo_A1.write(90);
  } else {
  }
  if ((digitalRead(7) == 0 && digitalRead(8) == 1) && (digitalRead(9) == 1 && digitalRead(10) == 0)) {
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    servo_A1.write(90);
  } else {
  }
  if ((digitalRead(7) == 0 && digitalRead(8) == 1) && (digitalRead(9) == 0 && digitalRead(10) == 1)) {
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    servo_A1.write(90);
  } else {
  }
  if ((digitalRead(7) == 0 && digitalRead(8) == 1) && (digitalRead(9) == 0 && digitalRead(10) == 0)) {
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    servo_A1.write(90);
  } else {
  }
  if ((digitalRead(7) == 0 && digitalRead(8) == 0) && (digitalRead(9) == 1 && digitalRead(10) == 1)) {
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    servo_A1.write(90);
  } else {
  }
  if ((digitalRead(7) == 0 && digitalRead(8) == 0) && (digitalRead(9) == 1 && digitalRead(10) == 0)) {
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    servo_A1.write(90);
  } else {
  }
  if ((digitalRead(7) == 0 && digitalRead(8) == 0) && (digitalRead(9) == 0 && digitalRead(10) == 1)) {
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    servo_A1.write(90);
  } else {
  }
  if ((digitalRead(7) == 0 && digitalRead(8) == 0) && (digitalRead(9) == 0 && digitalRead(10) == 0)) {
    digitalWrite(0, LOW);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    servo_A1.write(0);
  } else {
  }
  delay(10); // Delay a little bit to improve simulation performance
}