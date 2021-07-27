#include <iostream>

using namespace std;

int func(){
    return 5;
}

int goo(){
    return 10;
}

int main(){
    /*start*/
    cout << (int*)func << endl;
    //함수도 주소를 갖고있다
    func();
    int(*func_ptr)() = func; //함수포인터 대입 방법
    cout << func_ptr() << endl; //함수포인터 실행 방법

    func_ptr = goo;
    cout << func_ptr() << endl; //goo가 실행됨

    return 0;
}