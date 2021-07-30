#include <iostream>
#include <cassert>

using namespace std;

class Fraction{
    private: 
    int m_numerator;
    int m_denominator;

    public:
    Fraction(char) = delete;
    //클래스(자료형) = delete; 해당 자료형을 받는 함수를 삭제함

    explicit Fraction(int num = 0, int den = 1)
        : m_numerator(num), m_denominator(den)
        {
            cout << "Constructor" << endl;
            assert(den != 0);
        }

    Fraction(const Fraction &fraction) //copy constructor
        : m_denominator(fraction.m_denominator), m_numerator(fraction.m_numerator)
    {
        cout << "Copy Constructor" << endl;
    }

    friend std::ostream& operator<<(std::ostream& out, Fraction& f){
        cout << f.m_numerator << " / " << f.m_denominator << endl;
        return out;
    }
};

Fraction doSomething(Fraction frac){
    cout << frac << endl;
}

int main()
{
    Fraction frac(7);
    doSomething(frac);
    doSomething(Fraction(7));
    //doSomething(7); //위 2개와 같이 실행된다.
    //이렇게 자동으로 요소를 바꿔주는걸 converting construct(변환생성자)라고 한다
    //Constructor에 explicit을 붙이면 변환생성자를 막을 수 있다
    
    //Fraction frac2('c');
    //delete로 인해 char형 인자는 받을 수 없다
    //참고로 new delete의 그것과 다르다

    return 0;
}