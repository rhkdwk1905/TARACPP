#pragma once

#include <iostream>

template <class T>
class Storage
{
private:
    T m_value;

public:
    Storage(T value)
    {
        m_value = value;
    }

    ~Storage()
    {
    }

    void print()
    {
        std::cout << m_value << '\n';
    }
};

//클래스의 함수도 Special Instantation이 가능하다
template <>
void Storage<double>::print()
{
    std::cout << "Double Type ";
    std::cout << std::scientific << m_value << '\n';
}