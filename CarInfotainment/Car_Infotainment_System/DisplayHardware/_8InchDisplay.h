#ifndef _8INCHDISPLAY_H
#define _8INCHDISPLAY_H
#include "CommonUtils.h"
#include "Functionalities/PhoneCall.h"

class _8InchDisplay
{
public:
    _8InchDisplay();
    ~_8InchDisplay();

private:
    PhoneCall *m_phoneCall;
};

#endif // _8INCHDISPLAY_H
