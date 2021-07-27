#include <iostream>

using namespace std;

inline int min(int x, int y)
{
    return x > y ? y : x;
}//함수가 아니라 코드의 연장선같이 처리된 >훨씬 빠름
//다만 inline은 권장 느낌이라 무조건 inline으로 처리하지 않음
//요즘엔 컴파일러가 똑똑해서 쓰나 안쓰나 큰차이없음
//결론: 쓸필요 없다

int main()
{
    /*start*/
    cout << min(5, 6) << endl;
    cout << min(3, 2) << endl;
    //위와 아래의 작동이 같다(함수처럼 일일이 복사안함)
    cout << (5 > 6 ? 6 : 5) << endl;
    cout << (3 > 2 ? 2 : 3) << endl;

    return 0;
}
