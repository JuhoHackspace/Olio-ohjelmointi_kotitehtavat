#ifndef DEVICEBASECLASS_H
#define DEVICEBASECLASS_H
#include <iostream>
#include <sstream>
#include <limits>

using namespace std;

class DeviceBaseClass
{
public:
    DeviceBaseClass();
    void setDeviceID();
    short getDeviceID();

protected:
    short deviceID;
};

#endif // DEVICEBASECLASS_H
