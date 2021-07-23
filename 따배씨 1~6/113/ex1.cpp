#include <iostream>

int main()
{
    using namespace std;
    float pi = 3.14l;

    int x0 = 0b10;//앞에 0b이면 2진수
    int x1 = 012; //앞에 0이면 8진수
    int x2 = 0xf; //앞에 0x이면 16진수
    //참고로 숫자 사이의 '는 무시한다.
    int x3 = 0xfe'123'232;
    cout << x0 << " "<< x1 << " " << x2 << endl;
    cout << x3 << endl;
    return 0;
}