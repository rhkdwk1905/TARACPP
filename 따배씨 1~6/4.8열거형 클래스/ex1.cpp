#include <iostream>

int main()
{
    using namespace std;

    enum class Color
    {
        RED,
        BLUE,
    };

    enum class Fruit
    {
        BANANA,
        APPLE,
    };
    //enum class는 앞에 ::를 붙여야 요소에 접근가능
    //또한 자료형을 Color와 Fruit로 바꿔버린다
    //NAMESPACE랑 비슷하지만 다르니 주의

    Color color = Color::RED;
    Fruit fruit = Fruit::BANANA;

    if(color == fruit)
        cout << "Color is fruit ? " <<endl;

    return 0;
}