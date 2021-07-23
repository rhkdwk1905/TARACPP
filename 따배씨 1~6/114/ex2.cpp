#include <iostream>

using namespace std;

int a1 = 1; //다른 cpp파일서 연결 가능
static int a1 = 1; //다른 cpp파일서 사용 불가

void doSum()
{
    int a = 1;
    ++a;
    cout << a << endl;
}
//함수를 실행하면 a를 할당, 끝나면 반환

void doSum1()
{
    static int a = 1;
    ++a;
    cout << a << endl;
}
//static은 할당 뒤 유지됨(따라서 초기화 필수)

int main()
{
    doSum();
    doSum();
    doSum();
    doSum1();
    doSum1();
    doSum1();
}