#include "VendorTop.h"

VendorTop::VendorTop()
{
    cout<< " VendorTop constructor "<<endl;
    m_displayHardware=nullptr;
    m_audioHardware = nullptr;
    init();
}

VendorTop::~VendorTop()
{
    cout<< " VendorTop destructor "<<endl;
    if(m_displayHardware!=nullptr){
    delete m_displayHardware;
    }
    if(m_audioHardware!=nullptr){
    delete m_audioHardware;
    }
}

bool VendorTop::init()
{
    cout<< " VendorTop init "<<endl;
    if(m_displayHardware == nullptr){
    m_displayHardware = new DisplayHardware(INCH12);
    }
    if(m_audioHardware == nullptr){
    m_audioHardware = new AudioHardware(VTop);
    }
    return true;
}

bool VendorTop::callDisplay()
{
    cout<< " VendorTop call display "<<endl;
    m_displayHardware->supplyDisplay();
    m_audioHardware->supplyAudioHw();
    return true;
}
