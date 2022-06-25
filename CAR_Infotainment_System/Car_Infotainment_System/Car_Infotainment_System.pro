TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        AudioHardware.cpp \
        AudioHardware/AudioHardware.cpp \
        AudioHardware/Radio.cpp \
        AudioHardware/Speaker.cpp \
        AudioHardware/Tweeter.cpp \
        AudioHardware/Woffer.cpp \
        BaseModel.cpp \
        CARManager.cpp \
        Car.cpp \
        CarVarients/BaseModel.cpp \
        CarVarients/Car.cpp \
        CarVarients/MidModel.cpp \
        CarVarients/TopModel.cpp \
        DisplayHardware.cpp \
        DisplayHardware/DisplayHardware.cpp \
        DisplayHardware/Navigation.cpp \
        DisplayHardware/PhoneCall.cpp \
        DisplayHardware/_10InchDisplay.cpp \
        DisplayHardware/_12InchDisplay.cpp \
        DisplayHardware/_8InchDisplay.cpp \
        Functionalities/ClimateControl.cpp \
        Functionalities/MediaControl.cpp \
        Functionalities/Navigation.cpp \
        Functionalities/PhoneCall.cpp \
        Functionalities/VehicleInfo.cpp \
        INeedInfotainmentData.cpp \
        INeedVendorData.cpp \
        MidModel.cpp \
        TopModel.cpp \
        VendorBase.cpp \
        VendorMid.cpp \
        VendorTop.cpp \
        Vendors/VendorBase.cpp \
        Vendors/VendorMid.cpp \
        Vendors/VendorTop.cpp \
        _8InchDisplay.cpp \
        main.cpp

HEADERS += \
    AudioHardware.h \
    AudioHardware/AudioHardware.h \
    AudioHardware/Radio.h \
    AudioHardware/Speaker.h \
    AudioHardware/Tweeter.h \
    AudioHardware/Woffer.h \
    BaseModel.h \
    CARManager.h \
    Car.h \
    CarVarients/BaseModel.h \
    CarVarients/Car.h \
    CarVarients/MidModel.h \
    CarVarients/TopModel.h \
    CommonUtils.h \
    DisplayHardware.h \
    DisplayHardware/DisplayHardware.h \
    DisplayHardware/Navigation.h \
    DisplayHardware/PhoneCall.h \
    DisplayHardware/_10InchDisplay.h \
    DisplayHardware/_12InchDisplay.h \
    DisplayHardware/_8InchDisplay.h \
    Functionalities/ClimateControl.h \
    Functionalities/MediaControl.h \
    Functionalities/Navigation.h \
    Functionalities/PhoneCall.h \
    Functionalities/VehicleInfo.h \
    INeedInfotainmentData.h \
    INeedVendorData.h \
    MidModel.h \
    TopModel.h \
    VendorBase.h \
    VendorMid.h \
    VendorTop.h \
    Vendors/VendorBase.h \
    Vendors/VendorMid.h \
    Vendors/VendorTop.h \
    _8InchDisplay.h
