/*
 * Author:  Andrew Churyumov 
 * Version: 0.1
 * Date:    2018 16 07
 * 
*/

#pragma once
#include "IMotor.h"

class ServoMotor : public IMotor
{
public:
    ServoMotor();
    ServoMotor(uint8_t, uint16_t, uint16_t);
    //  Start motor in the mode of test 
    void Initialize();
    //  This method is for turning the servo mechanism to a certain angle
    void SetAngle(uint16_t);
    //  This method is for turning the servo mechanism to a certain pulse width Microsends
    void SetMicroseconds(uint16_t); 
    //  This method is for get angle
    uint16_t GetAngle();
    //  This method is for get pulse width microseconds
    uint16_t GetMicroseconds();
    ~ServoMotor();
private:
    uint8_t pinChanel;          //  PWM pin
    uint16_t minMicroseconds;   //  Minimal value of pulse width microseconds
    uint16_t maxMicroseconds;   //  Maximal value of pulse width microseconds
}