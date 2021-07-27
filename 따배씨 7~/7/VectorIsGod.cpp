#include <iostream>
#include <vector>

using namespace std;

//void printElement(int (&arr)[4])
    //레퍼런스로 넣을 땐 개수가 반드시 들어가야 함
    //보통 동적어레이를 쓰므로 class를 별도로 만들어서 보낸다
    //따라서 배열을 보낼 일은 별로 없음
void printElement(vector<int>& arr) //이게 훨씬 편하다
{
    cout << "벡터는 신이야" << endl;
}

int main(){
    /*start*/
    //int arr[]{1,2,3,4};
    vector<int> arr{1,2,3,4};

    printElement(arr);

    return 0;
}

