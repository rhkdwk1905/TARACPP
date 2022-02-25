#include <iostream>
#include <typeinfo>

using namespace std;

class A
{
public:
    virtual void print() { cout << "A" << endl; }
    virtual A *getThis()
    {
        cout << "A::getThis()" << endl;
        return this;
    }
};

class B : public A
{
public:
    void print() final { cout << "B" << endl; }
    // final옵션은 상속받는 메서드가 override를 못하게 막는다.
    virtual B *getThis()
    {
        cout << "B::getThis()" << endl;
        return this;
    }
    // 포인터도 상속관계면 오버로딩이 가능하다.
};

class C : public B
{
public:
    // void print() { cout << "C" << endl; }
};

class D : public C
{
public:
    // void print() { cout << "D" << endl; }
};

int main()
{
    A a;
    B b;

    A &ref = b;
    b.getThis()->print();
    ref.getThis()->print();

    cout << typeid(b.getThis()).name() << endl;
    cout << typeid(ref.getThis()).name() << endl;

    return 0;
}