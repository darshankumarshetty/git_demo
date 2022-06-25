#ifndef VENDORBASE_H
#define VENDORBASE_H

#include "INeedVendorData.h"

class VendorBase : public INeedVendorData
{
public:
    VendorBase();
    ~VendorBase();

    void registerWithMe(INeedVendorData *ptr);
};

#endif // VENDORBASE_H
