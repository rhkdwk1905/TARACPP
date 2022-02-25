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

    auto *base_to_d1 = dynamic_cast<Derived1 *>(base); //Base타입을 다시 Derived1 타입으로
    //참고로 dynamic_cast는 cast에 실패하면 null값을 넣는다.
    cout << base_to_d1->m_j << endl;
    base_to_d1->m_j = 245;

    cout << d1.m_j << endl;

    return 0;
}