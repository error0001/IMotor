#pragma once
/*
 * IMotor.h - All motor interface for Wiring/STMElectronics - Version 0.1
 * Thanks next autors: Tom Igoe, Sebastian Gassner, David Mellis, Noah Shibley, Eugene Kozlenko, Ryan Orendorff
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
public:
    IMotor() {} // Empty constructor
    virtual void Initialize();
    virtual void SetAngle();
    virtual void SetMicroseconds() = 0;
    virtual void ReadAngle();
    virtual void ReadMicroseconds();
    // Add a virtual reconstructor !!!
    virtual ~IMotor() {}
}
