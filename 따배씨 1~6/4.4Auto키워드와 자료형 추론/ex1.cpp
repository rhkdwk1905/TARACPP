#include <iostream>

auto add(int x, int y){ //파라미터는 auto사용 불가
    return x + (double)y;
}
//template을 통해 파라미터에 다양한 자료형을 사용 가능

/*테일링
auto add(int x, int y) -> int { //add의 자료형이 int로 정의됨
    ...
}
//보기 편하려고 사용함.
*/

int main()
{
    using namespace std;

    auto a = 123; //자동으로 자료형 결정(int)
    auto d = 123.0; //double
    auto c = 1 + 2.0; //double
    auto result = add(a,d);

    return 0;
}