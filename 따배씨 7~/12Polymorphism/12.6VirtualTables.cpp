#include <iostream>

using namespace std;

class Base
{
public:
    //FunctionPointer *_vptr;
    //fun1에 virtual을 추가하면 포인터가 되므로 4byte를 먹는다.
    virtual void fun1(){};
    void fun2(){};
};

class Der : public Base
{
public:
    //FunctionPointer *_vptr;
    void fun1(){};
    void fun3(){};
};

int main()
{
    cout << sizeof(Base) << endl;
    cout << sizeof(Der) << endl;

    return 0;
}