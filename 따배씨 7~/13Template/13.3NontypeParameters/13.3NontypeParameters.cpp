#include <iostream>
#include "MyArray.h"

using namespace std;

int main()
{
    /*start*/
    // std::vector<double> my_array; my_array.resize(100); 동적할당

    //아래 100은 동적할당이 아니므로 상수만 가능하다
    MyArray<double, 100> my_array;

    for (int i = 0; i < my_array.getLength(); ++i)
        my_array[i] = i * 0.6;

    my_array.print();

    return 0;
}
