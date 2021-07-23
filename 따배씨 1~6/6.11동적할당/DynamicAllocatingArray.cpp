#include <iostream>

using namespace std;

int main(){
    /**/
    int length;

    cin >> length;

    int *array = new int [length];
    //int *array = new int [length]{};
    //위의 코드로 모든 요소를 0으로 초기화할 수 있다
    //int *array = new int [length]{1,2,3};
    //위의 코드는 3번째 요소까지만 초기화한다
    //메모리를 초과해서 초기화하려 하면 오류난다

    array[0] = 1;
    array[1] = 2;

    for(int i=0;i<length;i++){
        cout << array[i] << endl;
        cout << (uintptr_t)&array[i] << endl;
    }

    delete [] array;
    //여러개를 가진 배열을 반환시엔 앞에 []를 붙인다

    return 0;
}

