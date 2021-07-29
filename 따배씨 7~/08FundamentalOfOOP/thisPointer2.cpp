#include <iostream>

using namespace std;

class Calc{
    private:
    int m_value;

    public:
    Calc(int init_value) : m_value(init_value)
    {}

    Calc& add(int value) {m_value += value; return *this;}
    Calc& sub(int value) {m_value -= value; return *this;}
    Calc& mult(int value) {m_value *= value; return *this;}
    //자기 객체를 return하면 연속으로 함수를 사용할 수 있다!

    void print(){
        cout << m_value << endl;
    }
};

int main(){
    /*start*/
    Calc cal(10);
    cal.add(10).sub(1).mult(2).print();
    //일일이 함수 타이핑할 필요 없이 이어붙이면 된다
    //또한 위는 아래와 같다
    Calc &temp1 = cal.add(10);
    Calc &temp2 = temp1.sub(1);
    Calc &temp3 = temp2.mult(2);
    temp3.print();
    //이를 Chaining Member Function이라 한다
    //실전용보다는 간지용

    //참고로 이것도 된다
    Calc(10).add(10).sub(2).mult(3).print();


    return 0;
}

