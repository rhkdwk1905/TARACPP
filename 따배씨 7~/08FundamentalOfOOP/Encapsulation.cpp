#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date
{
    private: //기본, 클래스 내에서만 접근가능
        int m_month;
        int m_day;
        int m_year;

    public: //클래스 밖에서도 접근가능
        void setDate(const int& month, const int& day,const int& year){
            m_month = month;
            m_day = day;
            m_year = year;
        }//이 함수를 통해 private요소에 접근가능
        const int& getDay(){return m_day;}
        void copyFrom(const Date& original){
            m_month = original.m_month;
            m_day = original.m_day;
            m_year = original.m_year;
        }
};

int main(){
    /*start*/
    Date today;
    today.setDate(8,4,2025); //setter

    cout << today.getDay() << endl; //getter

    //getter, setter사용 이유: 코드가 간결해지고
    //나중에 변수명 바꾸기 편함

    Date copy;
    copy.copyFrom(today);

    return 0;
}