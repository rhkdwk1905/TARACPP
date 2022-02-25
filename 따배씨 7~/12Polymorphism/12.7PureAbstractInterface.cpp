// 순수 가상함수(Pure)-본체가 없고, 자식 클래스에서 반드시 Overriding을 해야한다.
// 추상 기본 클래스(Abstract)-순수 가상함수를 포함한 클래스
// 인터페이스 클래스(Interface)-순수 가상함수로만 이루어진 클래스

#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
    string m_name;

public:
    Animal(string name)
        : m_name(name)
    {
    }

public:
    string getName() { return m_name; }
    virtual void speak() const = 0;
    //virtual함수 = 0; 형태를 PureVirtualFunction이라한다.
    //이 함수는 자식 클래스에서 반드시 구현되야 한다.

    // virtual void speak() const
    // {
    //     cout << m_name << " ??? " << endl;
    // }
};

class Cat : public Animal
{
public:
    Cat(string name)
        : Animal(name)
    {
    }

    void speak() const
    {
        cout << m_name << " Meow " << endl;
    }
};

class Dog : public Animal
{
public:
    Dog(string name)
        : Animal(name)
    {
    }

    void speak() const
    {
        cout << m_name << " Wofo " << endl;
    }
};

class Cow : public Animal
{
public:
    Cow(string name)
        : Animal(name)
    {
    }

    virtual void speak() const
    {
        cout << m_name << " Mooo " << endl;
    }
};

main()
{
    /*start*/
    //Animal ani("Hi");
    //이것만으로는 객체를 만들 수 없다.

    Cow cow("hello");
    cow.speak();

    return 0;
}
