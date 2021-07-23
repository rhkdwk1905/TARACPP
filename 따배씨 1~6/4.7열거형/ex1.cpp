#include <iostream>
#include <typeinfo>

//enum(enumeration, 열거) : 열거형
enum Color // user-defined data types
{
    COLOR_BLACK,
    COLOR_RED,
    COLOR_BLUE = -3,
    COLOR_WHITE,
    COLOR_PUPPLE,
    COLOR_GREEN, //쉼표 있어도 됨
}; //; 꼭 붙여줘야함
//마우스 갖다대면 숫자값으로 치환됨을 알 수 있음
//element들은 대문자가 국룰

enum Feeling
{
    HAPPY,
    JOY,
    TIRED,
    BLUE, //같은 이름은 가급적 안쓰는게 좋다
};

int main()
{
    using namespace std;

    Color paint = COLOR_BLACK;
    Color house(COLOR_BLUE);
    Color apple{COLOR_GREEN};

    cout << paint << " " << COLOR_BLACK << endl;
    cout << COLOR_RED << endl;
    cout << COLOR_BLUE << endl;
    cout << COLOR_WHITE << endl;
    //기본적으론 인덱스 값을 갖지만,
    //값을 지정하면 그 뒤는 1씩 오르며 값을 가진다

    if(COLOR_GREEN == COLOR_BLACK){
        cout << "Equal" << endl;
    }
    //같은 값을 가질 수도 있으니 주의
    //그러니 왠만하면 기본 지정해준 숫자로 쓰자 

    Color my_color = static_cast<Color>(3);
    //이런식으로 캐스팅도 가능하다
    
    //cin >> my_color; 이런식으로 직접은 못받는다
    int in_number;
    cin >> in_number;

    if(in_number == static_cast<Color>(1))
     my_color = static_cast<Color>(1);
    //이런식으로 우회해서 입력은 가능

    string str_input;

    std::getline(cin, str_input);

    if(str_input == "BLACK")
        my_color = static_cast<Color>(0);
    //이런식으로 문자입력받기도 가능


    return 0;
}
//보통 enum은 헤더파일에 넣어 쓴다.