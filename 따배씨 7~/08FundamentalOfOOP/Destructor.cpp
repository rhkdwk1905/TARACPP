#include <iostream>

using namespace std;

class Simple{
    private:
        int m_id;

    public:
        Simple(const int& id_in) : m_id(id_in)
        {
             cout << "Constructor" << m_id << endl;
        }

        ~Simple()
        {
            cout << "Destructor" << m_id << endl;
        }//객체소멸 시 호출
};

int main(){
    /*start*/
    Simple *s1 = new Simple(0);
    Simple s2(1);

    delete s1;
    //delete로 해제하거나, {}를 벗어날 때 소멸자 호출

    return 0; 
}