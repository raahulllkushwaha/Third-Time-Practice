#include <iostream>
using namespace std;
int findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans ^ arr[i];
        cout << ans;
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 1, 2, 3};
    int size = sizeof(arr) / sizeof(int);
    int ans = 0;
    for (int i = 0; i < size; i++)
        // {
        ans = ans ^ arr[i];
    // return ans;
    // }
    cout << "Answer is" << ans;
    return 0;
    // findUnique(arr, n);
}