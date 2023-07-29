#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = n, spaces = 1, count = row;
        while (spaces <= row - 1)
        {
            cout << " ";
            spaces++;
        }
        while (col >= row)
        {
            cout << count;
            count++;
            col--;
        }
        cout << endl;
        row += 1;
    }
}

// #OUTPUT

// 1234
//  234
//   34
//    4