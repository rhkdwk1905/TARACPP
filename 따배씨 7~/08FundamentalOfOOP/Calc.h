#pragma once
#include <iostream>

//참고로 헤더파일엔 using을 안쓰는게 좋다

class Calc{

    private:
    int m_value;

    public:
    Calc(int init_value);

    Calc& add(int value);
    Calc& sub(int value);
    Calc& mult(int value);
    void print();
    //어떤 때는 header에 함수바디를 납두는게 나을 때도 있다
};