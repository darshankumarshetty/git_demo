#ifndef VENDORMID_H
#define VENDORMID_H

#include "INeedVendorData.h"
#include "DisplayHardware/DisplayHardware.h"
#include "AudioHardware/AudioHardware.h"

class VendorMid : public INeedVendorData
{
public:

    VendorMid();
    ~VendorMid();

    bool init();
    bool callDisplay();

private:
    DisplayHardware *m_displayHardware;
    AudioHardware *m_audioHardware;
};

#endif // VENDORMID_H
