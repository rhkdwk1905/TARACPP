#include <iostream>
#include <typeinfo>

using namespace std;

template <class T>
class A
{
private:
    T m_value;

public:
    A(const T &input) : m_value(input)
    {
    }

    void print()
    {
        cout << m_value << endl;
    }

    template <typename TT>
    void doSomething(const TT &input)
    {
        cout << typeid(T).name() << " " << typeid(TT).name() << endl;
        cout << (TT)m_value << endl;
    }

    template <typename TT>
    void doSomething()
    {
        cout << typeid(T).name() << " " << typeid(TT).name() << endl;
        cout << (TT)m_value << endl;
    }
};

int main()
{
    /*start*/
    A<int> a_int(123);
    a_int.print();

    //parameter에 따라 알아서 자료형을 정한다.
    a_int.doSomething(123.4);
    a_int.doSomething('a');

    A<char> a_char('A');
    a_char.print();

    a_char.doSomething(int());
    a_char.doSomething(char());
    //파라미터가 없는 경우
    a_char.doSomething<int>();

    return 0;
}
