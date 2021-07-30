#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

class Cents
{
    private:
    int m_cents;

    public:
    Cents(int cents = 0) { m_cents = cents; }
    int getCents() const {return m_cents;}
    int& getCents() {return m_cents;}

    friend bool operator==(const Cents& cents1, const Cents& cents2)
    {
        if(cents1.m_cents == cents2.m_cents) return true;
        return false;
    }

    friend bool operator!=(const Cents& cents1, const Cents& cents2)
    {
        if(cents1.m_cents != cents2.m_cents) return true;
        return false;
    }

    friend bool operator<=(const Cents& cents1, const Cents& cents2)
    {
        if(cents1.m_cents <= cents2.m_cents) return true;
        return false;
    }

    friend bool operator>=(const Cents& cents1, const Cents& cents2)
    {
        if(cents1.m_cents >= cents2.m_cents) return true;
        return false;
    }

    friend bool operator>(const Cents& cents1, const Cents& cents2)
    {
        if(cents1.m_cents > cents2.m_cents) return true;
        return false;
    }

    friend bool operator<(const Cents& cents1, const Cents& cents2)
    {
        if(cents1.m_cents < cents2.m_cents) return true;
        return false;
    }//std::sort 사용시엔 < 이거만 만들면 된다

    friend std::ostream& operator<<(std::ostream &out, const Cents &cents){
        out << cents.m_cents;
        return out;
    }
};

int main()
{
    Cents cents1(6);
    Cents cents2(6);

    if(cents1 == cents2) cout << "Equal" << endl;
    //비교연산자를 만들면 클래스 객체도 비교 가능

    vector<Cents> arr(20);
    for(int i=0;i<20;i++) arr[i].getCents() = i;

    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(arr.begin(), arr.end(), g);

    for(auto &e : arr) cout << e << " ";
    cout << endl;

    std::sort(begin(arr), end(arr));
    //Cents끼리 기존 비교연산자 사용이 불가능

    for(auto &e : arr) cout << e << " ";
    cout << endl;

    return 0;
}