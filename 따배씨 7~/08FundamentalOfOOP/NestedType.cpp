#include <iostream>

using namespace std;


class Fruit{
    public:
    enum FruitType{
        APPLE, BANANA, CHERRY,
    };

    enum class FruitType2{
        ABOCADO, BERRY, COCONUT,
    };

    class InnerClass{

    };

    struct InnerStruct{

    };
    //결론: 다 집어넣을 수 있다

    private:
    FruitType m_type;

    FruitType2 m_type2;

    public:
    Fruit(FruitType type) : m_type(type) {}

    Fruit(FruitType2 type) : m_type2(type) {}

    FruitType getType() { return m_type; }

    FruitType2 getType2() { return m_type2; }
};

int main(){
    /*클래스 안에 포함된 자료형*/
    Fruit apple(Fruit::APPLE);
    Fruit abocado(Fruit::FruitType2::ABOCADO);

    if(apple.getType() == Fruit::APPLE){
        cout << "Apple" << endl;
    }

    if(abocado.getType2() == Fruit::FruitType2::ABOCADO){
        cout << "Abocado" << endl;
    }

    return 0;
}

