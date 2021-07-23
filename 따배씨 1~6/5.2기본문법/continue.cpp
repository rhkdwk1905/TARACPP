#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
 
    int count(0);

    char ch;
    while(true){
        cin >> ch;

        cout << ch << " " <<count++ << endl;

        if(ch == 's')
            break;
    }

    return 0;
}