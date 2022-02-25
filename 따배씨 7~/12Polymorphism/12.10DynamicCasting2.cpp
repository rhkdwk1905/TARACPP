#include <iostream>
#include <vector>
#include <functional>

using namespace std;

class Base
{
public:
    int m_i = 0;

    virtual void print()
    {
        cout << "I'm Base" << endl;
    }
};

class Derived1 : public Base
{
public:
    int m_j = 1;
    virtual void print() override
    {
        cout << "I'm Derived" << endl;
    }
};

class Derived2 : public Base
{
public:
    string m_name = "Dr.Two";
    virtual void print() override
    {
        cout << "I'm Derived" << endl;
    }
};

int main()
{
    Derived1 d1;

    //....

    Base *base = &d1; //Derived1을 Base타입으로

    auto *base_to_d1 = dynamic_cast<Derived1 *>(base);
    cout << base_to_d1->m_j << endl;
    // auto *base_to_d1 = static_cast<Derived1 *>(base);
    // cout << base_to_d1->m_j << endl;
    // auto *base_to_d1 = dynamic_cast<Derived2 *>(base);
    // base_to_d1->print(); 불가능
    // auto *base_to_d1 = static_cast<Derived2 *>(base);
    // base_to_d1->print(); 변환 가능한 값만 변환

    //왠만하면 dynamic_cast를 사용하는게 좋다.
    return 0;
}