#include <iostream>
#include <string>

using namespace std;

struct Person
{
    double height = 170.0;
    float weight = 60.0;
    int age = 20;
    string name = "Mr.Default";

    void print()
    {
        cout << height << " " << weight << " " << age  << " " << name << endl;
    }
};

int main()
{
    Person human1;
    human1.print();
    Person human2{173.0, 55.0, 23, "Nikelsman"};
    human2.print();
    //초기화가 안되면 기본 값을 지닌다

    return 0;
}