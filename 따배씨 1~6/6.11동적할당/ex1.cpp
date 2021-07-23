#include <iostream>

using namespace std;

int main(){
    /*stack보단 훨씬 큰 heap에 저장하는 방법*/
    int *ptr = new int{7}; //int크기공간의 주소 저장
    //포인터 생성, 7로 값 초기화
    
    cout << ptr << endl;
    cout << *ptr << endl;

    delete ptr; //메모리 반환
    ptr = nullptr; //반환한 값을 0으로 설정

    cout << "After Delete" << endl;
    if(ptr != nullptr){
        cout << ptr << endl;
        cout << *ptr << endl;
    }

    int *ptr2 = new (std::nothrow) int {7};
    //new가 실패하면 오류 대신 알아서 null을 넣음
    delete ptr2;


    int *ptr = new int{7};
    int *ptr2 = ptr;

    delete ptr;
    ptr = nullptr;
    //그 뒤 ptr2를 사용하면 오류가 난다.

    return 0;
}

