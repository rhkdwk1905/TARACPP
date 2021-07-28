#include <iostream>
#include <string>

using namespace std;

void print(int x = 1024){//Default Parameter
//인자가 없을 때 기본값을 설정할 수 있다
    cout << x << endl;
}

//에러 void print2(int x, int y = 10, int z){}
//기본값은 오른쪽부터 순차적으로 있어야 한다(z > y > x)

void print2(int x=10, int y=20, int z=30){
    cout << x << " " << y << " " << z << endl;
}
//인자는 왼쪽부터 순차적으로 들어간다

void print3(int x=10, int y=20, int z=30);//in header
//Definition을 해줄 땐 헤더에만 기본값을 정의해줘야한다
void print3(int x, int y, int z){
    cout << x << " " << y << " " << z << endl;
}

void print4(std::string str){}
void print4(char ch = ' '){}

int main(){
    /*start*/
    print(10);
    print4(); //기본값이 있는 함수로 간다
    print2(100);

    return 0;
}