#include <iostream>
#include <cassert>

using namespace std;

class MyString{
    public:
    char *m_data = nullptr;
    int m_length = 0;

    public:
    MyString(const char *source = ""){
        assert(source);

        for(int i=0;source[i] != '\0';i++) m_length++; //마지막 '\0'자리
        m_length++;
        m_data = new char[m_length];    //동적할당

        for(int i=0;i<m_length;i++) m_data[i] = source[i];

        m_data[m_length - 1] = '\0';
    }

    //기본 복사생성자는 주소만 복사하는데, 이런 경우를 얕은 복사(shallow copy)라 한다
    MyString(const MyString &source){
        cout << "Copy Constructor " << endl;

        m_length = source.m_length;

        if(source.m_data != nullptr){
            m_data = new char[m_length];

            for(int i=0;i<m_length;i++) m_data[i] = source.m_data[i];
        }else m_data = nullptr;
    }//아예 새로 주소를 할당받아 내용을 복사하는 것을 깊은 복사(deep copy)라 한다

    MyString& operator=(const MyString &source){
        cout << "Assignment operator " << endl;

        if (this == &source) //prevent self-assignment
            return *this;

        delete[] m_data;

        m_length = source.m_length;

        if(source.m_data != nullptr){
         m_data = new char[m_length];

            for(int i=0;i<m_length;i++) m_data[i] = source.m_data[i];
        }else m_data = nullptr;
    }//참고로 중복되는 부분은 악착같이 찾아서 함수로 뽑는게 좋다

    ~MyString(){
        delete[] m_data;
    }

    char* getString() { return m_data; }
    int getLength() { return m_length; }
};
int main(){
    /*start*/
    MyString hello("Hello");

    cout << (int*)hello.m_data << endl;
    cout << hello.getString() << endl;

    {
        MyString copy = hello;  //기본 복사생성자 호출
        //주소도 그냥 복사하기 때문에 같은 문자열을 지정하게된다
        copy = hello; //대입연산자 호출
        //같은 = 이라도 경우에 따라 다르게 호출하니 주의
        //안 헷갈리려면 복사생성자는 MyString copy(hello) 식으로 쓰자
        //아니면 delete로 임시로 막을 수도 있다
        //제일 좋은건 std::string이나 std::vector 쓰는 것
        cout << (int*)copy.m_data << endl;
        cout << copy.getString() << endl;
    }

    cout << hello.getString() << endl;
    //이미 기존 객체에 있던 문자열은 copy가 사라지며 반환됨.

    return 0;
}