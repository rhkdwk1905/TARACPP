#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main(){
    /*start*/
    array<int, 10> my_arr = {1,6,2,3,4,6,9,3,5,6};

    for(auto& element : my_arr){
        cout << element << " ";
    }
    cout << endl;
    //aute&, for-each 둘 다 잘된다

    std::sort(my_arr.begin(), my_arr.end());

    for(auto &element : my_arr){
        cout << element << " ";
    }
    cout << endl;
    //sort도 잘된다

    //결론: 많은 기능(수정, 체크)을 지원하는 배열
    return 0;
}