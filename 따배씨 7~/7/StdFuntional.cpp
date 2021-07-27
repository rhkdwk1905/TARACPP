#include <iostream>
#include <functional>
#include <array>

using namespace std;

bool isEven(const int& number){
    if(number%2==0) return true;
    return false; 
}

bool isOdd(const int& number){
    if(number%2==1) return true;
    return false; 
}

void printNumbers(const array<int,10> &my_array,
    std::function<bool(const int&)> chk_func)
    {
        for(auto element : my_array){
            if(chk_func(element)) cout << element;
        }
        cout << endl;
    }

int main(){
    /*start*/
    std::array<int, 10> my_array{0,1,2,3,4,5,6,7,8,9};

    std::function<bool(const int&)> func_ptr=isEven;
    //function<리턴값(인자)> 로 간단히 함수포인터를
    //자료형으로 표현 가능하다

    printNumbers(my_array, func_ptr);

    func_ptr = isOdd;

    printNumbers(my_array, func_ptr);

    return 0;
}

