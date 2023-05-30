#ifndef __SpeedServoControl_H
#define __SpeedServoControl_H

#include "Arduino.h"
#include "ServoControl.h"

class SpeedServoControl : public ServoControl
{
private:
    /* data */
#if defined(ESP32)
    
#else
#endif

public:
    SpeedServoControl(/* args */);
    ~SpeedServoControl();

    void SetSpeed(uint16_t speed);
    void Stop();
};

#endif