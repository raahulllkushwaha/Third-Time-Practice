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
        {//part of added extra line of code
        
            // already sorted
            break;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the size of an array";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Original Array"
         << " ";
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