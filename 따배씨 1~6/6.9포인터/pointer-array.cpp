#include <iostream>

using namespace std;

void printArray(int array[]) //int *array와 같다
{
    cout << sizeof(array) << endl; //4
    cout << *array << endl;
    *array = 100;
}

int main(){
    /*start*/
    int array[5] = {1,2,3,4,5};
    char name[10];
    int a= 5;
    int *ptr = &a;

    cout << sizeof(array) << endl; //20
    cout << sizeof(name) << endl; //10
    cout << sizeof(ptr) << endl; //4   

    cout << endl;
    cout << array[0] << endl;
    printArray(array); 
    cout << array[0] << endl;
    //포인터로 바꾸면 함수 나와도 값이 유지됨
    //C++에선 이거하려면 포인터보단 레퍼런스로 쓴다
    return 0;
}

