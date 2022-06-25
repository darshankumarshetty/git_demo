#ifndef _10INCHDISPLAY_H
#define _10INCHDISPLAY_H
#include "CommonUtils.h"
#include "Functionalities/PhoneCall.h"
#include "Functionalities/Navigation.h"
#include "Functionalities/MediaControl.h"

class _10InchDisplay
{
public:
    _10InchDisplay();
    ~_10InchDisplay();

    bool init();
private:
    PhoneCall *m_phoneCall;
    Navigation *m_navigation;
    MediaControl *m_media;
};

#endif // _10INCHDISPLAY_H
