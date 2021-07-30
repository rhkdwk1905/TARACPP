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

class Dollar{
    private:
    int m_dollars;
    
    public:
    Dollar(const int &input) : m_dollars(input) {}

    operator Cents()
    {//operator 뒤에 자료형() 만 붙이면 된다
        return Cents(m_dollars*100);
    }
};

void printInt(const int &value){
    cout << value << endl;
}

int main(){
    /*start*/
    Dollar dol(2);

    Cents cents = dol;

    printInt(cents);

    return 0;
}

