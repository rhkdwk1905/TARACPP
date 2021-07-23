#include <iostream>

int value = 5;

int main()
{
    using namespace std;

    cout << value << endl;

    int value = 7;

    cout << value << endl;

    cout << ::value << endl; //전역변수

}