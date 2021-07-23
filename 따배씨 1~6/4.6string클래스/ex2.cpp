#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a("Hello, ");
    string b("World");
    string hw = a+b; //append라 부름
    hw += " I'm good";

    cout << a+b << endl;
    cout << hw << endl;
    cout << a.length() << endl; //'\0'제외
    

    return 0;
}