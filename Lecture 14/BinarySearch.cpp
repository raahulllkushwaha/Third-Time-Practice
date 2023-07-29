#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
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
    return -11111;
}
int main()
{
    int even[6] = {2, 3, 4, 6, 7, 9};
    int odd[5] = {3, 6, 7, 9, 11};

    int evenIndex = binarySearch(even, 6, 7);
    int oddIndex = binarySearch(odd, 5, 2);

    cout << "Index found in:- " << evenIndex << endl;
    cout << "Index found in:- " << oddIndex << endl;                     
    return 0;
}