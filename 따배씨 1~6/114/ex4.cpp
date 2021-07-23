#include<iostream>
#include "header.h"

void doSome();

int main()
{
    std::cout << constants::pi << std::endl;
    std::cout << &constants::pi << std::endl;

    doSome();

    return 0;
}
//같은 header.h에서 가져온 pi지만 주소가 다르다.