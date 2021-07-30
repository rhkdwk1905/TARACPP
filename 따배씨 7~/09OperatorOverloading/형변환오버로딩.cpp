#include <iostream>

using namespace std;

class Cents
{
    private:
    int m_cents;

    public:
    Cents(int cents = 0) { m_cents = cents; }
    int getCents() const {return m_cents;}
    int& getCents() {return m_cents;}

    operator int(){
        cout << "cast here" << endl;
        return m_cents;
    }//int가 필요한 함수에 Cents를 인자로 넣으면 int로 형변환될 때 호출됨

    friend std::ostream& operator<<(std::ostream &out, const Cents &cents){
        out << cents.m_cents;
        return out;
    }
};

void printInt(const int &value){
    cout << value << endl;
}

int main(){
    /*start*/
    Cents cents(7);
    
   /*  int value = (int)cents;
    value = int(cents);
    value = static_cast<int>(cents);
    위 셋 모두 cents를 int로 바꿀 때 형변환오버로딩사용*/

    printInt(cents); 

    return 0;
}

