#include <iostream>
using namespace std;
int main()
{
    int n;
    
    cout << "Enter rows and column" << endl;
    cin >> n;
    int row = 1;
    char ch = ('A' + row - 1);

    while (row <= n)
    {
        int col = 1;                      
        while (col <= row)
        {
            // char ch = ('A' + row - 1);
            cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }
}
// Enter rows and column
// 5
// A
// B B
// C C C
// D D D D
// E E E E E