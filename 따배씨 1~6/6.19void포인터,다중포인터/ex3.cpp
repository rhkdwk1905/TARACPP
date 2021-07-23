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

    int **matrix = new int*[row];

    for(int r=0;r<row;r++){
        matrix[r] = new int[col];
    }

    for(int r=0;r<row;r++){
        for(int c=0;c<col;c++){
            matrix[r][c] = s2da[r][c];
            cout << matrix[r][c] << " ";
        }
        cout << endl;
    }

    for(int r=0;r<row; r++)
        delete[] matrix[r];

    delete[] matrix;

    return 0;
}