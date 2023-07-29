#include <iostream>
using namespace std;
int main()
{
    int n;
    char ch = 'A';
    cout << "Enter the rows" << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << ch<<" ";
            ch++;
            col++;
        }
        // ch='A'+ row;
        cout << endl;
        row++;
    }

    return 0;
}
