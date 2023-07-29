#include <iostream>
using namespace std;

int largestArray(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int n, arr[20];
    cout << "Enter the size of an array :- " << endl;
    cin >> n;
    cout << "Enter " << n << " elements of an array:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Largest in given array is:- " << largestArray(arr, n) << endl;
}