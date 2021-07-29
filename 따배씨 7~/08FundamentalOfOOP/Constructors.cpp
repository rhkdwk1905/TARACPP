#include <iostream>

using namespace std;

class Fraction{
    private:
        int m_numerator;
        int m_denominator;

    public:
    //생성자가 없을 땐 디폴트 생성자가 작동
    //Fraction() {}
        Fraction(const int& num_in, const int& den_in)//생성자
        {
            m_numerator = num_in;
            m_denominator = den_in;

            cout << "Fraction() constructor" << endl;
        }//생성될 때 자동으로 호출되는 함수

        void print()
        {
            cout << m_numerator << " / " << m_denominator << endl; 
        }
};



int main(){
    /*start*/
    Fraction one_thirds(1,3);
    //Fraction frac; //생성자가 있을 땐 기본 생성자를 호출하지 못한다
    //따라서 기본생성자를 만들어줘야함
    one_thirds.print();

    Fraction frac2{1,3};
    //1. 요소가 public이면 요소에 값을 넣어 초기화
    //2. private면 생성자를 찾아 초기화
    //3. 자동형변환을 지원하지 않음
    Fraction frac3(1,3);
    //1. 맞는 생성자를 찾아 호출
    //2. 자료형이 다르면 생성자에 맞게 형변환
    
    return 0;
}