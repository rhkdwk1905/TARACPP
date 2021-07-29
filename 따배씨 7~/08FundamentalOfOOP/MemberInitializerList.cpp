#include <iostream>

using namespace std;

class B{
    private:
    int m_b;
    public:
    B(const int& m_b_in) : m_b(m_b_in)
    {
        cout << m_b << endl;
    }

    void print(){
        cout << m_b << endl;
    }
};

class Something{
    private:
    int     m_i;
    double  m_d;
    char    m_c;
    int     m_arr[5];
    B       m_bclass;

    public:
    Something() : m_i(7), m_d(3.14), m_c('a'), m_arr{1,2,3,4,5}, m_bclass(m_i-1)
    //m_i{1}와 같이 초기화도 가능하나, 중괄호는 형변환이 안된다
    {//위와 같이 초기화할 수 있다
       /*  m_i = 1;
        m_d = 3.14;
        m_c = 'a'; */
    }
    //초기화순서는 멤버>멤버초기화리스트>생성자 순

    void print(){
        cout << m_i << " " << m_d << " " << m_c << endl;
        for(auto& e: m_arr) cout << e << " ";
        cout << endl;
        m_bclass.print();
    }
};

int main(){
    /*start*/
    Something st;
    st.print();

    return 0;
}

