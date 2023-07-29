#include <iostream>
using namespace std;

void merge(int *arr, int start, int end)
{

    int mid = (start + end) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}
void mergeSort(int *arr, int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;

    // left part ko sort krna hai
    mergeSort(arr, start, mid);

    // right part ko sort krdo
    mergeSort(arr, mid + 1, end);

    // merge krdo dono ko
    merge(arr, start, end);
}

int main()
{
    int arr[12] = {4, 3, 1, 77, 0, 12, 66, 32, 11, 97, 9, 22};
    int n = 12;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}