#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];

    int cnt = 0;

    for(int i = s+1; i <= e; i++){
        if(pivot >= arr[i]){
            cnt++;
        }
    }

    //place pivot at right place
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    //left and right part managing
    int i = s, j = e;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    //base case
    if(s >= e)
        return ;
    
    //partition
    int p = partition(arr, s, e);

    //left sort using quicksort
    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);
}
int main(){
    int arr[] = {3 , 4, 1, 5, 2};
    int size = sizeof(arr)/sizeof(int);
    
    quickSort(arr, 0, size - 1);

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
    return 0;
}