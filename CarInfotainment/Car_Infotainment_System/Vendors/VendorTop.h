#ifndef VENDORTOP_H
#define VENDORTOP_H
#include "DisplayHardware/DisplayHardware.h"
#include "AudioHardware/AudioHardware.h"
#include "INeedVendorData.h"

class VendorTop : public INeedVendorData
{
public:

    VendorTop();
    ~VendorTop();

    bool init();
    bool callDisplay();

private:
    DisplayHardware *m_displayHardware;
    AudioHardware *m_audioHardware;
};

#endif // VENDORTOP_H
