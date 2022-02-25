#pragma once

#include <assert.h> //for assert()
#include <iostream>

template <typename T, unsigned int T_SIZE>

class MyArray
{
private:
    //int m_length;
    T *m_data;

public:
    MyArray()
    {
        m_data = new T[T_SIZE];
    }

    MyArray(int length)
    {
        m_data = new T[length];
        m_length = length;
    }

    ~MyArray()
    {
        reset();
    }

    void reset()
    {
        delete[] m_data;
    }

    T &operator[](int index)
    {
        assert(index >= 0 && index < T_SIZE);
        return m_data[index];
    }

    int getLength()
    {
        return T_SIZE;
    }

    //nontypeParameters는 헤더파일의 클래스에 함께 넣는 것을 추천
    void print()
    {
        for (int i = 0; i < T_SIZE; i++)
        {
            std::cout << m_data[i] << " ";
        }
        std::cout << std::endl;
    }
};