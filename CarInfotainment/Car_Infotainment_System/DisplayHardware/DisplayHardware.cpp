#include "DisplayHardware.h"


DisplayHardware::DisplayHardware(int select): m_selectDisp(select)
{
    cout<< " DisplayHardware constructor "<<endl;
}

DisplayHardware::~DisplayHardware()
{
    cout<< " DisplayHardware destructor "<<endl;
    delete m_12InchDisp;
    delete m_10InchDisp;
    delete m_8InchDisp;
}

bool DisplayHardware::supplyDisplay()
{
    cout<< " DisplayHardware supplyData "<<endl;
    switch (m_selectDisp) {
    case INCH8:
        m_8InchDisp = new _8InchDisplay;
        break;
    case INCH10:
        m_10InchDisp = new _10InchDisplay;
        break;
    case INCH12:
        m_12InchDisp = new _12InchDisplay;
        break;
    default: cout<<" not available "<<endl;
    }

    return true;
}
