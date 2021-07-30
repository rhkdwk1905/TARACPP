#include <iostream>

using namespace std;

class Digit
{
    private:
    int m_digit;

    public:
    Digit(int digit = 0) { m_digit = digit; }

    //prefix
    Digit& operator++(){
        ++m_digit;
        return *this;
    }
    Digit& operator--(){
        --m_digit;
        return *this;
    }

    //postfix
    Digit operator++(int){//중복을 막기위한 더미
        Digit temp(m_digit); //temp라는 Digit 생성 후 값을 넣고 반환
        ++(*this); //실제 Digit은 1증가하지만(by prefix) 당장 반환되는게 temp이므로 눈속임 가능
        return temp;
    }
    Digit operator--(int){//중복을 막기위한 더미
        Digit temp(m_digit); //temp라는 Digit 생성 후 값을 넣고 반환
        --(*this); //실제 Digit은 1증가하지만(by prefix) 당장 반환되는게 temp이므로 눈속임 가능
        return temp;
    }

    friend std::ostream& operator<<(std::ostream &out, const Digit &Digit){
        out << Digit.m_digit;
        return out;
    }
};

int main(){
    /*start*/
    int a=10;
    cout << ++a << endl; //먼저 계산하고 출력
    cout << a << endl;
    cout << a++ << endl; //출력한 뒤 계산
    cout << a << endl;

    Digit d(5);
    cout << ++d << endl;
    cout << d << endl;
    cout << d++ << endl;
    cout << d << endl;
    cout << --d << endl;
    cout << d << endl;
    cout << d-- << endl;
    cout << d << endl;

    return 0;
}

