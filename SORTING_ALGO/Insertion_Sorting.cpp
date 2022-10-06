// Insertion Sorting

void insertionSort(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = array[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (current < array[j])
            {
                array[j + 1] = array[j];
            }
            else
            {
                break; // no need to compare more, proceed to next pass
            }
        }
        array[j + 1] = current;
    }
}

#include <iostream>
using namespace std;
int main()
{
    int arr[100], n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements of an Array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    cout << "After the Sorting, Array will be" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}