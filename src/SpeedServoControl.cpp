#include "SpeedServoControl.h"

SpeedServoControl::SpeedServoControl()
    : ServoControl()
{

}

SpeedServoControl::~SpeedServoControl()
{
}

void SpeedServoControl::SetSpeed(uint16_t speed)
{
    uint16_t degree = map(speed, 0, 255, 0, 90);
    SetPosition(degree);
}

void SpeedServoControl::Stop()
{
    SetPosition(0);
}