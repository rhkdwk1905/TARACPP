#include <iostream>

using namespace std;

class Base
{
public:
    virtual ~Base()
    {
        cout << "~Base()" << endl;
    }
};

class Derived : public Base
{
private:
    int *m_array;

public:
    Derived(int length)
    {
        m_array = new int[length];
    }

    ~Derived()
    {
        cout << "~Derived" << endl;
        delete[] m_array;
    }
};

int main()
{
    // Derived derived(5);

    Derived *derived = new Derived(5);
    Base *base = derived;
    delete base;
    // base의 메모리만 반환되므로 메모리 누수가 생긴다
    // 이를 막기위해 base의 소멸자를 virtual로 만들어준다

    return 0;
}