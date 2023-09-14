#include <iostream>
#include "mydeviceui.h"

using namespace std;

int main()
{
    MyDeviceUI* deviceUI = new MyDeviceUI;
    deviceUI->execute();
    delete deviceUI;
    return 0;
}
