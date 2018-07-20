#pragma once
#include "IMotor.h"
class StepMotor : public IMotor
{
public:
	void Info();
	/*
    StepMotor(); // Empty constructor
    // 2 pins connection
    StepMotor(uint8_t inNumOfSteps, uint8_t inMotorPin1,  uint8_t inMotorPin2); 
    // 4 pins connection
    StepMotor(uint8_t inNumOfSteps, uint8_t inMotorPin1,  uint8_t inMotorPin2,
                                    uint8_t inMotorPin3,  uint8_t inMotorPin4); 
    // 5 pins connection
    StepMotor(uint8_t inNumOfSteps, uint8_t inMotorPin1,  uint8_t inMotorPin2, 
                                    uint8_t inMotorPin3,  uint8_t inMotorPin4,
                                    uint8_t inMotorPin5); 
    // Speed setter method:
    void SetSpeed(uint16_t inSetSpeed);

    // Mover method:
    void Step(int inNamOfSteps); 

    // Get version driver:
    int version(void);    

    ~StepMotor();
private:
    void StepMotor(int thisStep); // unknow
    uint8_t numberOfSteps;
    // Pins 
  */  
};