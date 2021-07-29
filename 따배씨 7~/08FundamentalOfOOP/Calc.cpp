#include "Calc.h"

using namespace std;
//헤더에 연관되는 CPP파일은 using써도됨

Calc& Calc :: add(int value){
    m_value += value;
    return *this;
}

Calc& Calc :: sub(int value){
    m_value -= value;
    return *this;
}

Calc& Calc :: mult(int value){
    m_value *= value;
    return *this;
}

void Calc :: print(){
        cout << m_value << endl;
}

Calc :: Calc(int init_value)
    : m_value(init_value)
    {}