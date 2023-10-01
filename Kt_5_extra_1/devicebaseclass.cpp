#include "devicebaseclass.h"

DeviceBaseClass::DeviceBaseClass()
{
    deviceID = 0;
}
void DeviceBaseClass::setDeviceID()
{
    while(true) {
        cout << "Set device ID: ";
        string user_input;
        cin >> user_input;
        stringstream ss(user_input);
        if(ss>>this->deviceID) {
            break;
        }
        else {
            cout << "Incorrect input, use only integers" << endl;
        }
    }

}
short DeviceBaseClass::getDeviceID()
{
    return this->deviceID;
}
