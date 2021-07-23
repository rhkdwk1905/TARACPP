#include <iostream>

using namespace std;

int main()
{
    int fiboancci[] = {0,1,1,2,3,5,8,13,21,34,55,89};

    //output
    for(int number : fiboancci){
        cout << number << " ";
    }//배열의 각 원소를 number에 순차적으로 넣어 반복
    cout << endl;

    //change array
    for(int number : fiboancci){
        number = 10;
    }

    //output2
    for(int number : fiboancci){
        cout << number << " ";
    }//위에서 배열요소를 바꿨음에도 바뀌지 않음
    //함수파라미터로 받기 때문에 for-each안의 배열은 복사된다
    cout << endl;

    //change array2
    for(int& number : fiboancci){
        number = 10;
    }//레퍼런스를 쓰면 실제 배열값을 바꿀 수 있다

    //change array2-1
    for(auto& number : fiboancci){
        number = 20;
    }//auto& 를 사용하면 더욱 편리하다
    //보통 값을 바꾸고 싶으면 auto&
    //값을 유지하고싶으면 const auto& 를 쓴다

    //output3
    for(int number : fiboancci){
        cout << number << " ";
    }
    cout << endl;

    return 0;
}