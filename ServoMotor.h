/*
 * Author:  Andrew Churyumov 
 * Version: 0.1
 * Date:    2018 16 07
 * 
*/
#pragma once
#include "IMotor.h"
class ServoMotor : public IMotor
{
private:
	uint16_t pinPwm;
public:
	ServoMotor() : IMotor() // Clear constructors
	{
	}
	ServoMotor(uint16_t inPinPwm) : IMotor(inPinPwm), pinPwm(inPinPwm)
	{

	}
	void Info()
	{
		std::cout << "Servo motor is created!" << std::endl;
		std::cout << "PinPwm is: " << (int)pinPwm << endl;
	}
	void AttachPinPwm(uint16_t &inPinPwm, uint16_t &inMinMsec, uint16_t &inMaxMsec)
	{
		
	}
};