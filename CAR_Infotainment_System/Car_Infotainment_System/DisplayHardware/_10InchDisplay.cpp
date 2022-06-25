#include "_10InchDisplay.h"

_10InchDisplay::_10InchDisplay()
{
    cout<< " _10InchDisplay constructor "<<endl;
    init();
}

_10InchDisplay::~_10InchDisplay()
{
    cout<< " _10InchDisplay destructor "<<endl;

}
bool _10InchDisplay::init()
{
    cout<< " _10InchDisplay init "<<endl;
    m_phoneCall = new PhoneCall;
    m_navigation = new Navigation;
    m_media = new MediaControl;
    return true;
}


