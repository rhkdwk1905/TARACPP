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

    Cents operator- () const{
        return Cents(-m_cents);
    }

    bool operator! () const{
        return (m_cents == 0 ? true : false);
    }

    friend std::ostream& operator<<(std::ostream &out, const Cents &cents){
        out << cents.m_cents;
        return out;
    }
};

int main()
{
    /*start*/
    Cents cents1(6);
    Cents cents2(0);

    int a = 3;

    cout << cents1 << endl;
    cout << -cents1 << endl; //이 때 -, !를 단항연산자라 한다
    cout << -Cents(-10) << endl;

    auto temp = !cents1;
    cout << !cents1 << " " << !cents2 << endl;

    return 0;
}
