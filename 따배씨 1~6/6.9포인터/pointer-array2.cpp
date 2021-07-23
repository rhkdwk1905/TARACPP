#include <iostream>

using namespace std;

struct MyStruct
{
    int array[5] = {9,7,5,3,1};
    //구조체에 넣는 것도 가능
};

void doSomething(MyStruct ms){
    cout << sizeof(ms.array) << endl;
}

int main(){
    /*start*/
    MyStruct ms;
    cout << ms.array[0] << endl;

    return 0;
}

