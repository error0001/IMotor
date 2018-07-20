#pragma once
#include "FactoryMotors.h"

class FactoryServoMotors : public FactoryMotors
{
public:
	FactoryServoMotors();
	IMotor * CreateMotor();
private:

};