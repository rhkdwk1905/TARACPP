#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
    string m_name;

public:
    Animal(std::string name) : m_name(name)
    {
    }

public:
    string getName() { return m_name; }

    void speak() const
    {
        cout << m_name << " ??? " << endl;
    }
};

class Cat : public Animal
{
public:
    Cat(string name) : Animal(name)
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
    Dog(string name) : Animal(name)
    {
    }

    void speak() const
    {
        cout << m_name << " Woof " << endl;
    }
};

int main()
{
    Animal animal("my animal");
    Cat cat("my cat");
    Dog dog("my dog");

    animal.speak();
    cat.speak();
    dog.speak();

    Animal *ptr_animal1 = &cat;
    Animal *ptr_animal2 = &dog;

    ptr_animal1->speak();
    ptr_animal2->speak();
    //자식 클래스를 포인터로 호출하면 해당 자식클래스의 부모 클래스가 호출된다.
    //참고로각 자식클래스는 내부에 각자의 부모 클래스를 포함하고 있다.

    Cat cats[] = {Cat("cat1"), Cat("cat2"), Cat("cat3"), Cat("cat4"), Cat("cat5")};
    Dog dogs[] = {Dog("dog1"), Dog("dog2")};

    for (int i = 0; i < 5; ++i)
        cats[i].speak();

    for (int i = 0; i < 2; ++i)
        dogs[i].speak();

    Animal *my_animals[] = {&cats[0], &cats[1], &cats[2], &cats[3], &cats[4], &dogs[0], &dogs[1]};

    for (int i = 0; i < 7; i++)
        my_animals[i]->speak();
    //부모 클래스의 함수 앞에 virtual이라 붙이면 자식클래스의 함수를 호출할 수 있다. 자세한 것은 ex2에서.

    return 0;
}