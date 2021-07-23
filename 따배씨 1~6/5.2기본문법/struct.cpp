#include <iostream>
#include <string>

using namespace std;

struct Person
{
    double  height; //각 요소는 멤버라 부름
    float   weight;
    int     age;
    string  name;

    void print()
    {
        cout << height << " "
        << weight << " "
        << age << " "
        << name << endl;
    }   //함수를 넣어서 객체별로 쓸 수 있다
};

struct Family
{
    Person me; //구조체 안에 구조체 넣기 가능
    Person mom, dad; //기본자료형처럼 사용가능
};

Person getMe()
{
    Person me{1.73, 62.5, 23, "Hoyeon"};
    return me;
}

int main()
{
    Person me{1.73, 62.5, 23, "Hoyeon"}; //요즘방식 초기화
    Person mom;
    {
        mom.height = 1.60; //.을 통해 멤버 선택 가능
        mom.weight = 55.0;
        mom.age = 55;
        mom.name = "Philhee";
    } //옛날방식 초기화

    me.print();

    Person dad(me); //me를 dad에 복사
    dad.print();
    mom = me; //me를 mom에 복사(비추천)
    mom.print();

    Person sister = getMe(); //리턴으로 받기도 가능
    sister.print();

    

    return 0;
}