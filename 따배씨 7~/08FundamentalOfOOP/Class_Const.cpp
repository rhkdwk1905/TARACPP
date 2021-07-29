#include <iostream>

using namespace std;

class Something
{
    public:
    int m_value = 0;

    void setValue(int value) { m_value = value; }
    int getValue() { return m_value; }
    int getValue2() const { return m_value; }

    Something() {
        cout << "Constructor" << endl;
    }

    Something(const Something& st_in)
    {//사실 구조체가 복사될 땐 Copy Constructor가 호출됨
        m_value = st_in.m_value;
        cout << "Copy Constructor" << endl;
    }
};

void print(const Something &st){
    //class가 복사됨에도 Constructor가 한 번만 호출됨
    cout << &st << endl;
    cout << st.m_value << endl;
}//레퍼런스를 쓰면 class도 복사 안하고 사용 가능

int main(){
    /*start*/
    const Something st;
    //class를 const로 만들면 내부 요소도 변경할 수 없다

    //st.setValue(3);

    //cout << st.getValue() << endl;
    //멤버함수가 const가 아니므로 사용 불가
    cout << st.getValue2() << endl;

    cout << &st << endl;
    print(st);

    return 0;
}

