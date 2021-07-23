#include <iostream>

using namespace std;

int main(){
    /*start*/
    int len;
    int arr[20];
    
    cin >> len;
    for(int i=0;i<len;i++){
        cin >> arr[i];
    }

    int min=0;
    int temp;
    for(int i=0;i<len;i++){
        min = i;
        for(int j=i+1;j<len;j++){
            if(arr[j]>arr[i]) continue;
            if(arr[min]>arr[j]) min = j;
        }
        if(min == i) continue;
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    for(int i=0;i<len;i++) cout << arr[i] << "\t";

    return 0;
}

