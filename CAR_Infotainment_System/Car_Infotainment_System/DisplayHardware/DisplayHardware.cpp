#include "DisplayHardware.h"


DisplayHardware::DisplayHardware(int select): m_selectDisp(select)
{
    cout<< " DisplayHardware constructor "<<endl;
    init();
}

DisplayHardware::~DisplayHardware()
{
    cout<< " DisplayHardware destructor "<<endl;

}

bool DisplayHardware::init()
{
    cout<< " DisplayHardware init "<<endl;
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
