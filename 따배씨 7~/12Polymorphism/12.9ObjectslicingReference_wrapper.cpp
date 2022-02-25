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

class Derived : public Base
{
public:
    int m_j = 1;
    virtual void print() override
    {
        cout << "I'm Derived" << endl;
    }
};

void doSomething(Base &b)
{
    b.print();
}
void doSomething2(Base b)
{
    b.print();
}

int main()
{
    Derived d;
    Base &b = d;
    Base c = d; //이 경우, c에 d가 복사되면서 자식 클래스의 대입되지 못한 변수들은 사라진다. 대부분의 경우 실수로 이런 코드를 작성하므로, 고의적이라면 주석을 남겨야 한다.

    b.print();
    c.print(); //복사됨(다형성 불가)
    doSomething(d);
    doSomething2(d); //복사됨(다형성 불가)

    return 0;
}

int example() //실수하는 예시
{
    Base b;
    Derived d;

    // std::vector<Base> my_vec;
    // my_vec.push_back(b);
    // my_vec.push_back(d); //slicing발생

    //     for (auto &ele : my_vec)
    //     ele->print();

    //위 코드는 아래와 같이 정상구현 가능하다
    std::vector<Base *> my_vec;
    my_vec.push_back(&b);
    my_vec.push_back(&d);

    for (auto &ele : my_vec)
        ele->print();

    //Reference를 사용하고 싶다면 reference_wrapper를 이용하는 방법도 있다.
    std::vector<std::reference_wrapper<Base>> my_vec2;
    my_vec2.push_back(b);
    my_vec2.push_back(d);

    for (auto &ele : my_vec2)
        ele.get().print();

    return 0;
}
