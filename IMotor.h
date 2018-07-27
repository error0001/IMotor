/*
 * IMotor.h - All motor interface for Wiring/STMElectronics - Version 0.1
 * 
*/
#pragma once
#include <iostream>
using namespace std;
class IMotor
{
protected:
	uint16_t pinPwm;
public:
	IMotor() : pinPwm(0) // Clear constructor
	{
	}
	IMotor(uint16_t inPinPwm) : pinPwm(inPinPwm)	// Initialize constructor
	{
	}
	virtual void Info() = 0;
	//virtual void AttachPinPwm();
	virtual void AttachPinPwm(uint16_t&, uint16_t&, uint16_t&) = 0;	// The method is for set PinPwm and Min/Max ms Pwm for micro on the servo
	//virtual void WriteAngle() = 0;
	//virtual void WriteMicroseconds() = 0;
	//virtual void ReadAngle() = 0;
	//virtual void ReadMicroseconds() = 0;
  // Add a virtual reconstructor !!!
	virtual ~IMotor() {}
	// Параметризированный фабричный метод
	// virtual IMotor* CreateMotor();
	/*
   IMotor() {} // Empty constructor
   virtual void Initialize();
   virtual void SetAngle();
   virtual void SetMicroseconds() = 0;
   virtual void ReadAngle();
   virtual void ReadMicroseconds();
	*/
};
