#include <iostream>
#include <tuple>

using namespace std;

std::tuple<int, double> getTuple()
{
    int a = 10;
    double d = 3.14;

    return std::make_tuple(a, d);
}//여러 값을 return 받을 수 있음
#include <iostream>

using namespace std;

int main(){
    /*start*/
    

    return 0;
}


int main()
{
    /*start*/
    std::tuple<int, double> my_tp = getTuple();
    cout << std::get<0>(my_tp) << endl; //a
    cout << std::get<1>(my_tp) << endl; //d

    return 0;
}