#include <iostream>
#include <cassert>

using namespace std;

int main(){
    /*start*/
    //assert(false);
    //어디서 오류났는지 알려줌
    //release모드로 바꾸면 작동 안함
    //따라서 테스트할 때만 작동

    const int number = 5;
    //...
    assert(number == 5);
    //조건이 안맞으면 오류발생

    return 0;
}