#include <iostream>

using namespace std;

class A; //forward declaration

class B{
    private:
    int m_value = 2;

    friend void doSomething(A& a, B& b);

    public:
    void func(A& a);
};

class A
{
    private: 
    int m_value = 1;

    friend void doSomething(A& a, B& b);
    //해당 함수의 private 접근을 허용
    //B가 밑에있으므로 여기선 확인이 안됨
    //따라서 전방선언을 해야함

    friend class B;
    //다른 클래스도 friend로 선언 가능
    friend void B::func(A& a);
    //다른 클래스의 일부에만 friend도 선언 가능
    //선언 순서 때문에 확인 불가능이면 선언만 하고 밖에 body를 적기
};

void B::func(A& a){
        cout << a.m_value << endl;
    }

void doSomething(A& a, B& b){
    cout << a.m_value << " " << b.m_value << endl;
}

int main(){
    /*start*/
    A a;
    B b;
    b.func(a);

    return 0;
}

