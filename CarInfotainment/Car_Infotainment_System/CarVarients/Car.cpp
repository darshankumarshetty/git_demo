#include "Car.h"

Car::Car()
{
    cout<< " Car constructor "<<endl;
    init();
}

Car::~Car()
{
    cout<< " Car destructor "<<endl;

}

const string &Car::getChassisNo() const
{
    return chassisNo;
}

void Car::setChassisNo(const string &newChassisNo)
{
    chassisNo = newChassisNo;
}

bool Car::init()
{
    return true;
}

const string &Car::getCar_Color() const
{
    return Car_Color;
}

void Car::setCar_Color(const string &newCar_Color)
{
    Car_Color = newCar_Color;
}

int Car::getCarNo() const
{
    return CarNo;
}

void Car::setCarNo(int newCarNo)
{
    CarNo = newCarNo;
}


