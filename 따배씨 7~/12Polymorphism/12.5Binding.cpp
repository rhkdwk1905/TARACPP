#include <iostream>

using namespace std;

int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int main()
{
    int x, y;
    cin >> x >> y;

    int op;
    cout << "0: add, 1: subtract, 2: multiply" << endl;
    cin >> op;

    // static binding (early binding)
    // 변수 들이 미리 설정된 깔끔한 코드
    // 속도는 static > dynamic
    // 대신 코드의 유연성은 dynamic > static

    // int result;
    // switch (op)
    // {
    // case 1:
    //     result = add(x, y);
    //     break;
    // case 2:
    //     result = subtract(x, y);
    //     break;
    // case 3:
    //     result = multiply(x, y);
    //     break;

    // default:
    //     cout << "Error" << endl;
    //     break;
    // }

    // cout << result << endl;

    // Dynamic binding (late binding)
    int (*func_ptr)(int, int) = nullptr;
    switch (op)
    {
    case 0:
        func_ptr = add;
        break;
    case 1:
        func_ptr = subtract;
        break;
    case 2:
        func_ptr = multiply;
        break;
    }

    cout << func_ptr(x, y) << endl;

    return 0;
}
