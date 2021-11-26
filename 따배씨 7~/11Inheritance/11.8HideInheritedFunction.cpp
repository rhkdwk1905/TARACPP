#include <iostream>

using namespace std;

class Base
{
protected:
    int m_i;

public:
    Base(int value) : m_i(value)
    {
    }

    void print()
    {
        cout << "I'm base" << endl;
    }
};

class Derived : public Base
{
private:
    double m_d;

public:
    Derived(int value) : Base(value)
    {
    }

public:
    using Base::m_i; //m_i가 Derived에선 public이 되버림. 따라서 외부서 변경 가능해짐.

private:
    using Base::print; //do not add()
    //print가 Derived에선 private가 되버림. 따라서 외부서 변경 불가.

    //두 번째 방법으로 delete도 있음.
    void print() = delete;
};

int main()
{
    /*start*/
    Derived derived(7);
    derived.m_i = 1024;
    //derived.print(); //private가 되어서&제거되어서 불가
    Base base(5);
    base.print(); //이건 가능

    return 0;
}