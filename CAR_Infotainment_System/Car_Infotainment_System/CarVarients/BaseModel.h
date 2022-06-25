#ifndef BASEMODEL_H
#define BASEMODEL_H
#include "CommonUtils.h"
#include "Car.h"
#include "Vendors/VendorBase.h"
class BaseModel : public Car
{
public:
    BaseModel();
    ~BaseModel();

    static const string &getChassisNo();
    static void setChassisNo(const string &newChassisNo);

    bool receiveData();

private:
    VendorBase *m_baseVendor;
    static string chassisNo;
};

#endif // BASEMODEL_H
