#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int low, int high, int key)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            return binarySearch(arr, low, mid - 1, key);
        return binarySearch(arr, mid + 1, high, key);
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 6, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int result = binarySearch(arr, 0, n - 1, key);
    if (result == -1)
        cout << "Element not found in array" << endl;
    else
        cout << "Element found at index: " << result << endl;
    return 0;
}
