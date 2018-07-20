#include "ServoMotor.h"

ServoMotor::ServoMotor()
{ 

}

ServoMotor::ServoMotor(uint8_t inPinChannel, uint16_t inMinMicroseconds, uint16_t inMaxMicroseconds) :
inPinChannel = 0, inMinMecroseconds = 600, inMaxMicroseconds = 2200
{ 
    // Initialize all periph in here?
    minMicroseconds = inMinMecroseconds; // min ms (proportional) min angle
    maxMicroseconds = inMaxMicroseconds; // max ms (proportional) max angle
}
//////////////////////////////////////////////////////////////////////////////////////////
ServoMotor::SetAngle(uint16_t inValueAngle) : inValueAngle = 0
{
    
}

ServoMotor::SetMicroseconds(uint16_t inValueMicroseconds) : inValueMicroseconds = 0
{
    if(inValueMicroseconds < minMicroseconds)
    {
        
    }
    else
    {
        
    }
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