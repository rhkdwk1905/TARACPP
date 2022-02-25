#include <iostream>
using namespace std;

class PoweredDevice
{
public:
    int m_i;

    PoweredDevice(int power)
    {
        cout << "PoweredDevice: " << power << '\n';
    }
};

class Scanner : virtual public PoweredDevice
{
public:
    Scanner(int scanner, int power)
        : PoweredDevice(power)
    {
        cout << "Scanner: " << scanner << '\n';
    }
};

class Printer : virtual public PoweredDevice
{
public:
    Printer(int printer, int power)
        : PoweredDevice(power)
    {
        cout << "Printer: " << printer << '\n';
    }
};

class Copier : public Scanner, public Printer
{
public:
    Copier(int scanner, int printer, int power)
        : Scanner(scanner, power), Printer(printer, power), PoweredDevice(power)
    {
    }
};

int main()
{
    Copier cop(1, 2, 3);

    cout << &cop.Scanner::PoweredDevice::m_i << endl;
    cout << &cop.Printer::PoweredDevice::m_i << endl;
    //PoweredDevice를 상속할 때 virtual을 붙이면 같은 부모 클래스를 호출함을 알 수 있다. 이를 통해 Diamond상속을 해결할 수 있다.

    return 0;
}