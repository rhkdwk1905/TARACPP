#include <iostream>

using namespace std;

void printElements(int (&arr)[5]){ //레퍼런스 배열은 요소 개수가 포함되야함
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

struct Something{
    int v1;
    float v2;
};

struct Other{
    Something st;
};

int main(){
    /*start*/
    Other ot; 
    
    ot.st.v1 = 1.0;
    
    int &v1 = ot.st.v1;
    v1 = 1; //이름이 훨씬 짧아짐+효율도 그대로


    int value = 5;
    
    int *const ptr = &value;
    int &ref = value;
    //위의 둘은 동일하게 작동한다

    *ptr = 10;
    ref = 10;

    return 0;
}

