#include <iostream>
using namespace std;

class Base
{
public:
    int m_public;

protected:
    int m_protected;

private:
    int m_private;
};

class Derived : public Base
{
public:
    Derived()
    {
        m_public = 123;
        m_protected = 123;
        //m_private = 123; 불가
    }
};

class Derived2 : protected Base
{
public:
    Derived2()
    {
        m_public = 123;
        m_protected = 123;
        //m_private = 123; 불가
    }
};

class Derived3 : private Base
{
public:
    Derived3()
    {
        m_public = 123;
        m_protected = 123;
        //m_private = 123; 불가
    }
};

int main()
{
    Base base;
    base.m_public = 123;
    //base.m_protected = 123; 불가
    //base.m_private = 123; 불가

    Derived derived;
    derived.m_public = 123;
    //derived.m_protected = 123; 불가
    //derived.m_private = 123; 불가

    Derived2 derived2;
    // derived2.m_public = 123; 불가
    // derived2.m_protected = 123; 불가
    // derived2.m_private = 123; 불가

    Derived3 derived2;
    // derived3.m_public = 123; 불가
    // derived3.m_protected = 123; 불가
    // derived3.m_private = 123; 불가

    return 0;
}

//결론: protected는 상속된 클래스에서 사용가능하다.
//접근권한이 가장 작은 것을 우선한다(private>public).