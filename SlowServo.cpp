#include "Arduino.h"
#include "Servo.h"
#include "SlowServo.h"



SlowServo::SlowServo(int pin,int angle){
	myservo_pin = pin;
	myservo_angle = angle;
	myservo_angle.attach(myservo_pin);


}

void SlowServo::Slow(int angle){
	int i;
	for(i=0;i<angle;i--){
		myservo_angle.write(i);
	}
	myservo_angle.detach(myservo_pin);

}