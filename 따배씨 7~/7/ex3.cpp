#include <iostream>
#include <cmath>

using namespace std;

void addOne(int &y)//레퍼런스로 받는 변수는 실제 변수와 같다
{
    y= y+1;
    cout << y << " " << &y << endl;
}

void foo(const int &x)
{
    cout << x << endl;
}
//요즘엔 const int &x 형태로 함수 인자를 받고,
//여러 개의 리턴을 받는 형태가 선호된다.

void getSinCos(const double degrees, double &sin_out, double &cos_out)
{
    //함수에서 바뀐 변수값을 유지할 뿐 아니라,
    //값을 추가로 리턴하는 기능도 있다
    static const double pi = 3.141592 / 180.0;
    //static은 계속 남으므로 연산해서 초기화하기 좋음

    const double radians = degrees * pi;
    sin_out = sin(radians);
    cos_out = cos(radians);

}

int main(){
    /*start*/
    double sin(0.0);
    double cos(0.0);

    foo(6);
    //리터럴 문자는 주소가 없으므로 레퍼런스로 못받는다
    //단, 레퍼런스 앞에 const를 넣으면 받을 수 있다.

    return 0;
}

