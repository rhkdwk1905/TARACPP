#include <iostream>

using namespace std;

class Cents
{
    private:
    int m_cents;

    public:
    Cents(int cents = 0) { m_cents = cents;}
    int getCents() const { return m_cents;}
    int& getCents() { return m_cents;}

    friend Cents operator+(const Cents &c1, const Cents &c2)
    {//함수오버로딩처럼 특정 인자에 대해 연산자를 지정할 수 있다
        return c1.getCents() + c2.getCents();
    }
    Cents operator-(const Cents &c2)
    {//friends를 떼고 멤버함수로 바꾸면 인자를 하나밖에 못받는다
        return Cents(this->m_cents - c2.m_cents);
    }
    //멤버함수로만 작성할 수 있는 연산자들
    //=, [...], (...), -> 
};

int main(){
    /*start*/
    Cents cents1(6);
    Cents cents2(8);

    Cents sum; //함수 인자에 기본값넣어서 기본생성자처럼 사용가능
    

    cout << (cents1 + cents2 + Cents(6) + Cents(10) - Cents(13)).getCents() << endl;

    // ?, ::, sizeof, ., .* 이 5가지 연산자는 오버로딩이 안된다
    //연산자 우선순위는 수학적 원리와 같다
    // ^는 연산순위가 매우 낮으므로 안하는게 속편하다

    return 0;
}

