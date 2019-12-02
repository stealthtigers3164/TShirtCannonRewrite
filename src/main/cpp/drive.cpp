#include <iostream>
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/spark.h>
#include <Gamepad.h>
#include <drive.h>



drive::drive(){
    std::cout << "WARNING! No ports defined for drive class constructor." <<  std::endl;
}

drive::drive(int frontLeft, int backLeft, int frontRight, int backRight){
    m_frontLeft = new Spark(frontLeft);
    m_frontRight = new Spark(frontRight);
    m_backLeft = new Spark(backLeft);
    m_backRight = new Spark(backRight);
}

int drive::update(double fl_power, double fr_power, double bl_power, double br_power){
    m_frontLeft->Set(fl_power);
    m_frontRight->Set(fr_power);
    m_backLeft->Set(bl_power);
    m_backRight->Set(br_power);
}