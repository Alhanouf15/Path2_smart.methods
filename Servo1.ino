#include <Servo.h>

Servo motor;

void setup() {
  
motor.attach(1);

}

void loop() {
 


motor.write(0);



delay(1000);
motor.write(180);
delay(1000);


}
