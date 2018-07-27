#include "FactoryServoMotors.h"

FactoryServoMotors::FactoryServoMotors()
{
}

FactoryServoMotors::FactoryServoMotors(const FactoryServoMotors& copyFactory)
{
}

IMotor* FactoryServoMotors::CreateMotor(uint16_t inPinPwm)
{
	return new ServoMotor(inPinPwm);
}

FactoryServoMotors::~FactoryServoMotors()
{
}