#ifndef CAR_H
#define CAR_H
#include "CommonUtils.h"
class Car
{
public:
    Car();
    virtual ~Car();

    virtual const string &getChassisNo() const;
    virtual void setChassisNo(const string &newChassisNo);

    bool init();

    const string &getCar_Color() const;
    void setCar_Color(const string &newCar_Color);

    int getCarNo() const;
    void setCarNo(int newCarNo);

private:
    string chassisNo;
    string Car_Color;
    int CarNo;
};

#endif // CAR_H
