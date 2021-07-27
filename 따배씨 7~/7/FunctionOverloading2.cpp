#include <iostream>

using namespace std;

typedef int my_int;

void print(int x){}
void print(my_int x){}
//둘은 같은 타입으로 인식됨

void print(char *value){}
void print(int value){}

int main(){
    /*start*/
    print(0);
    print('a'); //int인지 char*인지 애매>int로 인식함
    print("a"); //char*로 인식
    //따라서 사용하려는 모든 자료형에 대해 함수를 만드는게 좋다
    //애매하면 ambiguous에러가 뜸
    //아니면 앞에 자료형을 넣어주기

    return 0;
}