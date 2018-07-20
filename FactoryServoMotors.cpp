#include "FactoryServoMotors.h"

FactoryServoMotors::FactoryServoMotors()
{
}

IMotor* FactoryServoMotors::CreateMotor()
{
	return new ServoMotor;
}