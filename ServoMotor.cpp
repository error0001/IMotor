#include "ServoMotor.h"

ServoMotor::ServoMotor()
{ 

}

ServoMotor::ServoMotor(uint8_t inPinChannel, uint16_t inMinRange, uint16_t inMaxRange) :
inPinChannel = 0, inMinRange = 600, inMaxRange = 2200
{ 
    
}
//////////////////////////////////////////////////////////////////////////////////////////
ServoMotor::SetAngle(uint16_t inValueAngle) : inValueAngle = 0
{
    
}

ServoMotor::SetMicroseconds(uint16_t inValueMicroseconds) inValueMicroseconds = 0
{

}

uint16_t ServoMotor::ReadAngle()
{
    return actualAngle;
}

uint16_t ServoMotor::ReadMicroseconds()
{
    return actualMicroseconds;
}
//////////////////////////////////////////////////////////////////////////////////////////
ServoMotor::~ServoMotor()
{
    
}