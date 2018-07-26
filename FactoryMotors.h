#pragma once
#include "IMotor.h"
class FactoryMotors
{
    public:
        virtual IMotor* CreateMotor() = 0;
				virtual ~FactoryMotors() {}
};