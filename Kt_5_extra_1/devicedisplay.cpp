#include "devicedisplay.h"

DeviceDisplay::DeviceDisplay()
{
    this->displayResolution = 1;
}

void DeviceDisplay::setDisplayResolution()
{
    while(true) {
        cout << "Set display resolution (1-10): ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        string user_input;
        cin >> user_input;
        stringstream ss(user_input);
        if(ss>>this->displayResolution) {
            if(this->displayResolution < 1) {
                this->displayResolution = 1;
            }
            else if(this->displayResolution > 10) {
                this->displayResolution = 10;
            }
            break;
        }
        else {
            cout << "Incorrect input, use only integers" << endl;
        }
    }

}
short DeviceDisplay::getDisplayResolution()
{
    return this->displayResolution;
}
