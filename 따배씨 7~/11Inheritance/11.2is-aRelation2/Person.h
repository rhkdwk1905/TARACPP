#pragma once

#include <string>
#include <iostream>

class Person
{
    private:
    std::string m_name;
    
    public:
    Person()
        : m_name("No name")
    {}

    Person(const std::string & name_in = "No Name")
        : m_name(name_in)
    {}

    void setName(const std::string& name_in)
    {
        m_name = name_in;
    }

    std::string getName() const
    {
        return m_name;
    }

    void doNothing() const
    {
        std::cout << m_name << "  is doing nothing" << std::endl;
    }
    //header는 using namespace std를 안쓰는게 좋다
    //const함수로 바꿔주면 상수 클래스 객체에 대해서 호출할 수 있다.
};

//참고로 자식 클래스의 함수를 부모 클래스가 이용할 수는 없다