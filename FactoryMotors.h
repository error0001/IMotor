#pragma once
#include "IMotor.h"
#include "ServoMotor.h"

class FactoryMotors
{
    public:
        virtual IMotor* CreateMotor() = 0;
        virtual ~FactoryMotors() {}        
};