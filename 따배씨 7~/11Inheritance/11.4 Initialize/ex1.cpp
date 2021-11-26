#include <iostream>

using namespace std;

class Mother
{
    private:
    int m_i;

    public:
    Mother(const int& i_in = 0)
        : m_i(1)
    {
        cout << "Mother construction" << endl;
    }
};

class Child : public Mother
{
    public:
    double m_d;
    int m_temp;

    public:
    Child()
        : Mother(1024), m_d(1.0f)
    {
        cout << "Child construction" << endl;
    }
};

int main()
{
    Child c1;

    cout << sizeof(Mother) << endl; //4
    cout << sizeof(Child) << endl; //24, 패딩때문

    return 0;
}