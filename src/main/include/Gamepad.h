/* ------------------------------------------------------------------------ */
/* Gamepad wrapper for the frc Joystick class.                              */
/* WPILIB documentation found at:                                           */
/* https://wpilib.screenstepslive.com/s/currentCS/m/java/l/599723-joysticks */
/* ------------------------------------------------------------------------ */

#pragma once

#include <Joystick.h>
#include <JoystickButton.h>
#include <JoystickBase.h>
#include <iostream>

using namespace frc;

class Gamepad{
    
    public:

        Gamepad(){
            //create error
            //todo
        }

        Gamepad(int port){
            Joystick* _gamepad =  new Joystick(port);
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
        bool ButtonLeftJoy(){
            return _gamepad->GetRawButton(7);
        }
        bool ButtonRightJoy(){
            return _gamepad->GetRawButton(8);
        }
        bool ButtonStart(){
            return _gamepad->GetRawButton(9);
        }
        bool ButtonBack(){
            return _gamepad->GetRawButton(10);
        }

        const float* LeftJoystick(){
            float xAxis = _gamepad->GetX(frc::GenericHID::JoystickHand::kLeftHand);
            float yAxis = _gamepad->GetY(frc::GenericHID::JoystickHand::kLeftHand);
            float vector[2] = {xAxis, yAxis};
            return vector;
        }

        const float* RightJoystick(){
            float xAxis = _gamepad->GetX(frc::GenericHID::JoystickHand::kRightHand);
            float yAxis = _gamepad->GetY(frc::GenericHID::JoystickHand::kRightHand);
            float vector[2] = {xAxis, yAxis};
            return vector;
        }

        //dpad logic
        int* DPad(){
            //logic
            int vector[2]; // = get dpad axis TODO
            return vector;
        }
    
    private:

        Joystick* _gamepad;

        enum direction{
            UP,
            DOWN,
            LEFT,
            RIGHT,
            UP_LEFT,
            UP_RIGHT,
            DOWN_LEFT,
            DOWN_RIGHT
        };

};