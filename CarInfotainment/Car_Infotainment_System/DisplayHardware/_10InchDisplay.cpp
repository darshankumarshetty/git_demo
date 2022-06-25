#include "_10InchDisplay.h"

_10InchDisplay::_10InchDisplay()
{
    cout<< " _10InchDisplay constructor "<<endl;
    m_phoneCall = nullptr;
    m_navigation = nullptr;
    m_media = nullptr;
    init();
}

_10InchDisplay::~_10InchDisplay()
{
    cout<< " _10InchDisplay destructor "<<endl;
    delete m_media;
    delete m_navigation;
    delete m_phoneCall;
}
bool _10InchDisplay::init()
{
    cout<< " _10InchDisplay init "<<endl;
    if(m_phoneCall == nullptr){
    m_phoneCall = new PhoneCall;
    }
    if(m_navigation == nullptr){
    m_navigation = new Navigation;
    }
    if(m_media == nullptr){
        m_media = new MediaControl;
    }
    return true;
}


