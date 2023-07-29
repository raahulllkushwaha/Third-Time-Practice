#include <iostream>
using namespace std;

int main()
{
    int sum[100][100], n[100][100], m[100][100], row, col, i, j;
    cout << "Enter the number of rows: " << endl;
    cin >> row;
    cout << "Enter the numbsr of column:- " << endl;
    cin >> col;
    cout << "Enter the elements of first matrix: - " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> n[i][j];
        }
    }
    cout << "Enter the elements of second matrix: - " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> m[i][j];
        }
    }
    cout << "Sum of the matrix is :- " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum[i][j] = n[i][j] + m[i][j];
            cout << sum[i][j] << " ";
        }
    }
    return 0;
}