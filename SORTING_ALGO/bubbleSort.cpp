#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int s, int e){

    //
    for(int i = s; i <= e; i++){
        for(int j = s; j <= e-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {5, 8, 2 , 6 , 3, 0};
    int size = sizeof(arr)/sizeof(int);
    
    bubbleSort(arr, 0, size-1);

    for(int a: arr){
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}