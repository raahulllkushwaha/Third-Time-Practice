#include <iostream>
// #include<graphics.h>
// #include<snap
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for (int col = 0; col < mCols; col++)
    {
        if (col & 1)
        {
            // Odd Index -> Bottom to top

            for (int row = nRows - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            // 0 or Even Index-> Top to bottom

            for (int row = 0; row < nRows; row++)
            {
                cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

int main()
{
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> sineWave = wavePrint(arr, n, m);
    cout << endl
         << "The sine wave order of the array is: " << endl;
    for (int i = 0; i < sineWave.size(); i++)
    {
        cout << sineWave[i] << " ";
    }
    cout << endl;

    return 0;
}