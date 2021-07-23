#include <iostream>

using namespace std;

int main(){
    const int value = 5;
    const int *ptr = &value;
    //변수에 const가 붙으면 포인터도 const가 붙어야한다
    //*ptr = 6 <-안됨

    cout << *ptr << endl;    

    int value2 = 7;
    const int *ptr2 = &value2;
    value2=10;

    cout << *ptr2 << endl;    
    //포인터만 const넣으면 변수 바꾸기는 됨

    ptr2 = &value;
    //이것도됨
    //int* 앞의 const는 주소를 고정하는게 아니라 가리키는 값을 고정
    //하지만 value2=10은 포인터로 바꾸는게 아니므로 됨(내로남불쌉지림)
    //따라서 const붙여도 주소값을 바꿀 수 있다

    //결론: 포인터에 다른변수 주소넣기 -> 가능
    //      포인터로 변수값 바꾸기 -> 불가능

    return 0;
}

