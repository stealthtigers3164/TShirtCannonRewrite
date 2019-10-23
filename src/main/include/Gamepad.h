/* ------------------------------------------------------------------------ */
/* Gamepad wrapper for the frc Joystick class.                              */
/* WPILIB documentation found at:                                           */
/* https://wpilib.screenstepslive.com/s/currentCS/m/java/l/599723-joysticks */
/* ------------------------------------------------------------------------ */

#pragma once

#include <Joystick.h>
#include <JoystickButton.h>
#include <JoystickBase.h>

using namespace frc;

class Gamepad : public Joystick, public JoystickButton, public  JoystickBase{
    
    public:

        Gamepad(int port){
            _gamepad->Joystick(std::static_cast<uint32_t>(port));
        }

        //button numbers subject to change
        //testing to be done in the future
        bool ButtonA(){
            return _gamepad.GetRawButton(1);
        }
        bool ButtonB(){
            return _gamepad.GetRawButton(2);
        }
        bool ButtonX(){
            return _gamepad.GetRawButton(3);
        }
        bool ButtonY(){
            return _gamepad.GetRawButton(4);
        }
        bool LeftBumper(){
            return _gamepad.GetRawButton(5);
        }
        bool RightBumper(){
            return _gamepad.GetRawButton(6);
        }
        bool ButtonLeftJoy(){
            return _gamepad.GetRawButton(7);
        }
        bool ButtonRightJoy(){
            return _gamepad.GetRawButton(8);
        }
        bool ButtonStart(){
            return _gamepad.GetRawButton(9);
        }
        bool ButtonBack(){
            return _gamepad.GetRawButton(10);
        }

        const float* LeftJoystick(){
            float xAxis = _gamepad.GetX(0);
            float yAxis = _gamepad.GetY(0);
            return &{xAxis, yAxis};
        }

        const int* RightJoystick(){
            float xAxis = _gamepad.GetX(1);
            float yAxis = _gamepad.GetY(1);
            return &{xAxis, yAxis};
        }

        //dpad logic
        direction DPad(){
            
        }
        
        //special logic for dpad
        //return vector for joystick (std::vector)

    
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
            
        /* //buttons
        //main buttons
        bool B_A;
        bool B_B;
        bool B_X;
        bool B_Y;
        //bumpers
        bool B_LB;
        bool B_RB;
        //joystick buttons
        bool B_LSTICK;
        bool B_RSTICK;
        //extra buttons
        bool B_START;
        bool B_BACK;

        //directional pad
        dpad_State DPAD;

        //joysticks
        std::vector J_RIGHT;
        std::vector J_LEFT; */

}