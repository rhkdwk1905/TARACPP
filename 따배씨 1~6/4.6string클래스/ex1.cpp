#include <iostream>
#include <string>

using namespace std;

int main()
{
    const char my_strs[] = "Hello, World";
    const string my_hello("Hello, World");
    //추가적 기능이 들어감

    cout << my_hello << endl;

    cout << "Your name ? : ";
    string name;
    //cin >> name;
    std::getline(std::cin, name);

    cout << "Your age ? : ";
    string age;
    //cin >> age;
    std::getline(std::cin, age);

    cout << name << " " << age << endl;

    return 0;
}