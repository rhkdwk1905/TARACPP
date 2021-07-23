#include <iostream>
#include <vector>

using namespace std;

int main()
{
    typedef double distance_t;
    //_t 는 자료형임을 표시
    //distance_t 자료형은 double자료형이다.

    double      my_distance;
    distance_t  home2work;
    distance_t  home2school;


    vector<pair<string, int>> pairlist_t;
    //(string, int) 페어 벡터의 복잡한 자료형을
    //pairlist_t라는 이름으로 줄임

    using pairlist_t = vector<pair<string,int>>;
    //위와 같은내용

    return 0;
}