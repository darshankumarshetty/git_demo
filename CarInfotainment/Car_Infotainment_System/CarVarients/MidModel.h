#ifndef MIDMODEL_H
#define MIDMODEL_H
#include "CommonUtils.h"
#include "Car.h"
#include "Vendors/VendorMid.h"

class MidModel : public Car
{
public:
    MidModel();
    ~MidModel();

    bool init();

private:
    string chassisNo;
    VendorMid *m_vendorMid;
};

#endif // MIDMODEL_H
