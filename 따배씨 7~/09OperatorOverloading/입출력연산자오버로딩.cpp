#include <iostream>

using namespace std;

class Point{
private:
    double m_x, m_y, m_z;

public:
    Point(double x = 0.0, double y = 0.0, double z = 0.0)
        : m_x(x), m_y(y), m_z(z)
    {
    }

    double getX() { return m_x; }
    double getY() { return m_y; }
    double getZ() { return m_z; }

    /*  void print(){
        cout << m_x << " "<< m_y << " "<< m_z << endl;
    } */

    friend std::ostream &operator<<(std::ostream &out, const Point &pt)
    {//입출력연산자 오버로딩은 형식이 조금 복잡하니 참고
        out << "( " << pt.m_x << " " << pt.m_y << " " << pt.m_z << " )";

        return out; //Chaining이 가능함
    }//첫번째 인자가 ostream이므로 멤버함수로 만들 수 없음.
    //따라서 friend로 만들어서 pt.붙여줘야함
};

int main()
{
    /*start*/
    Point p1(0.0, 0.1, 0.2), p2(3.4, 1.5, 2.3);

   /*  p1.print();
    p2.print(); */

    cout << p1 << p2 << endl;

    return 0;
}
