#include <iostream>

using namespace std;

unsigned int PRNG(){
    static unsigned int seed = 5523; //시드넘버

    seed = seed*1234 + 5342;

    return seed % 234;
}

int main(int argc, const char** argv) {
    
    for (int i = 0; i < 10; i++)
    {
       cout << PRNG() << "\t";

       if(i % 5 == 0) cout << endl;
    }
    
    
    return 0;
}