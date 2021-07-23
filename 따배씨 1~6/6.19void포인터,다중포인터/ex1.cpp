#include <iostream>

using namespace std;

int main()
{
    /*start*/
    int i = 5;
    float f = 3.2;
    char c = 'a';

    void *ptr = nullptr;

    ptr = &i;
    ptr = &f;
    //ptr = &c;
    //void포인터는 모든 자료형의 포인터가 될 수 있다

    int *ptr_i = &i;

    cout << ptr_i << endl;
    cout << ptr_i + 1 << endl;
    cout << ptr + 1 << endl;
    //void포인터는 크기 기준이 없어 포인터 연산이 불가능하다
    //현재는 버전업데이트로 그냥 1 더해주고 워닝뜬다

    cout << &f << " " << ptr << endl;
    //cout << *ptr << endl;
    //void포인터는 기존 자료형을 몰라 de-referencing이 안된다
    cout << *static_cast<float*>(ptr) << endl;
    //이렇게 float-pointer를 다시 de-referencing해주면 되긴 한다
    //다행히 요즘엔 이런 단점을 감수하면서 void pointer를 쓸 필욘 없다

    return 0;

    return 0;
}
