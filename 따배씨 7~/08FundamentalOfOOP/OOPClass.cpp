#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Friend{
    public: //접근 지정자(access specifier)
    //public, private, protected 세가지가 있음
        string m_name;
        string m_address;
        int age;
        double height;
        double weight;

        void print(){
            cout << m_name << " " << m_address << " " << age << 
            " " << height << " " << weight << endl;
        }
};
//보통 struct는 데이터를 묶는데 쓰고,
//class는 기능을 함께 포함시킬 때 쓴다
//결론: 객체란? 데이터와 기능을 포함 -> 주로 class사용
//코드는 짧고 간결할수록 좋다

int main(){
    /*start*/    
    Friend jj{"jack", "Uptown", 2, 30, 15}; //instanciation, instance

    jj.print();

    vector<Friend> my_friends;
    my_friends.resize(2);

    for(auto &e : my_friends){
        e.print();
    }

    return 0;
}

