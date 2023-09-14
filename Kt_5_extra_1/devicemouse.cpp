#include "devicemouse.h"

DeviceMouse::DeviceMouse()
{
    this->primaryButton = 1;
}
void DeviceMouse::setPrimaryButton()
{
    short btn;
    cin >> btn;
    if(btn < 1) {
        this->primaryButton = 1;
    }
    else if(btn > 2) {
        this->primaryButton = 2;
    }
    else {
        this->primaryButton = btn;
    }
}
short DeviceMouse::getPrimaryButton()
{
    return this->primaryButton;
}
