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
    ServoMotor(uint8_t inPinChannel, uint16_t inMinRange, uint16_t inMaxRange);

    // Start motor in the mode of test 
    void Initialize();
    // This method is for turning the servo mechanism to a certain angle
    void WriteAncle(uint16_t inValueAngle);


    ~ServoMotor();
private:

}