#include "mydeviceui.h"

MyDeviceUI::MyDeviceUI()
{
    this->objectDeviceDisplay = new DeviceDisplay;
    this->objectDeviceMouse = new DeviceMouse;
    this->objectDeviceTouchpad = new DeviceTouchPad;
}

MyDeviceUI::~MyDeviceUI()
{
    delete this->objectDeviceDisplay;
    delete this->objectDeviceMouse;
    delete this->objectDeviceTouchpad;
}

void MyDeviceUI::execute()
{
    while(true) {
        this->uiShowMenu();
        while(true) {
            cout << "Choose: ";
            string user_input;
            cin >> user_input;
            stringstream ss(user_input);
            if(ss>>this->userSelection) {
                break;
            }
            else {
                cout << "Incorrect input, use only integers" << endl;
            }
        }

        switch(this->userSelection) {
        case 1: this->uiSetMouseInformation();
            break;
        case 2: this->uiSetTouchPadInformation();
            break;
        case 3: this->uiSetDisplayInformation();
            break;
        case 4: this->uiShowDeviceInformation();
            break;
        case 5: return;
        default: cout << "Incorrect choice!" << endl;
            break;
        }
    }
}

void MyDeviceUI::uiShowMenu()
{
    cout << endl;
    cout << "DEVICE MENU" << endl;
    cout << "===========" << endl;
    cout << "1: Set Mouse Information" << endl;
    cout << "2: Set Touch Pad Information" << endl;
    cout << "3: Set Display Information" << endl;
    cout << "4: Show devices information" << endl;
    cout << "5: Finish" << endl << endl;
}
void MyDeviceUI::uiSetMouseInformation()
{
    cout << endl;
    cout << "SET MOUSE INFORMATION" << endl;
    cout << "=====================" << endl;
    this->objectDeviceMouse->setDeviceID();
    this->objectDeviceMouse->setPrimaryButton();
    cout << endl;
}

void MyDeviceUI::uiSetDisplayInformation()
{
    cout << endl;
    cout << "SET DISPLAY INFORMATION" << endl;
    cout << "=======================" << endl;
    this->objectDeviceDisplay->setDeviceID();
    this->objectDeviceDisplay->setDisplayResolution();
    cout << endl;
}

void MyDeviceUI::uiSetTouchPadInformation()
{
    cout << endl;
    cout << "SET TOUCH PAD INFORMATION" << endl;
    cout << "=========================" << endl;
    this->objectDeviceTouchpad->setDeviceID();
    this->objectDeviceTouchpad->setTouchPadSensitivity();
    cout << endl;

}

void MyDeviceUI::uiShowDeviceInformation()
{
    cout << endl;
    cout << "DEVICE INFORMATION" << endl;
    cout << "==================" << endl;
    cout << "Display device ID: " << this->objectDeviceDisplay->getDeviceID() << endl;
    cout << "Display resolution: " << this->objectDeviceDisplay->getDisplayResolution() << endl;
    cout << "Mouse device ID: " << this->objectDeviceMouse->getDeviceID() << endl;
    cout << "Mouse primary button: " << this->objectDeviceMouse->getPrimaryButton() << endl;
    cout << "Touchpad device ID: " << this->objectDeviceTouchpad->getDeviceID() << endl;
    cout << "Touchpad sensitivity: " << this->objectDeviceTouchpad->getTouchPadSensitivity() << endl;
    cout << endl;
}
