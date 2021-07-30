#include <iostream>
#include <cassert>

using namespace std;

class IntList
{
    private:
    int m_list[10]={1,2,3,4,5,6,7,8,9,0};

    public:
    int& operator[](const int index)
    {
        assert(index >= 0);
        assert(index < 10);
        return m_list[index];
    }

    const int& operator[](const int index) const
    {//const 버전 연산자
        assert(index >= 0);
        assert(index < 10);
        return m_list[index];
    }//if문보단 assert가 훨씬 빠르다
};

int main(){
    /*start*/
    IntList my_list;
    my_list[3] = 10;
    cout << my_list[3] << endl;

    IntList con_list;
    cout << con_list[3] << endl;

    IntList *ptr_list = new IntList;
    (*ptr_list)[3];
    //포인터로 만들면 de_referencing을 해야 인덱스에 접근 가능하다


    return 0;
}