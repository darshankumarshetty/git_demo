#include "VendorMid.h"

VendorMid::VendorMid()
{
    cout<< " VendorMid constructor "<<endl;
    m_displayHardware=nullptr;
    m_audioHardware = nullptr;
    init();
}

VendorMid::~VendorMid()
{
    cout<< " VendorMid destructor "<<endl;
    if(m_displayHardware!=nullptr){
    delete m_displayHardware;
    }
    if(m_audioHardware!=nullptr){
    delete m_audioHardware;
    }
}

bool VendorMid::init()
{
    cout<< " VendorMid init "<<endl;
    if(m_displayHardware == nullptr){
    m_displayHardware = new DisplayHardware(INCH10);
    }
    if(m_audioHardware == nullptr){
    m_audioHardware = new AudioHardware(VMid);
    }
    return true;
}

bool VendorMid::callDisplay()
{
    cout<< " VendorMid call display "<<endl;
    m_displayHardware->supplyDisplay();
    m_audioHardware->supplyAudioHw();
    return true;
}
