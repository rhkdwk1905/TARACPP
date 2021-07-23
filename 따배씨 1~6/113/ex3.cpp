#include <iostream>
#include "MyConst.h"

int main()
{
    double radius;
    std::cin >> radius;
    double circumference = 2.0 * constants::pi;

    std::cout << circumference;

    return 0;
}