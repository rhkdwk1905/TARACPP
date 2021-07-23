#include <iostream>
#include <algorithm>


#define MY_NUMBER "hello world"
#define MAX(a, b) ((a>b) ? a : b)
//#define LIKE_APPLE

int main()
{
    using namespace std;
    
    cout << MAX(3,5) << endl;
    cout << std::max(6, 8) << endl;
    #ifdef LIKE_APPLE
        cout << "Apple" << endl;
    #endif

    #ifndef LIKE_APPLE
        cout << "Orange" << endl;
    #endif

    return 0;
}