#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter column" << endl;
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        char ch = ('A' + n - row);
        while (col <= row)
        {
            cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }
}