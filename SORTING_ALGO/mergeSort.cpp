#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copying two values
    int mainArrayIndex = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid+1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    //merging two arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    
    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2])
            arr[mainArrayIndex++] = first[index1++];
        else
            arr[mainArrayIndex++] = second[index2++];
    }

    //remaining elements filling
    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }
    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }

    //deleting the pointers
    delete []first;
    delete []second;
}

void mergeSort(int *arr, int s, int e){
    //base case
    if(s >= e){
        return;
    }
    //mid
    int mid = (s+e)/2;
    
    //sorting left
    mergeSort(arr, s, mid);

    //sorting right
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);
}

int main(){
    int arr[] = {10, 5, 7, 82, 57, 92};
    int size = sizeof(arr)/sizeof(int);

    mergeSort(arr, 0, size-1);

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}