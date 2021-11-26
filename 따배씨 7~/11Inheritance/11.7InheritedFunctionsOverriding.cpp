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

    friend std::ostream &operator<<(std::ostream &out, const Base &b)
    {
        cout << "This is base output" << endl;
        return out;
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

    void print()
    {
        Base::print(); //부모 클래스의 함수호출
        cout << "I'm derived" << endl;
        //print(); 만 넣으면 재귀호출로 무한루프에 빠진다.
    }

    friend std::ostream &operator<<(std::ostream &out, const Derived &d)
    {
        cout << static_cast<Base>(d);
        //부모함수의 <<연산자 호출
        cout << "This is derived output" << endl;
        return out;
    }
};

int main()
{
    /*start*/
    Base base(5);
    base.print();
    cout << base;

    Derived derived(9);
    derived.print();
    cout << derived;

    return 0;
}
//결론: 함수의 이름이 같으면 자식 클래스의 함수만 실행된다.