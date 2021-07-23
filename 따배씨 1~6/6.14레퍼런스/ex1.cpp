#include <iostream>

using namespace std;

int main(){
    /*start*/

    int value = 5;

    int *ptr = &value;
    int &ref = value; //레퍼런스

    cout << ref << endl;

    ref = 10; // *ptr = 10과 유사

    cout << value << " " << ref << endl;
    cout << &value << endl;
    cout << &ref << endl; //변수와 주소가 같다
    cout << ptr << endl;
    cout << &ptr << endl; //포인터 자체가 다른 주소를 가짐

    return 0;
}

