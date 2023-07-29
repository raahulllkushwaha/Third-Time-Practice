#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[6] = {1, -2, 5, 89, 47, 3};
    int brr[5] = {6, 32, -9, -4, 65};

    reverse(arr, 6);
    reverse(brr, 5);
    
    printArray(arr, 6);
    printArray(brr, 5);
    return 0;
}