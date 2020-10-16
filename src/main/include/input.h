#pragma once
#include <Gamepad.h>
#include <drive.h>

class input{

    public:

        input();
        void update();

    private:

        Gamepad *controller;
        drive *drivechain;

};