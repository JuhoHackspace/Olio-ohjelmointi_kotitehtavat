#ifndef DEVICEDISPLAY_H
#define DEVICEDISPLAY_H
#include "devicebaseclass.h"
#include <iostream>

class DeviceDisplay: public DeviceBaseClass
{
public:
    DeviceDisplay();
    void setDisplayResolution();
    short getDisplayResolution();
private:
    short displayResolution;
};

#endif // DEVICEDISPLAY_H
