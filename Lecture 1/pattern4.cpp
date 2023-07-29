#include <iostream>
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
        while (col <= n)
        {
            char ch = 'A' + row - 1; //This is main logic where 'A' - row + 1 means ('A' + 1[bcz row is one] - 1 {1-1 =0} so, 'A' will be print then the loop incremented by 1 so the value of row is 2 means 'A' + 2 - 1 means 'B' so the next row will print 'B' that's it.)
            cout << ch<<" ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}

// Enter the rows
// 5
// A A A A A 
// B B B B B 
// C C C C C 
// D D D D D 




// Second program only siny change

