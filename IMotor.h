#pragma once
/*
 * IMotor.h - All motor interface for Wiring/STMElectronics - Version 0.1
 * Thanks next autors Tom Igoe, Sebastian Gassner, David Mellis, Noah Shibley, Eugene Kozlenko, Ryan Orendorff
 * Original libriary Stepper.h using as example Arduino (ver. 1.1.0)
 * 
 * IMotor for STM32
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation;
 * 

*/
class IMotor
{
    IMotor() {} // Empty constructor
    virtual void Init() = 0; // Init all some variables or modules
    virtual void SetSpeed() = 0;
    virtual void Step() = 0;
    virtual ~IMotor() {}
}

class StepMotor : public IMotor
{
public:
    StepMotor(); // Empty constructor
    StepMotor(uint8_t inNumOfSteps, uint8_t motorPin1,  uint8_t motorPin2); // 2 pins connection
    StepMotor(uint8_t inNumOfSteps, uint8_t motorPin1,  uint8_t motorPin2,
                                    uint8_t motorPin3,  uint8_t motorPin4); // 4 pins connection
    StepMotor(uint8_t inNumOfSteps, uint8_t motorPin1,  uint8_t motorPin2, 
                                    uint8_t motorPin3,  uint8_t motorPin4,
                                    uint8_t motorPin5); // 5 pins connection
    ~StepMotor();
private:
    uint8_t numberOfSteps
}