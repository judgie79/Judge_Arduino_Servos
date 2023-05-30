#include "ServoControl.h"

ServoControl::ServoControl(/* args */)
: servo()
{
}

#if defined(ESP32)
void ServoControl::Begin(uint8_t pin, uint8_t timerChannel)
{
	ESP32PWM::allocateTimer(timerChannel);

    Begin(pin);
}
#endif

void ServoControl::Begin(uint8_t pin)
{
    this->pin = pin;

#if defined(ESP32)
    servo.setPeriodHertz(50);    // standard 50 hz servo
	servo.attach(pin, 500, 2400); // attaches the servo on pin to the servo object
#else
    servo.attach(pin);
#endif
    
}

void ServoControl::SetPosition(uint8_t degree)
{
   servo.write(degree);
}

ServoControl::~ServoControl()
{
    servo.detach();
}
