#include "FactoryServoMotors.h"

IMotor FactoryServoMotors::*CreateMotor()
{
	return new ServoMotor;
}