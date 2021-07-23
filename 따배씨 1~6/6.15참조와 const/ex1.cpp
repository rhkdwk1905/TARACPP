#include <iostream>

using namespace std;

void doSomething(const int &a)
{
    cout << a << endl;
}

int main()
{
    /*start*/
    int x1 = 5;
    const int &ref1 = x1;
    //이건 됨

    const int x2 = 5;
    //int &ref2 = x2;이건 안됨(ref를 통해 x2를 바꿀 가능성이 있으므로)

    const int x3 = 5;
    const int &ref3 = x3;
    //이건 됨

    const int &ref4 = 3 + 4; //이것도됨
    //const int 대신 const int& 를 넣는 이유는 함수 인자로 편리해서
    //함수 인자로 숫자나 식을 넣을 수 있다

    doSomething(x3 + 6 * 8);

    return 0;
}
