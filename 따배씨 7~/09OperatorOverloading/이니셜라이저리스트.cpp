#include <iostream>
#include <cassert>
#include <initializer_list>


using namespace std;

class IntArray
{
    private:
    unsigned m_length = 0;
    int *m_data = nullptr;

    public:
    IntArray(unsigned length)
        : m_length(length){
            m_data = new int[length];
        }

    IntArray(const std::initializer_list<int> &list)
        : IntArray(list.size()){
            int count = 0;
            for(auto &element : list){
                m_data[count] = element;
                ++count;
            }

            /* for(unsigned count=0;count<list.size();++count)
                m_data[count] = list[count]; //error */
                //initializer_list는 []를 지원하지 않기 때문
                //하지만 for each문은 지원한다
        }

    //Todo: overload operator =
    IntArray& operator=(const IntArray& source){
        cout << "Assignment operator " << endl;

        if (this == &source) //prevent self-assignment
            return *this;

         delete[] m_data;

        m_length = source.m_length;

        if(source.m_data != nullptr){
         m_data = new int[m_length];

            for(int i=0;i<m_length;i++) m_data[i] = source.m_data[i];
        }else m_data = nullptr;
    }

    ~IntArray(){
        delete this->m_data;
    }

    friend ostream& operator<<(ostream& out, IntArray& arr){
        for(unsigned i=0;i<arr.m_length;i++) out << arr.m_data[i] << " ";

        out << endl;
        return out;
    }
};

int main(){
    /*start*/
    int my_arr1[5] = {1,2,3,4,5};
    int *my_arr2 = new int[5]{1,2,3,4,5};

    auto il = {10,20,30};
    //initializer_list 로 잡힘

    IntArray int_array = {1,2,3,4,5};
    IntArray int_array2 {1,2,3,4,5,6,7};
    cout << int_array << endl;
    cout << int_array2 << endl;

    int_array = int_array2;
    cout << int_array << endl;

    return 0;
}

