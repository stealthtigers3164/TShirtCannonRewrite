#include <iostream>
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/Spark.h>
#include <Gamepad.h>
#include <drive.h>



drive::drive(){
    std::cout << "WARNING! No ports defined for drive class constructor." <<  std::endl;
}

drive::drive(int left, int right, int elevatorL, int elevatorR, int compressor, int test){
    m_Left = new frc::Spark(left);
    m_Right = new frc::Spark(right);
    m_elevatorL = new frc::Spark(elevatorL);
    m_elevatorR = new frc::Spark(elevatorR);
    m_compressor = new frc::Spark(compressor);
    m_test = new frc::Spark(test);
}

void drive::update(float left, float right, bool LT, bool RT, bool LB, bool RB){
    m_Left->Set(left);
    m_Right->Set(right);
    if(LB){
        m_elevatorL->Set(-0.7);
        m_elevatorR->Set(0.7);
    }else if(LT){
        m_elevatorL->Set(0.7);
        m_elevatorR->Set(-0.7);
    }else{
        m_elevatorL->Set(0);
        m_elevatorR->Set(0);
    }
    if(RT){
        m_compressor->Set(1);
    }else{
        m_compressor->Set(0);
    } 
    if(RB){
        m_test->Set(1);
    }else{
        m_test->Set(0);
    }
}