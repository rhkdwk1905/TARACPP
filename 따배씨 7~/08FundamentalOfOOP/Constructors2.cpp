#include <iostream>

using namespace std;

class Second{
    public:
    Second(){
        cout << "class Second constructor()" << endl;
    }
};

class First{
    Second sec;

    public:
    First(){
        cout << "class First constructor()" << endl;
    }
};

int main(){
    /*start*/
    First fir;
    //Second가 먼저 만들어지고 First가 만들어진다
    //멤버를 먼저 초기화해야 First가 작업할 수 있기 때문

    return 0;
}

