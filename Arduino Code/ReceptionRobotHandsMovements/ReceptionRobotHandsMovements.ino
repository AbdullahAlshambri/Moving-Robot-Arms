
#include <Servo.h>
// defining parts
int val1 = 0;
int counter;
Servo Shoulder1;

Servo forearm1;

Servo Arm1;

Servo Arm2;

Servo forearm2;

Servo Shoulder2;

void setup()
{
  Shoulder1.attach(9, 500, 2500);

  forearm1.attach(10, 500, 2500);

  Arm1.attach(11, 500, 2500);

  Arm2.attach(3, 500, 2500);

  forearm2.attach(5, 500, 2500);

  Shoulder2.attach(6, 500, 2500);

}

void loop()
{
delay(80);
// initial position
   Shoulder1.write(90);
   Shoulder2.write(90);
    forearm1.write(45);
    forearm2.write(45);
    Arm1.write(45);
    Arm2.write(45);
    delay(1500);
// First Move (Come here)
   for (counter = 0; counter < 3; ++counter) {
    Shoulder1.write(90);
    Shoulder2.write(90);
    forearm1.write(45);
    forearm2.write(45);
    Arm1.write(45);
    Arm2.write(45);
    delay(1500);
   Shoulder1.write(90);
   Shoulder2.write(90);
    forearm1.write(45);
    forearm2.write(45);
    Arm1.write(90);
    Arm2.write(90);
    delay(1500);
   }
// Second Move (Hands Down)
for (counter = 0; counter < 3; ++counter) {
   Shoulder1.write(180);
   Shoulder2.write(180);
    forearm1.write(0);
    forearm2.write(0);
    Arm1.write(0);
    Arm2.write(0);
    delay(1500);

   Shoulder1.write(180);
   Shoulder2.write(180);
    forearm1.write(0);
    forearm2.write(0);
    Arm1.write(90);
    Arm2.write(0);
    delay(1500);
}
// Third Move (one hand up to say goodbye)
for (counter = 0; counter < 3; ++counter) {
   Shoulder1.write(180);
   Shoulder2.write(90);
    forearm1.write(0);
    forearm2.write(0);
    Arm1.write(0);
    Arm2.write(0);
    delay(1500);

   Shoulder1.write(180);
   Shoulder2.write(90);
    forearm1.write(0);
    forearm2.write(0);
    Arm1.write(90);
    Arm2.write(0);
    delay(1500);
}
}
