#include <iostream>
#include <string>

using namespace std;

//함수 오버로딩:
//들어오는 인자에 따라 같은 이름이어도 다른 함수를 실행
//주어진 인자와 매개변수가 가장 근접한 함수 실행
//매개변수가 서로 달라야 중복X

int getRandom(int x){}
double getRandom(double x){}
void getRandom(int &x){}
void getRandom(double &x){}
//보통 이런식으로 쓴다

int add(int x, int y)
{
    return x + y;
}

double add(double x, double y)
{
    return x + y;
}

int main()
{
    /*start*/
    add(1,2);
    add(3.14,1.592);

    return 0;
}
