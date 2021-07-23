#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    /*동적할당배열은 for-each를 사용할 수 없지만,
    더 좋은 vector는 for-each를 사용할 수 있다*/
    vector<int> fibonacci = {0,1,414,2,3,3,5,8,13,21,24,55,89};    

    int max_number = numeric_limits<int>::lowest();

    for(const auto &n : fibonacci){
        max_number = std::max(max_number, n);
    }

    cout << max_number << endl;

    return 0;
}

