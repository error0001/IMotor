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
    ServoMotor(uint8_t inPinChannel);
    ServoMotor(uint8_t , uint16_t , uint16_t );

    // Start motor in the mode of test 
    void Initialize();
    // This method is for turning the servo mechanism to a certain angle
    void SetAngle(uint16_t);

    ~ServoMotor();
private:

}