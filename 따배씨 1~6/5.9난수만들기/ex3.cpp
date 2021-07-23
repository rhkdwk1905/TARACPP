#include <iostream>
#include <ctime>
#include <random>

using namespace std;

int main(){
    std::random_device rd;
    std::mt19937_64 mersenne(rd()); //64비트 난수
    //난수 생성, 시드 계속 변경
    //mersenne은 그냥 변수이름
    std::uniform_int_distribution<> dice(1,6);
    //1~6이 동일한 확률로 나옴

    for (int count = 1; count <= 20; ++count){
        cout << dice(mersenne) << endl;
    }

    return 0;
}