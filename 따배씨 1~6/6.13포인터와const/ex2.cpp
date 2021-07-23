#include <iostream>

using namespace std;

int main(){
    /*start*/
    int value_a = 5;
    int *const ptr_a = &value_a;

    *ptr_a = 10; //변수값 바꾸기는 되는데
    cout << *ptr_a << endl;

    int value2 = 8;
    //ptr = &value2; ->주소바꾸기가 안됨
    //결론: const int *ptr -> 포인터로 변수값 변경 불가
    //      int *const ptr -> 주소값 변경 불가

    int value_b = 5;
    const int *const ptr_b = &value_b;
    //이제 주소도, 변수도 못바꿈

    //정리
    int var = 5;
    const int *ptr1 = &var;   //변수변경불가
    int *const ptr2 = &var;   //주소변경불가
    const int *const ptr3 = &var;
    //변수,주소변경불가
    //보통 ptr2, ptr3을 함수 인자로 많이쓴다
    //더 편한건 참조다

    return 0;
}

