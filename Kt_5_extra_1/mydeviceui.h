#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H
#include "devicedisplay.h"
#include "devicemouse.h"
#include "devicetouchpad.h"
#include <iostream>

using namespace std;

class MyDeviceUI
{
public:
    MyDeviceUI();
    ~MyDeviceUI();
    void execute();
    void uiShowMenu();
    void uiSetMouseInformation();
    void uiSetDisplayInformation();
    void uiSetTouchPadInformation();
    void uiShowDeviceInformation();
private:
    short userSelection;
    DeviceMouse* objectDeviceMouse;
    DeviceDisplay* objectDeviceDisplay;
    DeviceTouchPad* objectDeviceTouchpad;
};

#endif // MYDEVICEUI_H
