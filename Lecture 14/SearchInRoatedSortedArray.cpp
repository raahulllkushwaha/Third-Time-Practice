#include <iostream>
using namespace std;
int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int binarySearch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -11;
}
int FindPosition(int arr[], int n, int k)
{
    int pivot = getPivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        return binarySearch(arr, pivot, n - 1, k);
    }
    else
    {
        return binarySearch(arr, 0, pivot - 1, k);
    }
}
int main()
{
    int arr[5] = {3, 8, 10, 17, 1};
    // cout << "Pivot is " << getPivot(arr, 5)<<endl;
    // int even[6] = {2, 3, 4, 6, 7, 9};
    // int odd[5] = {3, 6, 7, 9, 11};
    // int evenIndex = binarySearch(even, 6, 7);
    // int oddIndex = binarySearch(odd, 5, 2);
    // cout << "Index  " << evenIndex << endl;
    // cout << "Index  " << oddIndex << endl;
    cout << binarySearch(arr, 0, n - 1, 17);
    return 0;
}