#include <input.h>
#include <drive.h>
#include <Gamepad.h>
input::input(){
    controller = new Gamepad(0);
    drivechain = new drive(1,2,3,4,5,0);
}
void input::update(){
    float* LeftStick = controller->LeftJoystick();
    float* RightStick = controller->RightJoystick();
    bool LT_button = controller->LeftTriggerPressed();
    bool RT_button = controller->RightTriggerPressed();
    bool RB_button = controller->RightBumper();
    bool LB_button = controller->LeftBumper();
    float left = LeftStick[1];
    float right = RightStick[1];
    right *= -1.0f;
    drivechain->update(left, right, LT_button, RT_button, LB_button, RB_button);
}