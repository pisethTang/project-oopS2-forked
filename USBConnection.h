#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <stack>
using namespace std;

class USBConnection {

private:
static stack<int> ids;
USBConnection(){

}

public:
void CreateUsbConnection(){
    
}

~USBConnection(){

}

};

stack<int> USBConnection::ids({3, 2, 1});

#endif