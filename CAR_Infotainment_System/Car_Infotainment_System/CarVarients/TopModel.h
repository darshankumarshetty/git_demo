#ifndef TOPMODEL_H
#define TOPMODEL_H
#include "CommonUtils.h"
#include "Car.h"

class TopModel : public Car
{
public:
    TopModel();
    ~TopModel();
    static const string &getChassisNo();
    static void setChassisNo(const string &newChassisNo);

private:
    static string chassisNo;

};

#endif // TOPMODEL_H
