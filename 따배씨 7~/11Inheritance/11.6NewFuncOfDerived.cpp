#include <iostream>

using namespace std;

class Base
{
    //private: 자식 클래스에서 사용 불가
protected:
    int m_value;

public:
    Base(int value)
        : m_value(value)
    {
    }
};

class Derived : public Base
{
public:
    Derived(int value) : Base(value)
    {
    }

    void setValue(int value)
    {
        Base::m_value = value;
    }
};

int main()
{
    /*start*/

    return 0;
}
