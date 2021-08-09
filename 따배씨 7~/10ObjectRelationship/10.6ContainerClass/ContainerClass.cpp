#include <iostream>
#include <vector>
#include <array>

using namespace std;

class IntArray
{
    private:
    int m_length = 0;
    int *m_data = nullptr;

    public:
    //Constructors
    IntArray(int* int_arr_in)
    {
        for(m_length=0;int_arr_in[m_length]!='\0';m_length++);
        cout << m_length << endl;
        m_data = new int(m_length+1);
        for(int i=0;int_arr_in[i]!='\0';i++) m_data[i] = int_arr_in[i];
        m_data[m_length] = '\0';
    }

    //Destructors
    ~IntArray()
    {
        for(int i=0;i<m_length;i++) m_data[i]=0;
        m_length=0;
        delete[] m_data;
    }

    //initailize()
    void initialize(int size)
    {
        for(int i=0;i<m_length;i++) m_data=0;
        delete[] m_data;
        m_data = new int(size);
        m_length=size;
    }

    //reset()
    void reset()
    {
        for(int i=0;i<m_length;i++) m_data=0;
        delete[] m_data;
        m_length=0;
    }

    //resize()
    void resize(int size_in)
    {
        int temp[m_length];
        for(int i=0;i<m_length;i++) temp[i]=m_data[i];
        delete[] m_data;
        m_data = new int(size_in);
        
        if(size_in < m_length){
            for(int i=0;i<size_in;i++) m_data[i]=temp[i];
            m_length = size_in;
        }
        if(size_in >= m_length){
            for(int i=0;i<m_length;i++) m_data[i]=temp[i];
            m_length = size_in;
        }
    }
    //insertBefore(const int &value, const int& ix)
    void insertBefore(const int &value, const int& ix)
    {
        if(m_length < ix) return;

        int temp[m_length];
        for(int i=0;i<m_length;i++) temp[i]=m_data[i];
        delete[] m_data;
        m_data = new int(m_length+1);

        for(int i=0;i<ix;i++) m_data[i]=temp[i];
        for(int i=ix;i<m_length;i++) m_data[i+1]=temp[i];
        m_data[ix]= value;
        m_length++;
    }

    //remove(const int& ix)
    void remove(const int& ix)
    {
        if(m_length <= ix) return;

        int temp[m_length];
        for(int i=0;i<m_length;i++) temp[i]=m_data[i];
        delete[] m_data;
        m_data = new int(m_length-1);

        for(int i=0;i<ix;i++) m_data[i]=temp[i];
        for(int i=ix;i<m_length-1;i++) m_data[i]=temp[i+1];
        m_length--;
    }

    //push_back(const int& value)
    void push_back(const int &value)
    {
        int temp[m_length];
        for(int i=0;i<m_length;i++) temp[i]=m_data[i];
        delete[] m_data;
        m_data = new int(m_length+1);

        for(int i=0;i<m_length;i++) m_data[i]=temp[i];
        m_data[m_length]= value;
        m_length++;
    }

    //print
    void print()
    {
        for(int i=0;i<m_length;i++) cout << m_data[i] << " ";
        cout << endl;
    }
};

int main(){
    /*start*/
    std::vector<int> int_vec;
    std::array<int, 10> int_arr;

    int arr[5] = {1,2,3,4,5};

    //IntArray my_arr{1,3,5,7,9};
    //my_arr.insertBefore(10,1);
    //my_arr.remove(3);
    //my_arr.push_back(13);

    IntArray iarr(arr);
    iarr.print();
    cout << "done1" << endl;
    iarr.insertBefore(10,1);
    iarr.print();
    cout << "done2" << endl;
    iarr.remove(3);
    iarr.print();
    cout << "done3" << endl;
    iarr.push_back(13);
    iarr.print();
    cout << "done4" << endl;

    //왜 처음부터 모든 new-delete를 불러오고 시작하는지 나는 알 수가 없다

    return 0;
}

