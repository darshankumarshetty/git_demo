#ifndef DISPLAYHARDWARE_H
#define DISPLAYHARDWARE_H
#include "CommonUtils.h"
#include "INeedInfotainmentData.h"
#include "DisplayHardware/_8InchDisplay.h"
#include "DisplayHardware/_10InchDisplay.h"
#include "DisplayHardware/_12InchDisplay.h"

enum chooseDisplay{
    INCH8 = 1,
    INCH10,
    INCH12,
};

class DisplayHardware : public INeedInfotainmentData
{
public:

    DisplayHardware(int select);
    ~DisplayHardware();

    bool supplyDisplay();

private:
    int m_selectDisp;

    _8InchDisplay *m_8InchDisp;
    _10InchDisplay *m_10InchDisp;
    _12InchDisplay *m_12InchDisp;
};

#endif // DISPLAYHARDWARE_H
