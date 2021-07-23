#include <iostream>

using namespace std;

void doSomething(double* ptr){
    if (ptr != nullptr)
    {
        cout << *ptr << endl;
    }
    else
    {
        cout << "Null ptr, do nothing" << endl;
    }

    cout <<"address of pointer variable in doSOmething() " << &ptr << endl;
    //파라미터는 값이 복사되므로 다른 메모리를 쓴다
}


int main()
{
    /*start*/
    double *ptr = 0;        // c-style
    double *ptr1 = NULL;    //
    double *ptr2 = nullptr; //modern C++

    double d = 123.4;

    doSomething(ptr);
    doSomething(&d);
    doSomething(nullptr);
    doSomething(NULL);

    cout <<"address of pointer variable in main() " << &ptr << endl;

    return 0;
}
