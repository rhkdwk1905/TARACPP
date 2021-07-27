#include <iostream>

using namespace std;

typedef int* p_int;
//void foo(int* &ptr)
void foo(p_int &ptr)
{//포인터를 레퍼런스로 받으려면 int* &ptr로 받아야 한다
// 보통 int* &ptr로 쓰면 헷갈려서 typedef int*를 쓴다
// main함수의 ptr과 주소, 값이 같다

    cout << ptr << " " << &ptr << endl;
}

int main(){
    /*start*/
    int x = 5;
    p_int ptr = &x;

    cout << ptr << " " << &ptr << endl;
    foo(ptr);    

    return 0;
}

