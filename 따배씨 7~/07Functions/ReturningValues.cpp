#include <iostream>
#include <array>

using namespace std;

int getValue(int x)
{ //장점: 간단, 단점: 데이터 복사
    int value = x * 2;
    return value;
}

int* getValue2(int x) //이렇게하지마셈
{   //장점: 주소로받음,
    // 단점: 사라질변수를 디레퍼런싱하므로 불안정
    int value = x * 2;
    return &value;
}
//아주 가끔 배열 메모리 할당할 때 사용됨
int* allocateMemory(int size){
    return new int[size];
}

int& getValue3(int x) //이렇게도 하지마셈
{   //장점: 주소로받음, 변수처럼사용가능
    // 단점: 사라질 변수를 복사하므로 불안정
    int value = x * 2;
    return value;
}
int& get(array<int, 100>& my_array, int ix)
{
    return my_array[ix];
}//변수 이름인 것 처럼 함수를 만들 수 있다

//getvalue1, getvalue2함수는 사라질 메모리를 디레퍼런싱하므로 위험


int main()
{
    /*start*/
    int value = getValue(3);
    //int value2 = *getValue2(3); //Segmentation Fault
    //int value3 = getValue(5); //될 때도 있고 안될 때도 있음

    std::array<int, 100> my_array;

    my_array[30] = 10;

    get(my_array, 30) = 1024;
    get(my_array, 30) *= 10;

    cout << my_array[30] << endl;

    return 0;
}
