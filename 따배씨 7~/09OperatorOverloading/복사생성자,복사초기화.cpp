#include <iostream>
#include <cassert>

using namespace std;

class Fraction{
    private: 
    int m_numerator;
    int m_denominator;

    public:
    Fraction(int num = 0, int den = 1)
        : m_numerator(num), m_denominator(den)
        {
            assert(den != 0);
        }

    Fraction(const Fraction &fraction) //copy constructor
        : m_denominator(fraction.m_denominator), m_numerator(fraction.m_numerator)
    {
        cout << "Copy Constructor" << endl;
    }//copy를 막고싶으면 copy constructor를 private로 옮기면 된다

    friend std::ostream& operator<<(std::ostream& out, Fraction& f){
        cout << f.m_numerator << " / " << f.m_denominator << endl;
        return out;
    }
};

Fraction doSomething(){
    Fraction temp(1,2);
    cout << &temp << endl;
    return temp;
}

int main(){
    /*참고로,
    copy constructor: Fraction fr_copy(frac);
    copy initialize : Fraction fr_copy = frac;*/
    Fraction frac(3,5);    
    Fraction fr_copy(frac);
    Fraction fr_copy2 = frac;
    //재밌게도 둘 다 된다
    Fraction fr_copy3(Fraction(3,10));
    //이 경우 컴파일러가 알아서 fr_copy3(3,10)으로 동작한다

    cout << frac << " " << fr_copy << endl;
    cout << frac << " " << fr_copy2 << endl;
    cout << fr_copy3 << endl;
 
    Fraction result = doSomething();
    cout << &result << endl;
    cout << result << endl;
    //강의에선 temp와 result의 주소가 다르다 하지만,
    //내꺼에선 같게 나온다. 버전이 다른듯

    return 0;
}

