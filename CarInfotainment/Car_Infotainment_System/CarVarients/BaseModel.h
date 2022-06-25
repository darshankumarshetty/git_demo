#ifndef BASEMODEL_H
#define BASEMODEL_H
#include "CommonUtils.h"
#include "Car.h"
class VendorBase;
class BaseModel : public Car
{
public:
    BaseModel();
    ~BaseModel();

    bool init();

private:
    string chassisNo;
    VendorBase *m_vendorBase;
};

#endif // BASEMODEL_H
