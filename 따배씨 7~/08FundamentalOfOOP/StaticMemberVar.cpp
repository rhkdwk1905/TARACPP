#include <iostream>

using namespace std;

class Something{
    public:
    static int s_value;
    static const int s_value2 = 1;
    static constexpr int s_value3 = 2; //constexpr은 런타임이 아닌 컴파일 때 값이 확실히 결정되야 함
    //static const는 초기화 가능 but 바깥에서 대입 불가
    //같은 클래스면 다른 객체라도 static변수를 공유한다
};

int Something::s_value = 1; //static은 cpp파일에 정의해야함

int main(){
    /*start*/
    cout << &Something::s_value << " " << Something::s_value << endl;
    //객체가 생기기 전에도 존재(정적 메모리) 

    Something st1;
    Something st2;

    st1.s_value = 2;

    cout << &st1.s_value << " " << st1.s_value << endl;
    cout << &st2.s_value << " " << st2.s_value << endl;

    Something::s_value = 1024;

    cout << &Something::s_value << " " << Something::s_value << endl;


    return 0;
}

