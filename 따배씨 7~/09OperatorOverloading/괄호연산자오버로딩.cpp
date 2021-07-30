#include <iostream>

using namespace std;

class Accumulator{
    private:
    int m_counter = 0;

    public:
    int operator()(int i) { return (m_counter += i); }
};

int main(){
    /*start*/
    Accumulator acc;
    cout << acc(10) << endl;
    cout << acc(20) << endl; 
    //함수를 호출하듯 클래스 이용 가능   

    return 0;
}

