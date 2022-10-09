#include <stdio.h>
int bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    { //this loop is for each pass and pass is size - 1
        for (int j = 0; j < size - i - 1; j++)
        { //this loop is for each comparison
            if (arr[j] > arr[j + 1])
            { //this code is for swapping
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int data[] = {24, 11, 99, 23, 55, 64};
    int size = sizeof(data) / sizeof(data[0]);
    bubbleSort(data, size);
    printf("Sorted Array in Ascening Order : ");
    printArray(data, size);
    return 0;
}