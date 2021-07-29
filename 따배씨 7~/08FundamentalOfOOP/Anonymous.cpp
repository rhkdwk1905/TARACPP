#include <iostream>

using namespace std;

class A
{
    public:
    int m_value;

    A(const int& input) : m_value(input){
        cout << "Constructor" << endl;
    }

    ~A(){
        cout << "Destructor" << endl;
    }
    void printDouble()
    {
        cout << m_value * 2 << endl;
    }
};

int main(){

     /* A().print();
    A().print(); */
    //각각 실행된 후 바로 사라짐

    A a(1);
    a.printDouble();
    //실행된 후 끝나면 객체가 사라짐

    A(1).printDouble();

    return 0;
}

