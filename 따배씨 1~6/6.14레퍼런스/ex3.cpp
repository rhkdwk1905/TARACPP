#include <iostream>

using namespace std;

void doSomething(int n){
    n = 10;
    cout << "doSomething : " << n << " " << &n << endl;
    //여기서 n은 '복사된' n이다
}

void doSomething2(int &n){
    n = 10;
    cout << "doSomething2 : " << n << " " << &n << endl;
    //여기서 n은 '같은 주소'의 n이다
}

void doSomething3(const int &n){
    //n = 10;
    cout << "doSomething3 : " << n << " " << &n << endl;
    //앞에 const를 넣으면 함수에서 n값이 바뀌는걸 막을 수 있다
}

int main(){
    /*start*/
    int n=5;
    cout << n << "\t" << &n << endl;

    doSomething(n);

    cout << n << endl;    

    doSomething2(n);

    cout << n << endl;    
    //포인터보다 편리하고, 효율도 좋다

    return 0;
}
