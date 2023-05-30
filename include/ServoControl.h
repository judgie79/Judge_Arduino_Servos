#ifndef __ServoControl_H
#define __ServoControl_H

#include "Arduino.h"

#if defined(ESP32)
#include "ESP32Servo.h"
#else
#include <Servo.h>
#endif

class ServoControl
{
private:
    /* data */
#if defined(ESP32)
    
#else
#endif

    Servo servo;
    uint8_t pin;
public:
    ServoControl(/* args */);
    ~ServoControl();

    void Begin(uint8_t pin);
#if defined(ESP32)
    void Begin(uint8_t pin, uint8_t timerChannel);
#else
#endif
    void SetPosition(uint8_t degree);
};

#endif