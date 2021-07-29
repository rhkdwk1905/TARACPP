#include <iostream>

using namespace std;

class Something{
    public:
    class _init
    {
        public:
         _init(){
             s_value = 1234;
         }
    };
    //static을 class내부에서 초기화하려면
    //innerclass에서 초기화하고, 해당 클래스로
    //static변수를 만들어주고 바깥에서 innerclass의 static변수를 초기화시켜야한다
    //이렇게 한 초기화는 바깥에서 초기화하는것보다 우선순위를 갖는다
    //결론은 그냥 밖에서 초기화하자

    private:
    static int s_value;
    int m_value;

    static _init s_initializer;

    public:
    //Something() : s_value(123) {}
    //static멤버는 클래스 내부에서 초기화가 불가능

    static int getValue(){
        //private static값에 접근할 수 있는 함수
        return s_value;
        //return this->s_value;
        //static함수는 this포인터 사용이 불가

        //return m_value;
        //객체별로 가지는 요소도 접근 불가
    }

    int temp(){
        return this->s_value;
    }
};

int Something::s_value = 1024;
//private여도 여기서 초기화 가능
Something::_init Something::s_initializer;
//innerclass를 이용한 static초기화

int main(){

    cout << Something::getValue() << endl;

    Something st1, st2;
    cout << st1.getValue() << endl;

    //class의 멤버함수도 포인터를 가져올 수 있다
    //int (Something::*fptr1)() = &(st1.temp);
    //객체별 함수포인터를 가져오는건 불가능
    //멤버값은 객체별로 따로 저장되지만 함수는 하나만 저장되기 때문
    int (Something::*fptr1)() = &Something::temp;

    cout << (st2.*fptr1)() << endl;
    //멤버함수포인터 사용방법
    //temp에 st2의 위치는 넘겨주고, st2의 멤버를 이용해 함수 작동

    int (*fptr2)() = &Something::getValue;
    //static함수는 Something::을 떼줘야 함수포인터로 바꿀 수 있다
    cout << fptr2() << endl;
    //실행시에도 앞에 객체가 붙지 않는다

    return 0;
}

