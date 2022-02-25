#include <iostream>
//#include "Storage.h";

using namespace std;

template <typename T>
T getMax(T x, T y)
{
    return (x > y) ? x : y;
}

//별도의 자료형을 지정하여 동작을 변경할 수 있다
template <> //T가 필요하지 않으므로 빈칸
char getMax(char x, char y)
{
    cout << "Warning : comparing chars" << endl;

    return (x > y) ? x : y;
}

int main()
{
    /*start*/
    //<double>을 넣음으로서 instantiation을 강제로 double로 할 수 있다
    cout << getMax<double>(1, 2) << endl;

    cout << getMax('a', 'b') << endl;

    // Storage<int> nValue(5);
    // Storage<double> dValue(6,7);

    // nValue.print();
    // dValue.print();

    return 0;
}
