#pragma once
#include "FactoryMotors.h"
#include "ServoMotor.h"
class FactoryServoMotors : public FactoryMotors
{
public:
	FactoryServoMotors();		//	Clear constructor
	FactoryServoMotors(const FactoryServoMotors&);	//	Constructor of copy 
	//FactoryServoMotors& operator=(const FactoryServoMotors&);  //  Assigment operator
	IMotor* CreateMotor();  //	Create exemplar ServoMotor
	~FactoryServoMotors();	//	Destructor
};