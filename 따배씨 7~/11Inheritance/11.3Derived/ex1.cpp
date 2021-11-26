#include <iostream>

using namespace std;

class Mother
{
    public:
    int m_i;

    Mother()
        : m_i(1)
    {
        cout << "Mother construction" << endl;
    }
};

class Child : public Mother
{
    public:
    double m_d;

    public:
    Child()
        : /*Mother(), 가 생략됨*/ m_d(1.0)
    {
        m_i = 1024;
        cout << "Child construction" << endl;
    }
};

int main()
{
    Child c1;

    return 0;
}

/* child는 mother에 있는 것을 다 초기화한 다음에야 초기화된다. 즉, Child생성자 들어옴 -> Mother 생성자 들어옴 -> Mother 내용 초기화 -> Mother 함수 실행 -> Child 내용 초기화 -> Child 함수 실행 이 순서임. 따라서 Child에서 인라인으로 Mother의 변수에 접근할 수는 없지만, Child의 생성자 함수에선 접근이 가능함.*/