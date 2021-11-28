#include <iostream>

using namespace std;

class A
{
public:
    virtual void print() { cout << "A" << endl; }
};

class B : public A
{
public:
    void print() { cout << "B" << endl; }
};

class C : public B
{
public:
    void print() { cout << "C" << endl; }
};

class D : public C
{
public:
    void print() { cout << "D" << endl; }
};

int main()
{
    A a;
    a.print();

    B b;
    b.print();

    C c;
    c.print();

    D d;
    d.print();

    A &ref1 = b;
    ref1.print();
    A &ref2 = c;
    ref2.print();
    C &ref3 = d;
    ref3.print();
    //레퍼런스가 A라는 이유로 b,c,d는 부모 클래스들처럼 작동한다.
    //참고로 레퍼런스는 다형성에 있어 포인터와 같다.
    //++virtual 추가 // virtual함수일 경우, 객체의 원래 클래스의 overriding된 함수를 호출한다.

    B &ref4 = d;
    ref4.print();
    //신기하게도 D가 나온다. 가장 상위 클래스의 함수가 virtual이 되면, 하위 클래스의 overriding 함수들도 자동으로 virtual함수가 된다.

    //따라서 상속 구조의 최상위 클래스가 중요하다.
    //만일 하위 클래스의 같은 이름 함수가 리턴 타입이 다르다면 컴파일이 불가하다.
    //또한 virtual은 동작 속도가 느리다.

    return 0;
}