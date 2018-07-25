#include "FactoryServoMotors.h"

FactoryServoMotors::FactoryServoMotors()
{
}

FactoryServoMotors::FactoryServoMotors(const FactoryServoMotors& copyFactory)
{
}

IMotor* FactoryServoMotors::CreateMotor()
{
	return new ServoMotor;
}

FactoryServoMotors::~FactoryServoMotors()
{
}