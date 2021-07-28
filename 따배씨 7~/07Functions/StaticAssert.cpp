#include <iostream>
#include <cassert>

using namespace std;

int main(){
    /*start*/
    const int x = 5;

    static_assert(x == 5, "x should be 5");
    //static_assert는 const처럼 컴파일 중 값이 불변하는 값만 사용 가능
    //두번째 인자로 오류시 출력할 내용을 설정가능

    return 0;
}

