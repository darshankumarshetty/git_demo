#ifndef _12INCHDISPLAY_H
#define _12INCHDISPLAY_H
#include "CommonUtils.h"
#include "Functionalities/PhoneCall.h"
#include "Functionalities/Navigation.h"
#include "Functionalities/MediaControl.h"
#include "Functionalities/ClimateControl.h"
#include "Functionalities/VehicleInfo.h"

class _12InchDisplay
{
public:
    _12InchDisplay();
    ~_12InchDisplay();

    bool init();
private:
    PhoneCall *m_phoneCall;
    Navigation *m_navigation;
    MediaControl *m_media;
    VehicleInfo *m_vehicleInfo;
    ClimateControl *m_climateControl;
};

#endif // _12INCHDISPLAY_H
