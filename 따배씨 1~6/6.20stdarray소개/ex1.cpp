#include <iostream>
#include <array>

using namespace std;

void printLength(array<int, 5> my_arr){
    //함수 인자로 넣을 때도 <자료형,크기>넣어줘야함
    cout << my_arr.size() << endl;
}

void printLength2(array<int, 5>& my_arr){
    //레퍼런스 사용 가능, 복사 안하고 그대로 쓸 수 있음
    //const array<int, 5>& my_arr 처럼 const도 사용가능
    cout << my_arr.size() << endl;
}

int main(){
    /*start*/
    int arr_old[5] = {1,2,3,4,5};

    std::array<int, 5> my_arr = {1,2,3,4,5};
    //array<자료형, 숫자>
    //함수 파라미터로 넘길 때 편하다

    my_arr = {0,1,2,3,4};
    //요소를 바로 변경할 수 있다
    my_arr = {0,1,2};
    //부족한 부분은 알아서 0으로 채워준다

    cout << my_arr[10] << endl;
    //범위를 넘지만 접근하므로 오류 가능성 큼
    //cout << my_arr.at(10) << endl; //[]아니라()
    //범위를 체크하고 넘으면 예외처리함(약간느림)
    cout << my_arr.size() << endl;
    //쉽게 크기 체크가능

    printLength(my_arr);

    return 0;
}

