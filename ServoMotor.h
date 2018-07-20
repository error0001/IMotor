/*
 * Author:  Andrew Churyumov 
 * Version: 0.1
 * Date:    2018 16 07
 * 
*/

#pragma once
#include "IMotor.h"
#include <stdint.h>
class ServoMotor : public IMotor
{
public:
	ServoMotor();
	void Info();
	/*
    ServoMotor();
    ServoMotor(const uint8_t&, const uint16_t&, const uint16_t&);
    //  Start motor in the mode of test 
    void Initialize();
    //  This method is for turning the servo mechanism to a certain angle
    void SetAngle(const uint16_t&);
    //  This method is for turning the servo mechanism to a certain pulse width Microsends
    void SetMicroseconds(uint16_t); 
    //  This method is for get angle
    uint16_t GetAngle();
    //  This method is for get pulse width microseconds
    uint16_t GetMicroseconds();
		uint16_t ReadAngle();
    ~ServoMotor();
private:
    uint8_t pinChanel;          //  PWM pin
    uint16_t minMicroseconds;   //  Minimal value of pulse width microseconds
    uint16_t maxMicroseconds;   //  Maximal value of pulse width microseconds
		uint16_t valueAngle;				//	Setting value angle
		uint16_t valueMicroseconds;	//	
		uint16_t actualAngle;				//	Angle at driver
		*/
};