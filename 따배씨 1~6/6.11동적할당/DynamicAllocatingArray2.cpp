#include <iostream>

using namespace std;

int main(){
    int fixedArray[] = {1,2,3,4,5};
    //요소가 5개이므로 알아서 [5]크기를 가진다
    //int *array = new int[]{1,2,3,4,5};
    //동적할당은 위의 코드를 알아서 해주진 않는다
    int *array = new int[3]{1,2,3}; //이건된다

    //resizing
    //더큰 메모리를 받아오고, 기존값을 복사하고, 새로 추가할 것을 덧붙여야함
    //vector에서 다 해줌

    delete[] array;
    
    return 0;
}

