#include "VendorBase.h"

VendorBase::VendorBase()
{
    cout<< " VendorBase constructor "<<endl;
    m_displayHardware=nullptr;
    m_audioHardware = nullptr;
    init();
}

VendorBase::~VendorBase()
{
    cout<< " VendorBase destructor "<<endl;
    if(m_displayHardware!=nullptr){
    delete m_displayHardware;
    }
    if(m_audioHardware!=nullptr){
    delete m_audioHardware;
    }
}

bool VendorBase::init()
{
    cout<< " VendorBase init "<<endl;
    if(m_displayHardware == nullptr){
    m_displayHardware = new DisplayHardware(INCH8);
    }
    if(m_audioHardware == nullptr){
    m_audioHardware = new AudioHardware(VBase);
    }
    return true;
}

bool VendorBase::callDisplay()
{
    cout<< " VendorBase call display "<<endl;

    m_displayHardware->supplyDisplay();
    m_audioHardware->supplyAudioHw();
    return true;
}
