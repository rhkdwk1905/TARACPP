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

class Scanner : public PoweredDevice
{
public:
    Scanner(int scanner, int power)
        : PoweredDevice(power)
    {
        cout << "Scanner: " << scanner << '\n';
    }
};

class Printer : public PoweredDevice
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
        : Scanner(scanner, power), Printer(printer, power)
    {
    }
};

int main()
{
    Copier cop(1, 2, 3);

    cout << &cop.Scanner::PoweredDevice::m_i << endl;
    cout << &cop.Printer::PoweredDevice::m_i << endl;
    //서로 다른 PoweredDevice의 주소를 가진다.
    //현재는 Ambiguous문제로 막힌 듯 하다.

    return 0;
}