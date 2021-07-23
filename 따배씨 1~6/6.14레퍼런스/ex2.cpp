#include <iostream>

using namespace std;

int main(){
    /*start*/
    int x = 5;
    int &ref = x;

    const int y = 8;
    const int &ref = y;
    //const int 에는 레퍼런스도 const를 넣어야 한다    


    int x1 = 10;
    ref = x1;
    //ref에 들어갈 변수를 바꾸는 것도 가능하다

    return 0;
}

