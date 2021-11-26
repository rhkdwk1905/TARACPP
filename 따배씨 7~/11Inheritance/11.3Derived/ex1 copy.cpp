#include <iostream>

using namespace std;

class Mother
{
    public:
    int m_i;

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

    public:
    Child()
        : Mother(1024), m_d(1.0)
    {
        cout << "Child construction" << endl;
    }
};

int main()
{
    Child c1;

    return 0;
}

/* Child 생성자에서, 순서에 상관 없이 Mother(1024)가 m_d(1.0)보다 먼저 실행된다.*/