#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    int row;
    cin >> row;
    int col;
    cin >> col;
    // Creating a2D arary
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col]; // 2D Array Creation done
    }
    // Taking input of 2D Array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Taking Output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Realising memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}