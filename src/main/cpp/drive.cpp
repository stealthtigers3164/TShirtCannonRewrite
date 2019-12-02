#include <iostream>
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/spark.h>
#include <Gamepad.h>

class drive{

    //create private motor variables
    private:
    frc::Spark *m_frontLeft;
    frc::Spark *m_backLeft;
    frc::Spark *m_frontRight;
    frc::Spark *m_backRight;

    public:

    //create public header
    drive(){
        std::cout << "WARNING! No ports defined for drive class constructor." <<  std::endl;
    }

    drive(int frontLeft, int backLeft, int frontRight, int backRight){
        m_frontLeft = new Spark(frontLeft);
        m_frontRight = new Spark(frontRight);
        m_backLeft = new Spark(backLeft);
        m_backRight = new Spark(backRight);
    }
};

//deprecated... for now
/* void Drive(int frontLeft, int backLeft, int frontRight, int backRight){
    Spark* m_frontLeft = new Spark(frontLeft);
    Spark* m_backleft = new Spark(backLeft);
    Spark* m_frontRight = new Spark(frontRight);
    Spark* m_backRight = new Spark(backRight);
};

void update(Gamepad _gamepad){
    
}; */