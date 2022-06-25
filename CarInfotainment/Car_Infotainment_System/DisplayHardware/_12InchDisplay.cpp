#include "_12InchDisplay.h"

_12InchDisplay::_12InchDisplay()
{
    cout<< " _12InchDisplay constructor "<<endl;
    m_phoneCall = nullptr;
    m_navigation = nullptr;
    m_media = nullptr;
    m_vehicleInfo = nullptr;
    m_climateControl = nullptr;
    init();
}

_12InchDisplay::~_12InchDisplay()
{
    cout<< " _12InchDisplay destructor "<<endl;
    if(m_climateControl != nullptr){
        delete m_climateControl;
    }
    if(m_vehicleInfo!=nullptr){
        delete m_vehicleInfo;
    }
    if(m_media != nullptr){
        delete m_media;
    }
    if(m_navigation != nullptr){
        delete m_navigation;
    }
    if(m_phoneCall != nullptr){
        delete m_phoneCall;
    }
}

bool _12InchDisplay::init()
{
    cout<< " _12InchDisplay init "<<endl;
    if(m_phoneCall == nullptr){
        m_phoneCall = new PhoneCall;
    }
    if(m_navigation == nullptr){
        m_navigation = new Navigation;
    }
    if(m_media == nullptr){
        m_media = new MediaControl;
    }
    if(m_vehicleInfo == nullptr){
        m_vehicleInfo = new VehicleInfo;
    }
    if(m_climateControl == nullptr){
        m_climateControl = new ClimateControl;
    }
    return true;
}
