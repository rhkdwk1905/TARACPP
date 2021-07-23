#include <iostream>

using namespace std;

int main(){
    /*start*/
    const int row = 3;
    const int col = 5;

    const int s2da[3][5] =
    {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };    

    int *matrix = new int[row*col];

    for(int r=0;r<row;r++){
        for(int c=0;c<col;c++){
            matrix[col*r + c] = s2da[r][c];
        }
    }//이중포인터보다 배열을 평면처럼 쓰는게 더 편하다

    for(int r=0;r<row;r++){
        for(int c=0;c<col;c++){
            cout << matrix[col*r + c] << " ";
        }
        cout << endl;
    }

    delete[] matrix;

    return 0;
}

