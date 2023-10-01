#include "devicetouchpad.h"

DeviceTouchPad::DeviceTouchPad()
{
    this->touchPadSensitivity = 1;
}
void DeviceTouchPad::setTouchPadSensitivity()
{
    while(true) {
        cout << "Set touchpad sensitivity (1-5) (1 = high, 5 = low): ";
        string user_input;
        cin >> user_input;
        stringstream ss(user_input);
        if(ss>>this->touchPadSensitivity) {
            if(this->touchPadSensitivity < 1) {
                this->touchPadSensitivity = 1;
            }
            else if(this->touchPadSensitivity > 5) {
                this->touchPadSensitivity = 5;
            }
            break;
        }
        else {
            cout << "Incorrect input, use only integers" << endl;
        }
    }
}
short DeviceTouchPad::getTouchPadSensitivity()
{
    return this->touchPadSensitivity;
}
