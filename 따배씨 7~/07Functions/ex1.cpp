#include <iostream>

using namespace std;

int foo(int x, int y);

int foo(int x, int y)
{
    return x + y;
}//x와 y는 함수가 끝남과 동시에 메모리가 반환됨

int main()
{
    /*start*/
    int x=1, y=2;

    foo(6,7); //arguments(인자) 라고 함
    foo(x, y+1); //이런것도됨

    return 0;
}
