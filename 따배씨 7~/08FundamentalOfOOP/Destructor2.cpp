#include <iostream>

using namespace std;

class intArr{
    private:
        int *m_arr = nullptr;
        int m_length = 0;

    public:
        intArr(const int length_in)
        {
            m_length = length_in;
            m_arr = new int[m_length];

            cout << "constructor" << endl;
        }

        int size() { return m_length; }

        ~intArr()
        {
            if(m_arr != nullptr) delete[] m_arr;
            cout << "delete" << endl;
        }//소멸자는 멤버의 동적할당을 해제하는 방식으로도 사용할 수 있다
        //차라리 벡터 쓰는것도 좋다
};

int main(){
    /*start*/
    intArr arr1(100);

    return 0;
}

