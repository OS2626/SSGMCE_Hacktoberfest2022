#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        int minIndex = i;
        for(int j = i+1; j < size; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main(){
    int arr[] = {1, 50, 7, 8, 2, 6};
    int size = sizeof(arr)/sizeof(int);

    selectionSort( arr, size);

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n";
    return 0;
}