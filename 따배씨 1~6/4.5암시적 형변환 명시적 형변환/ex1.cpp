#include <iostream>
#include <typeinfo>

int main()
{
    using namespace std;

    cout << typeid(4.0).name() << endl;
    //괄호 안의 datatype을 출력하는 함수

    int a = 123.0; //암시적 형변환(float>int)
    //컴파일러가 알아서 자료형 변경
    cout << typeid(a).name() << endl;

    double d1 = (double)12; //명시적 형변환(int>double)
    //직접 자료형 변경을 요구

    //numeric promotion(문제X)
    float a1 = 1.0f;
    double d = a;

    //numeric conversion(문제발생)
    int i = 30000;
    char c = i;
    cout << static_cast<int>(c) << endl;

    cout << 5u - 10 << endl; //암시적 형변환 문제

    /*자료형 우선순위
    long double > double > float > unsigned long long
    > long long > unsigned long > long > unsigned int
    >int (int가 가장 바뀌기 쉬움)*/

    //암시적 형변환을 명시적으로 바꿔주면 명확하다
    //int i = 4.0   -> int i = int(4.0);
    //              -> int i = (int)4.0;
    //              -> int i = static_case<int>(4.0);

    return 0;
}