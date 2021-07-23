#include <iostream>

using namespace std;

void printNumber(const int my_number)
{
    //파라미터를 바꾸기보단 복사해서 바꾸는게 좋다.
    int n = my_number + 4;
    cout << my_number << endl;
}

int main()
{
    //const는 고정된 숫자를 위해 사용한다.
    //const는 앞에 붙이나 뒤에 붙이나 상관 없지만,
    //보통 앞에 붙인다.

    const double gravity = 9.8;
    int number;
    cin >> number;

    //const int my_const(123); <컴파일 상수
    //const int my_const(number); <런타임 상수
    //constexpr int my_const(123); < 컴파일 상수로 만듦

    //참고로 매크로(#define)은 전역이므로,
    //const int를 이용해 심볼릭 상수를 쓰는게 좋다.



}