#include "devicebaseclass.h"

DeviceBaseClass::DeviceBaseClass()
{
    deviceID = 0;
}
void DeviceBaseClass::setDeviceID()
{
    cin >> this->deviceID;
}
short DeviceBaseClass::getDeviceID()
{
    return this->deviceID;
}
