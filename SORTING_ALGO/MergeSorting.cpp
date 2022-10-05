void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1], b[n2];
    for (int z = 0; z < n1; z++)
    {
        a[z] = arr[z + l];
    }
    for (int x = 0; x < n2; x++)
    {
        b[x] = arr[mid + 1 + x];
    }
    int i = 0; 
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1) // to copy the leftover element of new array A
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n2) // to copy the leftover element if any of new element B
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
#include <iostream>
using namespace std;
int main()
{
    int a[] = {5, 4, 3, 2, 1};
    mergeSort(a, 0, 4);
    cout << "Array after sorting is:" << endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}