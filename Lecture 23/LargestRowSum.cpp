#include <iostream>
using namespace std;

int largestRowSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = 0;
    for (row = 0; row < 3; row++)
    {
        int sum = 0;
        for (col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << " The maximun sum is " << maxi << endl;
    return rowIndex;
} 

int main()
{
    int arr[3][3];
    cout << "Enter the elements of an array" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    int ans = largestRowSum(arr, 3, 3);
    cout << "Max row is at index " << ans << endl;

    return 0;
}