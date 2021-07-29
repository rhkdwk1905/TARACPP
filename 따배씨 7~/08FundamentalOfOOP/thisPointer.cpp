#include <iostream>

using namespace std;

class Simple
{
    private:
        int m_id;

    public:
        Simple(int id)
        {
            setID(id);

            cout << this << endl;
            //this는 자신 객체를 가리키는 포인터
        }

        void    setID(int id) { m_id = id; }
        int     getID() { return m_id; }
};

int main(){
    /*start*/
    Simple s1(1), s2(2);
    s1.setID(2);
    s2.setID(4);
    //클래스 요소인 함수의 동작 원리는 아래와 같다
    //Simple::setID(&s2, 4); == s2.setID(4);

    cout << &s1 << " " << &s2 << endl;

    return 0;
}

