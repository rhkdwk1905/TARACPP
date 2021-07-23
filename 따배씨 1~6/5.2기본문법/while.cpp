#include <iostream>

using namespace std;

int main()
{
    int count = 0;

    Loop:
    {
        cout << count << endl;
        count++;

        if(count < 10) goto Loop;
    }

    return 0;
}