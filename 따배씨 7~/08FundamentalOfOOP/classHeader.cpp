#include <iostream>
#include "Calc.h"

using namespace std;


int main(){
    /*start*/
    Calc cal(10);
    cal.add(10).sub(1).mult(2).print();
    Calc(10).add(10).sub(2).mult(3).print();


    return 0;
}

