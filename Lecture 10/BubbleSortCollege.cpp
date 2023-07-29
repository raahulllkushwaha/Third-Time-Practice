#include <iostream>
using namespace std;
void swapping(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void display(int *array, int size)
{
    for (int i = 0; i < size; i++)

        cout << array[i] << endl;
}

void bubbleSort(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        int swaps = 0;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swapping(array[j], array[j + 1]);
                swaps = 1;
            }
        }
        if (!swaps)
            break;
    }
}
int main()
{
    int n;
    cout << "Enter the no of elements";
    cin >> n;
    int arr[n];
    cout << "Enter elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before sorting: ";
    display(arr, n);
    bubbleSort(arr, n);
    cout << "Array after sorting";
    display(arr, n);

    return 0;
}

//
