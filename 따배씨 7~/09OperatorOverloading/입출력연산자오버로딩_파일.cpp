#include <iostream>
#include <fstream>

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

    friend std::ostream& operator<<(std::ostream &out, const Point &pt)
    {
        out << "( " << pt.m_x << " " << pt.m_y << " " << pt.m_z << " )";

        return out;
    }
    friend std::istream& operator>>(std::istream &in, Point &pt)
    {
        in >> pt.m_x >> pt.m_y >> pt.m_z;

        return in;
    }
};

int main()
{
    /*start*/
    ofstream of("out.txt"); //파일열기

    Point p1(0.0, 0.1, 0.2), p2(3.4, 1.5, 2.3);

    cout << p1 << p2 << endl;
    of << p1 << p2 << endl; //파일에 작성

    cin >> p1 >> p2;
    cout << p1 << p2 << endl;

    of.close(); //파일 닫기

    //C보다 아ㅏㅏㅏㅏㅏㅏ주 편하다

    return 0;
}
