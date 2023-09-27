#ifndef DEVICETOUCHPAD_H
#define DEVICETOUCHPAD_H
#include "devicebaseclass.h"
#include <iostream>
#include <sstream>
#include <limits>

using namespace std;

class DeviceTouchPad: public DeviceBaseClass
{
public:
    DeviceTouchPad();
    void setTouchPadSensitivity();
    short getTouchPadSensitivity();
private:
    short touchPadSensitivity;
};

#endif // DEVICETOUCHPAD_H
