#include <iostream>

using namespace std;

int main(){
    /*start*/
    int *ptr = nullptr;
    int **ptrptr = nullptr;

    int value = 5;

    ptr = &value;
    ptrptr = &ptr;

    cout << ptr << " " << *ptr << " " << &ptr << endl;
    cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl;
    cout << **ptrptr <<  endl;
    //결론: 이중포인터는 포인터를 가리키는 포인터다

    int ***ppptr; 
    int ****pppptr;
    //실제론 이중포인터까지만 주로 쓴다
    //이중포인터도 행렬만들때 위주로 쓴다

    return 0;
}

