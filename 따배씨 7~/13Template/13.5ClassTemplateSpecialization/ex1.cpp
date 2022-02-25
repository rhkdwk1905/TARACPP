#include <iostream>
#include <array>
#include <typeinfo>

using namespace std;

template <typename T>
class A
{
public:
    A(const T &input)
    {
    }

    void doSomething()
    {
        cout << typeid(T).name() << endl;
    }

    void test()
    {
    }
};

//자료형에 대한 같은 이름, 별도의 클래스를 만들 수 있다
template <>
class A<char>
{
public:
    A(const char &input)
    {
    }

    void doSomething()
    {
        cout << "Char type specialization" << endl;
    }
};

int main()
{
    /*start*/
    A<int> a_int(1);
    A<double> a_double(3.14);
    A<char> a_char('a');

    a_int.test();
    a_double.test();
    // a_char.test(); 없다

    a_int.doSomething();
    a_double.doSomething();
    a_char.doSomething();

    return 0;
}
