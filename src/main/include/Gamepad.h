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

        enum struct Button{
            A=1, X=3, LB=5, LT=7, BACK=9,   LSTICK=11,
            B=2, Y=4, RB=6, RT=8, START=10, RSTICK=12
        };

        JoystickButton* b_A;

        Joystick *_stick

        Gamepad(int port){

            //initialize joystick
            _stick = new Joystick(port);

            //initialize joystick buttons
            b_A = new JoystickButton(_stick, 1);
            b_B = new JoystickButton(_stick, 2);
            b_X = new JoystickButton(_stick, 3);
            b_Y = new JoystickButton(_stick, 4);
            b_LB = new JoystickButton(_stick, 5);
            b_RB = new JoystickButton(_stick, 6);
            b_LT = new JoystickButton(_stick, 7);
            b_RT = new JoystickButton(_stick, 8);
            b_BACK = new JoystickButton(_stick, 9);
            b_START = new JoystickButton(_stick, 10);
            b_LSTICK = new JoystickButton(_stick, 11);
            b_RSTICK = new JoystickButton(_stick, 12);
        }

        //return true if the specified button is down
        bool getButtonDown(Button button){
            return button.Get()
        }
    
    private:
        
        //joystickbutton variables
        JoystickButton* b_A;
        JoystickButton* b_B;
        JoystickButton* b_X;
        JoystickButton* b_Y;
        JoystickButton* b_LB;
        JoystickButton* b_RB;
        JoystickButton* b_LT;
        JoystickButton* b_RT;
        JoystickButton* b_BACK;
        JoystickButton* b_START;
        JoystickButton* b_LSTICK;
        JoystickButton* b_RSTICK;

}