#include "devicetouchpad.h"

DeviceTouchPad::DeviceTouchPad()
{
    this->touchPadSensitivity = 1;
}
void DeviceTouchPad::setTouchPadSensitivity()
{
    short sens;
    cin >> sens;
    if(sens < 1) {
        this->touchPadSensitivity = 1;
    }
    else if(sens > 5) {
        this->touchPadSensitivity = 5;
    }
    else {
        this->touchPadSensitivity = sens;
    }
}
short DeviceTouchPad::getTouchPadSensitivity()
{
    return this->touchPadSensitivity;
}
