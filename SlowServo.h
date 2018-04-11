#ifndef SlowServo_h
#define SlowServo_h

class SlowServo{
	public:
	SlowServo(int pin,int angle);
	void Slow(int angle);

	private:
	int myservo_pin,myservo_ang;

};

#endif