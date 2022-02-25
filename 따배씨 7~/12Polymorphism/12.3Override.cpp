#include <iostream>

using namespace std;

class A
{
public:
    virtual void print(int x) { cout << "A" << endl; }
    // virtual A* getThis() { return this; }
};

class B : public A
{
public:
    void print(int x) override { cout << "B" << endl; }
    // void print1() { cout << "B" << endl; }
    // virtual B* getThis() { return this; }
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
    B b;
    // C c;

    A &ref = b;
    ref.print(1);
    // 인자가 다르면 overriding(상속받은 메서드의 내용만 변경)가 아닌, overloading(이름만 같고 새로운 메서드를 정의)로 인식한다.
    // 인자가 달라도 overriding으로 처리하고 싶다면, override 옵션을 넣어주면 오류를 미연에 방지할 수 있다.
    // 참고로 const  함수가 원본이라면, 같이 const를 상속받는 클래스에 넣어줘야 한다.
    // cout << typeid(b.getThis()).name() << endl;

    return 0;
}