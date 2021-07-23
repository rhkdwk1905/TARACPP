#include <iostream>
#include "header.h"

extern int a = 123;

void doSome(){

    std::cout << "hello world" << std::endl;

    std::cout << constants::pi << std::endl;

    std::cout << &constants::pi << std::endl;
}

//doSome() 함수를 사용하는 방법
//1. #include "ex3-1.cpp"
//2. void doSome(); 