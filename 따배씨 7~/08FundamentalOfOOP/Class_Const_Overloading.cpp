#include <iostream>
#include <string>

using namespace std;

class Something
{
    public:
    string m_value = "Default";

    const string& getValue() const { 
        cout << "Const version" << endl;
        return m_value; }
        //const 함수는 리턴도 const로 받는게 일반적
    string& getValue() { 
        cout << "non-const version" << endl;
        return m_value; }
};

int main(){
    /*start*/
    Something st;
    st.getValue();

    const Something st2;
    st2.getValue();
    //const 유무에 따라 호출하는 함수가 다르다
    //따라서 오버로딩이 가능하다
    //const가 있으면 요소를 바꿀 수 없다

    return 0;
}

