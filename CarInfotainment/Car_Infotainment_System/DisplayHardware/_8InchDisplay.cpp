#include "_8InchDisplay.h"

_8InchDisplay::_8InchDisplay()
{
    cout<< " _8InchDisplay constructor "<<endl;
    m_phoneCall = nullptr;
    if(m_phoneCall == nullptr){
    m_phoneCall = new PhoneCall;
    }
}

_8InchDisplay::~_8InchDisplay()
{
    cout<< " _8InchDisplay destructor "<<endl;
    delete m_phoneCall;
}
