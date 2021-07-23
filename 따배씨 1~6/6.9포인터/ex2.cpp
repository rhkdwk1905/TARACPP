#include <iostream>
#include <typeinfo>

using namespace std;



int main()
{
    /*start*/

    int x = 5;

    int *ptr_x = &x;
    //int* 는 정수 포인터형
    //참고로 코딩은 수학이 아니다.(int ptr_x != &&X)
    //int *ptr_x = &x, *ptr_y = &y 처럼 *은 각각 붙여줘야 하므로 오른쪽에 붙인다
    //참고로 포인터는 반드시 초기화시켜야 한다

    typedef int *pint;
    pint ptr_x = &x, ptr_y = &x;
    //위와 같이 하면 둘 다 포인터로 문제없다
    //헷갈리면 이렇게 돌려쓰기
    //포인터가 자료형을 갖는 이유는 값의 자료형을 알기위해

    //int *ptr_a = 0x004FFDA8; 보안상 막아놈

    cout << typeid(&x).name() << endl;
    //타입이 int*, pi(pointer to integer)임을 알 수 있다.
    //포인터는 자료형 상관없이 크기가 같다

    return 0;
}
