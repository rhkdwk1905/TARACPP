#pragma once
#include <string>
#include "Position2D.h"

class Monster{
    private:
    std::string m_name;
    Position2D m_location;
    //다른 클래스에도 쓸 것 같으면 되도록 빨리 서브클래스로 바꾸는게 좋음
    //하위 클래스에서 어떤 일이 벌어지는지는 안보일수록 좋다
    /* int m_x;    //location
    int m_y; */

    public:
    Monster(const std::string name_in, const Position2D & pos_in)
        : m_name(name_in), m_location(pos_in) 
    {}

    void moveTo(const Position2D & pos_target)
    {
        m_location.set(pos_target);
    }

    friend std::ostream & operator<<(std::ostream& out, const Monster& monster){
        out << monster.m_name << " " <<  monster.m_location;
    }
};