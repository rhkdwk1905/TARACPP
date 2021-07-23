#include <iostream>

namespace a
{
    int my_var(10);
}

namespace b
{
    int my_var(20);
}

int main()
{
     using namespace std;

    /*using namespace a;
    using namespace b;

    cout << my_var << endl; 모호성 에러 */

    //보통 괄호로 감싸 영역을 정한다.
    {
        using namespace a;
        cout << my_var << endl;
    }

    {
        using namespace b;
        cout << my_var << endl;
    }
    //가급적 using은 영역 안에만 설정한다

}