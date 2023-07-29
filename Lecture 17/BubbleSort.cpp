#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        // Extra line of code added
        bool swapped = false;
        // end
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            // already sorted
            break;
        }
    }
}
int main()
{
    int arr[] = {34, 4, 21, 56, 9, 43, 67};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array before sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    bubbleSort(arr, n);
    cout << "Array after sort"
         << " ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}