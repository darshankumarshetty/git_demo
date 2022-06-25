#ifndef TOPMODEL_H
#define TOPMODEL_H
#include "CommonUtils.h"
#include "Car.h"
#include "Vendors/VendorTop.h"

class TopModel : public Car
{
public:
    TopModel();
    ~TopModel();

    bool init();

private:
    string chassisNo;
    VendorTop *m_vendorTop;
};

#endif // TOPMODEL_H
