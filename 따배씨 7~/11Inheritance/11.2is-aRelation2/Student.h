#pragma once

#include "Person.h"

class Student : public Person{ //꼭 public 넣어주자
    private:
    int m_intel; //intelligence

    public:
    Student(const std::string&  name_in = "No name", const int& intel_in = 0)
        : Person(name_in), m_intel(intel_in)
    {}

    void setIntel(const int& intel_in)
    {
        m_intel = intel_in;
    }

    int getIntel()
    {
        return m_intel;
    }

    void study()
    {
        std::cout << getName() << " is studying" << std::endl;
    }

    friend std::ostream& operator<<(std::ostream& out, const Student& student)
    { //const로 student를 받아오므로 getName을 const함수로 바꿔주면 됨
        out << student.getName() << " " << student.m_intel;
        return out;
    }
};
