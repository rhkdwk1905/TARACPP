#include <iostream>

using namespace std;

int main(){
    /*memory leak*/
    while(true){
        int *ptr = new int; //메모리를 계속 찍어냄
        cout << ptr << endl;
    }
    //확인 방법은 작업관리자에서 메모리 사용량 확인
    //따라서 delete ptr;을 반드시 넣어줘야 한다
    //참고로 new와 delete은 느리므로 적게 사용하는게 좋다

    return 0;
}

