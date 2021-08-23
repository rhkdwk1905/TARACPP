#include <iostream>

using namespace std;

//generalized class(일반화된 요소를 가진 class)
class Mother
{
    private: //private는 자식 클래스에도 허용이 안된다
    public:
    protected:
    int m_i;

    public:
    Mother() //밑에 생성자가 생겨 디폴트생성자가 사라져서 오류 발생함
        : m_i(0)
    {}

    Mother(const int& i_in)
        : m_i(i_in)
    {
        cout << "Mother constructor" << endl;
    }

    void setValue(const int& i_in)
    {
        m_i = i_in;
        
    }

    int getValue()
    {
        return m_i;
    }
};

//derived class(상속받는 class)
class Child : public Mother //Mother클래스 상속
//Child 클래스가 생성될 때, 내부적으로 Mother 클래스의 생성자를 같이 호출함.
{
    private:
    double m_d;

    public:
    Child(const int& i_in, const double &d_in)
        //: m_i(i_in), m_d(d_in) 1
        : Mother(i_in), m_d(d_in) // 1 대신 이렇게도 가능하다(이게 제일 좋음)
    {
        //1 방법보다 이 방법이 깔끔하고, 잘 작동된다.
        /* Mother::setValue(i_in);
        m_d = d_in; */
    }
    void setValue(const int& i_in, const double& d_in)
    {
        Mother::setValue(i_in); //직접 부모 클래스의 함수를 호출할 수 있다
        m_d = d_in;
    }

    void setValue(const double& d_in)
    {
        m_d = d_in;
    }

    double getValue()
    {
        return m_d;
    }
};

class Daughter : public Mother
{

};

class Son : public Mother
{

};

int main(){
    /*start*/
    Mother mother;
    mother.setValue(1024);
    cout << mother.getValue() << endl;

    Child child(1024, 128);
    /* child.mother.setValue(64);
    child.setValue(128); */
    cout << child.Mother::getValue() << endl;
    cout << child.getValue() << endl;
    //mother의 함수와 멤버를 기본적으로 쓸 수 있다
    //같은 이름을 가진 함수가 있을 땐 자신의 함수를 우선으로 한다

    return 0;
}

