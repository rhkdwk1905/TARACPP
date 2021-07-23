#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //std::array<int, 5> array;
    std::vector<int> array;
    //크기는 동적할당이 되는 메모리기 때문에 안써도 된다.

    std::vector<int> array2 = {1,2,3,4,5};
    cout << array2.size() << endl;
    //초기화도 가능하고, 크기도 알아서 맞춰준다

    array2 = {1,2,3};
    cout << array2.size() << endl;
    //요소를 줄이면, 크기도 같이 줄여준다(갓갓)

    for(auto& element : array2){
        cout << element << " ";
    }
    cout << endl;
    //auto&, for-each문도 잘 된다

    cout << array2.size() << endl;
    cout << array2[1] << endl;
    cout << array2.at(1) << endl;
    //vector는 다 잘된다(갓갓)

    int n = 10;
    array2.resize(n);
    cout << array2.size() << endl;
    cout << array2[6] << endl;
    cout << array2.at(6) << endl;
    //resize도 가능하며(갓갓), 빈곳은 0으로 채운다
    //작게 줄이는 것도 가능하며, 뒤를 날린다

    //심지어 delete로 지울 필요도 없다!

    return 0;
}