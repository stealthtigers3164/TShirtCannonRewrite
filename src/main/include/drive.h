#pragma once
#include <iostream>
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/Spark.h>
#include <Gamepad.h>

class drive{

    //create private 
    private:
        frc::Spark *m_Left;
        frc::Spark *m_Right;
        frc::Spark *m_elevatorL;
        frc::Spark *m_elevatorR;
        frc::Spark *m_compressor;
        frc::Spark *m_releaser;
        frc::Spark *m_test;
    public:
        drive();
        drive(int left, int right, int elevatorL, int elevatorR, int compressor, int test);
        
        void update(float left, float right, bool LT, bool RT, bool LB, bool RB);
};