#include <iostream>

using namespace std;

int main(){
    /*start*/
    int x;
    cin >> x;

    //semantic errors
    if(x>=5) cout << "x is greater than 5" << endl;
    //논리오류: 실제 조건과 출력된 조건이 다름
    //해결: 코드를 잘 짜야 한다

    //violated assumption
    string hello = "Hello";
    int x2;
    cin >> x2;
    cout << hello[x2] << endl;
    //가정위반: 나의 의도와 사용자의 사용이 다를 때
    //해결: 의도 외 접근을 막는다

    return 0;
}