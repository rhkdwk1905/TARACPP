#include <iostream>
#include "Storage8.h"

using namespace std;

int main()
{
    /*start*/
    Storage8<int> intStorage;

    for (int count = 0; count < 8; ++count)
        intStorage.set(count, count);

    for (int count = 0; count < 8; ++count)
        std::cout << intStorage.get(count) << '\n';

    cout << "Sizeof Storage8<int> " << sizeof(Storage8<int>) << endl;

    //Define a Storage8 for bool
    Storage8<bool> boolStorage;
    for (int count = 0; count < 8; ++count)
        boolStorage.set(count, count);

    for (int count = 0; count < 8; ++count)
        std::cout << boolStorage.get(count) << '\n';

    //8바이트가 1바이트로 감소. Specialization을 이용하면 자원을 훨씬 효율적으로 사용할 수 있다.
    cout << "Sizeof Storage8<bool> " << sizeof(Storage8<bool>) << endl;

    return 0;
}
