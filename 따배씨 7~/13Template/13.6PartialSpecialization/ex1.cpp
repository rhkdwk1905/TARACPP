#include <iostream>
#include <string.h>

using namespace std;

template <class T, int size>
class StaticArray_BASE
{
private:
    T m_array[size];

public:
    T *getArray() { return m_array; }

    T &operator[](int index)
    {
        return m_array[index];
    }

    void print()
    {
        for (int count = 0; count < size; ++count)
            std::cout << (*this)[count] << ' ';
        std::cout << endl;
    }
};

//StaticArray_BASE를 상속하는 클래스
//템플릿을 통째로 Specialization하는 것보다, 상속으로 처리하는게 편하다
template <class T, int size>
class StaticArray : public StaticArray_BASE<T, size>
{
};

//StaticArray를 상속하는 Specializion 클래스
//Specialization이 되었다. 차라리 멤버함수를 밖으로 빼는게 나을듯
template <int size>
class StaticArray<char, size> : public StaticArray_BASE<char, size>
{
public:
    void print()
    {
        for (int count = 0; count < size; ++count)
            std::cout << (*this)[count];
        std::cout << endl;
    }
};

// //Instantation Specialization for char
// //기존 print가 멤버함수가 되면 사용이 안된다.
// template <int size>
// void print(StaticArray<char, size> &array)
// {
//     for (int count = 0; count < size; ++count)
//         std::cout << array[count];
//     std::cout << endl;
// }

int main()
{
    /*start*/
    StaticArray<int, 4> int4;
    int4[0] = 1;
    int4[1] = 2;
    int4[2] = 3;
    int4[3] = 4;

    int4.print();

    StaticArray<char, 14> char14;
    char14[0] = 'H';
    char14[1] = 'e';
    //...
    strcpy(char14.getArray(), "Hello, World");
    //strcpy((char*)&char14[0], 14*sizeof(char), "Hello, World");
    //strcpy_s 는 VSStudio에 있는거라 Stantard C++이 아님

    char14.print();

    return 0;
}
