#pragma once
#include "FactoryMotors.h"

class FactoryServoMotors : public FactoryMotors
{
public:
	IMotor * CreateMotor();
private:

};