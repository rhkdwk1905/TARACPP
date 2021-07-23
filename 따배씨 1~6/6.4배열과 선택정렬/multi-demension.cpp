#include <iostream>

using namespace std;

int main(){
    /*start*/
    const int num_rows = 3;
    const int num_columns = 5;

    for(int row=0;row<num_rows;row++){
        for(int col=0;col<num_columns;col++){
            cout << ' [ ' << row << ' ] ' << '[ ' << col << ' ] ' << '\t';
        }
        cout << endl;
    }   
    cout << endl;

    int array[num_rows][num_columns] = 
    {//num_rows는 생략 가능하지만, columns는 꼭 필요하다
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };

    for(int row=0;row<num_rows;row++){
        for(int col=0;col<num_columns;col++){
            cout << &array[row][col] << '\t';
        }
        cout << endl;
    }   
    cout << endl;

    return 0;
}