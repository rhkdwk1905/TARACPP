#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono> //시간재주는 라이브러리

using namespace std;

class Timer
{
    using clock_t = std::chrono::high_resolution_clock;
    using second_t = std::chrono::duration<double, std::ratio<1>>;

    std::chrono::time_point<clock_t> start_time = clock_t::now();

    public:
    void elapsed()
    {
        std::chrono::time_point<clock_t> end_time = clock_t::now();
 
        cout << std::chrono::duration_cast<second_t>(end_time - start_time).count() << endl;
    }
};//이 클래스 복사해서 갖다쓰면됨.

int main(){
    /*프로그램 실행시간 측정하기
    랜덤값을 벡터에 넣고, 정렬 시간을 측정*/
    random_device rnd_device;
    mt19937 mersenne_engine{ rnd_device()};

    vector<int> vec(10000);
    for(int i=0;i<vec.size();i++) vec[i] = i;

    std::shuffle(begin(vec),end(vec), mersenne_engine);

    //for(auto& e : vec) cout << e << " ";
    cout << endl;

    Timer timer;

    std::sort(begin(vec), end(vec));

    timer.elapsed(); //정렬 시 걸린 시간 출력
    //참고로 배포 시엔 release모드기 때문에 실행이 훨씬 빠르다
    //시간 잴때는 다양한 환경에서 여러번 측정하는게 좋다

    //for(auto& e : vec) cout << e << " ";
    cout << endl;

    return 0;
}

