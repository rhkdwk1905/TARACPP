#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    tryAgain:

    double x;

    cout << "Enter a non-negarive number" <<endl;
    cin >> x;

    if(x< 0.0)
        goto tryAgain;

    cout << sqrt(x) << endl;

    return 0;
}
//for, while, do-while등 요즘은 간편한 조건문이
//많아서 goto문은 잘 안쓴다