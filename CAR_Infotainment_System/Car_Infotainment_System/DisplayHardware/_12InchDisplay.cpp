#include "_12InchDisplay.h"

_12InchDisplay::_12InchDisplay()
{
    cout<< " _12InchDisplay constructor "<<endl;
    init();
}

_12InchDisplay::~_12InchDisplay()
{
    cout<< " _12InchDisplay destructor "<<endl;

}

bool _12InchDisplay::init()
{
    cout<< " _12InchDisplay init "<<endl;
    m_phoneCall = new PhoneCall;
    m_navigation = new Navigation;
    m_media = new MediaControl;
    m_vehicleInfo = new VehicleInfo;
    m_climateControl = new ClimateControl;
    return true;
}
