#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the rows" << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        getch();
        while (col <= n)
        {
            char ch = 'A' + row + col - 2;
            cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }

    //return 0;
}
