#include <iostream>

using namespace std;

void doSomething(int y)//변수 메모리에 5가 복사됨
{
    cout << "In func " << y << " " << &y << endl;
}

int main(){
    /*start*/
    doSomething(5);

    int x=6;

    cout << "In main " << x << " " << &x << endl;

    doSomething(x); //실제론 x자체가 아닌 값만 전달됨
    doSomething(x+1);

    return 0;
}

