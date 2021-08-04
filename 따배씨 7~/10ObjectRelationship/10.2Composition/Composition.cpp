#include "Monster.h"

using namespace std;

int main(){
    /*start*/
    Monster mon1("Sanson", Position2D(0,0));
    cout << mon1 << endl;

    Monster mon2("Parsival", Position2D(4,5));
    cout << mon2 << endl;

    //while(1)  //game loop
    {
        //event
        mon1.moveTo(Position2D(1,1));
        cout << mon1 << endl;
    }

    return 0;
}