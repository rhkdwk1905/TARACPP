#include <iostream>

using namespace std;

struct Employee //14 bytes
{
    short id;    //2 bytes
    int age;     //4 bytes
    double wage; //8 bytes
};

int main()
{
    Employee emp1;

    cout << sizeof(emp1) << endl;
    //실제론 16 bytes가 나온다
    //32bit 컴퓨터는 4 bytes 단위로 저장하고
    //64bit 컴퓨터는 8 bytes 단위로 저장하기 때문

    //따라서 낭비가 없도록 순서를 잘 짜주자

    return 0;
}