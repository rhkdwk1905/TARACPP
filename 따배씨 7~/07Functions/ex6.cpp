#include <iostream>

using namespace std;

void foo(const int *const ptr) //주소만 들어갈 수 있다
{//포인터도 변수이므로 주소값을 복사해온다
//따라서 int는 함수 안에서 바뀌지만 int*값은 안바뀐다
//주로 C스타일 코딩, 배열을 함수 인자로 부를 때 사용

    cout << *ptr << " " << ptr << " " << &ptr << endl;     

    // *ptr = 10;
    //const가 앞에 있으면 de-reference값을 수정 불가
}

int main(){
    /*start*/
    int value = 5;

    cout << value << " " << &value << endl;    

    int *ptr = &value;

    cout << &ptr << endl;

    foo(ptr);
    foo(&value);

    return 0;
}

