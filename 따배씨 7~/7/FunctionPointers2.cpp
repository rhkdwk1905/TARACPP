#include <iostream>
#include <array>
#include <functional>

using namespace std;

bool isEven(const int &number)
{
    if (number % 2 == 0)
        return true;
    return false;
}

bool isOdd(const int &number)
{
    if (number % 2 == 1)
        return true;
    return false;
}

//typedef  bool (*chk_func_t)(const int &);
//1. 함수포인터 자료형이 길면 typedef로 줄여쓸 수 있다

using chk_func_t = bool (*)(const int &);
//2. using문도 사용할 수 있다. 이름이 없음에 주의

void printNumber(const array<int, 10> &my_array, chk_func_t chk_fcn = isEven)
{ //3. 함수포인터 역시 기본값을 넣을 수 있다
    for (auto element : my_array)
    {
        if (chk_fcn(element))
            cout << element;
    }
    cout << endl;
}

int main()
{
    /*start*/
    std::array<int, 10> my_array = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printNumber(my_array, isEven); //참고로 함수는 이름 자체가 포인터다
    printNumber(my_array, isOdd);  //따라서 앞에 *안붙여도 됨
    printNumber(my_array);

    return 0;
}
