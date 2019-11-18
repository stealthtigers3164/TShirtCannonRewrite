#include <iostream>
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/spark.h>
#include "../include/gamepad.h"

class drive{
    public:
    frc::Spark m_frontLeft;
    frc::Spark m_backLeft;
    frc::Spark m_frontRight;
    frc::Spark m_backRight;
};


void Drive(int frontLeft, int backLeft, int frontRight, int backRight){
    Spark* m_frontLeft = new Spark(frontLeft);
    Spark* m_backleft = new Spark(backLeft);
    Spark* m_frontRight = new Spark(frontRight);
    Spark* m_backRight = new Spark(backRight);
};

void update(Gamepad _gamepad){
    
};