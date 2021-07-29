#include <iostream>
#include <string>

using namespace std;

class Student
{
    private:
        int m_id;
        string m_name;

    public:
        Student(const string& name_in)
            : Student(0, name_in)
            {}//이런식으로 이름만 받아도 생성자로 초기화가 가능하다

        Student(const int& id_in, const string& name_in)
            : m_id(id_in), m_name(name_in)
            {}

        void print()
        {
            cout << m_id << " " << m_name << endl;
        }
};

int main(){
    /*start*/
    Student st1(0, "jack");
    st1.print();

    Student st2("dash");
    st2.print();

    return 0;
}

