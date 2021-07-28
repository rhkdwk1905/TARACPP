#include <iostream>
#include <cstdarg> //for ellipsis

using namespace std;

double findAvr(int count, ...) //인자 개수, 인자들
{
    double sum = 0;

    va_list list; //문자열로 각 인자를 받음

    va_start(list, count);
    //사용 전에 va_start(인자, 인자개수); 필수

    for(int arg=0;arg<count;arg++){
        sum += va_arg(list, int);
        //list의 값을 int형으로 변환하여 사용
        //va_arg는 실행된 뒤 알아서 다음 값을 가리킨다
    }

    va_end(list);
    //사용 이후엔 va_end(인자); 필수

    return sum / count;
}

int main(){
    /*start*/
    cout << findAvr(1,1,2,3,"hello",'c') <<endl;
    cout << findAvr(3,1,2,3) <<endl;
    cout << findAvr(5,1,2,3,4,5) <<endl;
    cout << findAvr(10,1,2,3,4,5) <<endl; //쓰레기값이 포함됨

    return 0;
}

