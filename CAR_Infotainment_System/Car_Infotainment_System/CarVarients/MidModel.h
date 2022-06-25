#ifndef MIDMODEL_H
#define MIDMODEL_H
#include "CommonUtils.h"
#include "Car.h"

class MidModel : public Car
{
public:
    MidModel();
    ~MidModel();

    static const string &getChassisNo();
    static void setChassisNo(const string &newChassisNo);

private:
    static string chassisNo;
};

#endif // MIDMODEL_H
