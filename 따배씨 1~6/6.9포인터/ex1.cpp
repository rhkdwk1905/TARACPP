#include <iostream>

using namespace std;

int main()
{
    int x = 5;

    //& : address-of operator
    cout << x << endl;      //값 출력
    cout << &x << endl;     //주소 출력
    cout << (int)&x << endl;

    //* : de_reference operator
    cout << *(&x) << endl;  //주소에 담긴 값 출력
    cout << *&x << endl;    //연산자 우선순위에 의해 위와 같음
     

    return 0;
}