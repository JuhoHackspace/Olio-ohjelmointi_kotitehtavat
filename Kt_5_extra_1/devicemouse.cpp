#include "devicemouse.h"

DeviceMouse::DeviceMouse()
{
    this->primaryButton = 1;
}
void DeviceMouse::setPrimaryButton()
{
    while(true) {
        cout << "Set mouse primary button (1 = left, 2 = right): ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        string user_input;
        cin >> user_input;
        stringstream ss(user_input);
        if(ss>>this->primaryButton) {
            if(this->primaryButton < 1) {
                this->primaryButton = 1;
            }
            else if(this->primaryButton > 2) {
                this->primaryButton = 2;
            }
            break;
        }
        else {
            cout << "Incorrect input, use only integers" << endl;
        }
    }
}
short DeviceMouse::getPrimaryButton()
{
    return this->primaryButton;
}
