#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }

        }
            swap(arr[i], arr[minIndex]);
    }
}
int main()
{
    int arr[] = {4, 1, 12, 8, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    selectionSort(arr, n);
    cout << "Sorted Array";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

