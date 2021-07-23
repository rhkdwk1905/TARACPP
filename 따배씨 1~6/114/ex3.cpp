#include <iostream>

extern void doSome();
extern int a;
//extern int a = 456; 중복 초기화이므로 충돌이다.
//forward declaration(extern은 생략 가능)
//변수는 해당 파일에서 extern int a가 할당되야 함
//아무튼 전역변수는 되도록 안쓰는게 낫다.

int main(){

    doSome();

    std::cout << a << std::endl;

    return 0;
}