/* ------------------------------------------------------------------------ */
/* Gamepad wrapper for the frc Joystick class.                              */
/* WPILIB documentation found at:                                           */
/* https://wpilib.screenstepslive.com/s/currentCS/m/java/l/599723-joysticks */
/* ------------------------------------------------------------------------ */

#pragma once

#include <frc/Joystick.h>
#include <iostream>
#include <math.h>

using namespace frc;

class Gamepad{
    
    public:

        Gamepad(){
        }

        Gamepad(int port){
            _gamepad =  new Joystick(port);
        }

        //button numbers subject to change
        //testing to be done in the future
        bool ButtonA(){
            return _gamepad->GetRawButton(1);
        }
        bool ButtonB(){
            return _gamepad->GetRawButton(2);
        }
        bool ButtonX(){
            return _gamepad->GetRawButton(3);
        }
        bool ButtonY(){
            return _gamepad->GetRawButton(4);
        }
        bool LeftBumper(){
            return _gamepad->GetRawButton(5);
        }
        bool RightBumper(){
            return _gamepad->GetRawButton(6);
        }
        bool ButtonBack(){
            return _gamepad->GetRawButton(7);
        }
        bool ButtonStart(){
            return _gamepad->GetRawButton(8);
        }
        bool ButtonLeftJoy(){
            return _gamepad->GetRawButton(9);
        }
        bool ButtonRightJoy(){
            return _gamepad->GetRawButton(10);
        }
        
        //returns true if trigger is pressed past the deadzone
        //default deadzone is 0.25
        bool LeftTriggerPressed(float deadzone = 0.25f){
            if (_gamepad->GetRawAxis(2) > deadzone){
                return true;
            } else {
                return false;
            }
        }
        bool RightTriggerPressed(float deadzone = 0.25f){
            if (_gamepad->GetRawAxis(3) > deadzone){
                return true;
            } else {
                return false;
            }
        }

        //returns the value of the trigger if pressed beyond deadzone
        //default deadzone is 0.1
        float LeftTriggerValue(float deadzone = 0.1f){
            if (_gamepad->GetRawAxis(2) > deadzone){
                return _gamepad->GetRawAxis(2);
            } else {
                return 0.0f;
            }
        }
        float RightTriggerValue(float deadzone = 0.1f){
            if (_gamepad->GetRawAxis(3) > deadzone){
                return _gamepad->GetRawAxis(3);
            } else {
                return 0.0f;
            }
        }

        //returns a float vector (x, y) for the left joystick
        float* LeftJoystick(){
            LJoyAxes[0] = _gamepad->GetRawAxis(0);
            LJoyAxes[1] = _gamepad->GetRawAxis(1);
            //static float axes[2] = {xAxis, yAxis};
            return LJoyAxes;
        }

        //returns a float vector (x, y) for the right joystick
        float* RightJoystick(){
            RJoyAxes[0] = _gamepad->GetRawAxis(4);
            RJoyAxes[1] = _gamepad->GetRawAxis(5);
            //static float axes[2] = {xAxis, yAxis};
            return RJoyAxes;
        }

        //dpad logic
        //returns a float vector (x, y) for the dpad state
        int* DPad(){
            float degrees = _gamepad->GetPOV();
            //returns the value of the dpad direction
            //rounded to the nearest integer value (-1, 0, 1)
            DPadAxes[0] = static_cast<int>(round(cos(degrees * PI/180)));
            DPadAxes[1] = static_cast<int>(round(sin(degrees * PI/180)));
            //axes[1] = {vecx, vecy};
            return DPadAxes;
        }
    
    private:

        const double PI = 3.14159265;
        Joystick* _gamepad;
        float LJoyAxes[2] = {0.0f, 0.0f};
        float RJoyAxes[2] = {0.0f, 0.0f};
        int DPadAxes[2] = {0, 0};

};