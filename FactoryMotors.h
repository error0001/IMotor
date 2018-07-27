#pragma once
#include "IMotor.h"
class FactoryMotors
{
    public:
      virtual IMotor* CreateMotor(uint16_t) = 0;
			virtual ~FactoryMotors() {}
};