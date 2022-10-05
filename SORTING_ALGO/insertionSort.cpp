#include<bits/stdc++.h>
using namespace std;

void insertionSort(int *arr, int n){
    for(int i = 1; i < n ; i++){
        int temp = arr[i];
        int j = i-1;
        for( ; j >= 0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main(){
    int arr[] = {10, 5, 9, 6, 7};
    int size = sizeof(arr)/sizeof(int);
    
    insertionSort(arr, size);
    
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}