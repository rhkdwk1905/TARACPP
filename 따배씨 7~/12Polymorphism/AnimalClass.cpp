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

    virtual void speak() const
    {
        cout << m_name << " ??? " << endl;
    }
};

void Animal::speak() const
{
    cout << m_name << " ??? " << endl;
}

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
        cout << m_name << " Meow " << endl;
    }
};

main()
{
    /*start*/

    return 0;
}
