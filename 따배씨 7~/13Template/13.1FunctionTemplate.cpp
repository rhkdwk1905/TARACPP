#include <iostream>
#include "Cents.h"

template <typename T> //typename에 class도 사용 가능. 동작은 비슷

T getMax(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    std::cout << getMax(1, 2) << std::endl;
    std::cout << getMax(3.14, 2.123) << std::endl;
    std::cout << getMax(1.05f, 2.2f) << std::endl;
    std::cout << getMax('a', 'c') << std::endl;

    std::cout << getMax(Cents(5), Cents(9)) << std::endl;
    //template으로 작동하려면 해당 자료형에 필요한 기능등(<<, > 등)이 구현되어 있어야 한다.

    return 0;
}