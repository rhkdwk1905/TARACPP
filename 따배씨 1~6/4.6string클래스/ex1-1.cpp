#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    cout << "Your age ? : ";
    int age;
    cin >> age;
    //std::getline(std::cin, age);
    //버퍼에 이미 저장된 값에 의해 오류 발생

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    //std::cin.ignore(32767, '\n');
    //\n이 올 때까지 32767자리를 무시

    cout << "Your name ? : ";
    string name;
    //cin >> name;
    std::getline(std::cin, name);


    cout << name << " " << age << endl;

    return 0;
}