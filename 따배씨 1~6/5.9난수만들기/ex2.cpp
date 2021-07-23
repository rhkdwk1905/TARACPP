#include <iostream>
#include <cstdlib>  //std::rand(), std::srand()
#include <ctime>    //std::time()

int getRandomNumber(int min, int max){
    static const double fraction = 1.0 / (RAND_MAX + 1.0);

    return min + static_cast<int>((max-min + 1)*(std::rand()*fraction));
}

using namespace std;

int main(int argc, const char** argv) {
    //std::srand(5323); //시드설정
    std::srand(static_cast<unsigned int>(std::time(0)));

    for (size_t i = 1; i <= 100; i++)
    {
        cout << std::rand() << "\t";

        if(i %5 == 0) cout << endl;
    }//시간에따른 랜덤값변화
    cout << endl;

    for (size_t i = 1; i <= 100; i++)
    {
        cout << getRandomNumber(5,8) << "\t";

        if(i %5 == 0) cout << endl;
    }//랜덤최대최소설정
    

    return 0;
}