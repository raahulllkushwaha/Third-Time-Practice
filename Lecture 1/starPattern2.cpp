

#include <iostream>
using namespace std;

// int main()
// {

//     int n;
//     cout << "Enter n" << endl;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int star = n - row + 1;
//         while (star)
//         {
//             cout << "*";
//             star--;
//         }

//         cout << endl;
//         row++;
//     }
//     return 0;
// }
// 2.
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int star = n - row + 1;
        while (star)
        {
            cout << col;
            col++;
            star--;
        }
        cout << endl;
        row++;
    }
    return 0;
}