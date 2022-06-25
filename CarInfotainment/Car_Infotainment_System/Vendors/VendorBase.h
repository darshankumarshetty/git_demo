#ifndef VENDORBASE_H
#define VENDORBASE_H

#include "INeedVendorData.h"
#include "DisplayHardware/DisplayHardware.h"
#include "AudioHardware/AudioHardware.h"
#include "CarVarients/BaseModel.h"


class VendorBase : public INeedVendorData
{
public:

    VendorBase();
    ~VendorBase();

    bool init();
    bool callDisplay();

private:
    DisplayHardware *m_displayHardware;
    AudioHardware *m_audioHardware;
};

#endif // VENDORBASE_H
