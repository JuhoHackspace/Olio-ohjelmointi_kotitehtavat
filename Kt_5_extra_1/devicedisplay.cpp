#include "devicedisplay.h"

DeviceDisplay::DeviceDisplay()
{
    this->displayResolution = 1;
}

void DeviceDisplay::setDisplayResolution()
{
    short res;
    cin >> res;
    if(res < 1) {
        this->displayResolution = 1;
    }
    else if(res > 10) {
        this->displayResolution = 10;
    }
    else {
        this->displayResolution = res;
    }
}
short DeviceDisplay::getDisplayResolution()
{
    return this->displayResolution;
}
