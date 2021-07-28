#include <iostream>
#include <cassert>
#include <array>

using namespace std;

void printValue(const array<int, 5> &my_array, const int& ix){
    assert(0 <= ix && ix < my_array.size());
    cout << my_array[ix] << " " << my_array.size() <<  endl;
}

int main(){
    /*start*/
    array<int, 5> my_array{1,2,3,4,5};

    cout << my_array[5] << endl;
    
    printValue(my_array, 100);

    return 0;
}

