#include <iostream>

using namespace std;

class USBDevice
{
private:
    long m_id;

public:
    USBDevice(long id) : m_id(id) {}

    long getID() { return m_id; }

    void plugAndPlay() {}
};

class NetworkDevice
{
private:
    long m_id;

public:
    NetworkDevice(long id) : m_id(id) {}

    long getID() { return m_id; }

    void networking() {}
};

class USBNetworkDevice : public USBDevice, public NetworkDevice
{
public:
    USBNetworkDevice(long usb_id, long net_id) : USBDevice(usb_id), NetworkDevice(net_id)
    {
    }
};

int main()
{
    /*start*/
    USBNetworkDevice my_device(3.14, 6.022);

    my_device.networking();
    my_device.plugAndPlay();

    //my_device.getID(); //두 부모에 같은 이름의 함수가 있음.

    my_device.USBDevice::getID();
    my_device.NetworkDevice::getID();
    //이렇게 부모 이름을 지정해줘야 함.

    return 0;
}